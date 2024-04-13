/**
 *  Pumpkin Launcher Simulation
 *      Now with ASCII art!
 *
 *  Contributors:
 *      Aaron S. Crandall <crandall@gonzaga.edu>
 *      Nicholas C. Barinaga ,
 *  Copyright: 2022
 */



#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>                  // setw(), setprecision()
#include <stdlib.h> 
#include <time.h>



using namespace std;
using namespace std::this_thread;   // sleep_for, sleep_unti
using namespace std::chrono;        // nanoseconds, system_clock, seconds



#define GROUND_ALTITUDE_M   0       
#define GRAVITY_MPS2        -9.8    


double curPumknFallingVelCalc(double, double);
double curPumknAltCalc(double, double);
double curDistFlownFor(double, double, double);
void printArt(double, double, double, double, int);
double doubleGen();
double windSpeedCalc();

int main() {
    string userInput = "";                          

    int simulationIntervalDeltaTime_ms = 1000;      
    double currentTime_ms = 0;

    double pumpkinCurrentFallingVelocity_ms = 25.0; 
    double pumpkinCurrentAltitude_m = 50;           

    double pumpkinCurrentForwardVelocity_mps = 15;	
	double pumpkinCurrentForwardDistance_m = 0;		

    double renderingMaxHeight_m = 110.0;
    double renderingMaxDistance_m = 395.0;
    double terminalMaxYCharacters = 22;
    double terminalMaxXCharacters = 79;

    int targetMaxDist_m = (renderingMaxDistance_m - 10);
    double targetDistance = -1;
    

    doubleGen();
    double windSpeed_ms = windSpeedCalc();


    srand (time(NULL));
    targetDistance = (rand() % targetMaxDist_m) + 11;
    

    int mPerCharXAxisTarget = targetMaxDist_m / terminalMaxXCharacters;

    int targetXCor = targetDistance / mPerCharXAxisTarget;



    

    std::cout << "--------------------------------------------------------------------" << std::endl;
    std::cout << "              Starting pumpkin drop program" << std::endl;
    std::cout << "--------------------------------------------------------------------" << std::endl;

    std::cout << "Beginning pumpkin drop simulation." << std::endl;
    std::cout << " Part 5: pumpkin cannon ASCII art launch!" << std::endl;
    std::cout << " Getting simulation parameters." << std::endl;

    std::cout << " Wind Speed is currently: " << windSpeed_ms << " meters per second\n";
    std::cout << " Target is at " << targetDistance << " meters away!\n";
    
    std::cout << " What should the starting height be for the launch (in meters) [" << pumpkinCurrentAltitude_m << "]: ";
    getline(cin, userInput);
    if( userInput != "" ) {
        pumpkinCurrentAltitude_m = stod(userInput);
    }

    
    std::cout << " What should the starting up/down velocity be for the drop (in meters per sec) [" << pumpkinCurrentFallingVelocity_ms << "]: ";
    getline(cin, userInput);
    if( userInput != "" ) {
        pumpkinCurrentFallingVelocity_ms = stod(userInput);
    }

    
    std::cout << " How fast forward should it fly (in meters per sec) [" << pumpkinCurrentForwardVelocity_mps << "]: ";
    getline(cin, userInput);
    if( userInput != "" ) {
        pumpkinCurrentForwardVelocity_mps = stod(userInput);
    }

    
    
    
    std::cout << "--------------------------------------------------------------------" << std::endl;
    std::cout << "              Starting pumpkin drop simulation" << std::endl;
    std::cout << "--------------------------------------------------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << fixed;     

    std::cout << "Time (ms): "    << setw(6) << std::setprecision(0) << currentTime_ms 
         << " -- Altitude: " << setw(7) << std::setprecision(2) << pumpkinCurrentAltitude_m 
         << " -- Velocity: " << setw(7) << std::setprecision(2) << pumpkinCurrentFallingVelocity_ms
         << " -- Forward distance: " << setw(7) << std::setprecision(2) << pumpkinCurrentForwardDistance_m << std::endl;




    while(pumpkinCurrentAltitude_m > GROUND_ALTITUDE_M) {
        sleep_for(milliseconds(simulationIntervalDeltaTime_ms));

        
        currentTime_ms = currentTime_ms + simulationIntervalDeltaTime_ms;

        
        double secondsSimulated_s = simulationIntervalDeltaTime_ms / 1000.0;

        
        double changeInVerticalVelocity_mps = GRAVITY_MPS2 * secondsSimulated_s;

        
        pumpkinCurrentFallingVelocity_ms = curPumknFallingVelCalc(pumpkinCurrentFallingVelocity_ms, changeInVerticalVelocity_mps);

        
        double distanceHeightChanged_m = pumpkinCurrentFallingVelocity_ms * secondsSimulated_s;

        
        pumpkinCurrentAltitude_m = curPumknAltCalc(pumpkinCurrentAltitude_m, distanceHeightChanged_m);

        
        double distanceFlownForward = curDistFlownFor(pumpkinCurrentForwardVelocity_mps, secondsSimulated_s, windSpeed_ms);

        
        pumpkinCurrentForwardDistance_m = pumpkinCurrentForwardDistance_m + distanceFlownForward;
 
        printArt(pumpkinCurrentAltitude_m, pumpkinCurrentForwardDistance_m, currentTime_ms, pumpkinCurrentFallingVelocity_ms, targetXCor);
    }
    
    if((targetDistance - 1.5) <= pumpkinCurrentForwardDistance_m && pumpkinCurrentForwardDistance_m <= (targetDistance + 1.5))

    std::cout << "You hit the Target!!!\n";
    std::cout << "SLAM! <giant pumpkin guts mess>" << std::endl;
    std::cout << "---------------- Simulation Complete ----------------------" << std::endl;

}



double curPumknFallingVelCalc(double curFallVel_mps, double changeInVertVel_mps) {
    double result = curFallVel_mps;
    result = result + changeInVertVel_mps;
    return result;
}

double curPumknAltCalc(double pumCurAlt_m, double distHeightChanged_m) {
    double result = pumCurAlt_m;
    result = result + distHeightChanged_m;
    return result;
}

double curDistFlownFor(double curForVel_mps, double secondsSim, double windSpeed_ms) {
    double result = curForVel_mps;
    result = curForVel_mps * secondsSim + windSpeed_ms;
    return result;
}

void printArt(double pumCuralt_m, double curForFlown_m, double time, double pumCurFallVel, int tarXCor) {

    double renderingMaxHeight_m = 110.0;
    double renderingMaxDistance_m = 395.0;
    double terminalMaxYCharacters = 22;
    double terminalMaxXCharacters = 79;


    int metersPerCharYAxis = renderingMaxHeight_m / terminalMaxYCharacters;
    int metersPerCharXAxis = renderingMaxDistance_m / terminalMaxXCharacters;

    int currentPumpkinYCoordinate =  pumCuralt_m / metersPerCharYAxis;
    int currentPumpkinXCoordinate =  curForFlown_m / metersPerCharXAxis;

        
    for( int currYCharHeight = terminalMaxYCharacters; currYCharHeight > 0; currYCharHeight-- ) {
        std::cout << "|";       

            
        if( currentPumpkinXCoordinate < terminalMaxXCharacters ) {
                
            if( currYCharHeight == currentPumpkinYCoordinate ) {
                    
                for( int currXSpacesOver = 0; currXSpacesOver < currentPumpkinXCoordinate; currXSpacesOver++ ) {
                    std::cout << " ";
                }
                std::cout << "@";   
                
            } else if( currYCharHeight == 1 && pumCuralt_m < 0 ) {
                for( int currXSpacesOver = 0; currXSpacesOver < currentPumpkinXCoordinate; currXSpacesOver++ ) {
                        std::cout << " ";
                }
                std::cout << "#";   
            }
        }
            
        std::cout << endl;  
    }    
    for(int count = 0; count < (tarXCor - 1); count++) {
        std::cout << "-";
        
    } std::cout << "^^^";
    for(int count = 79; count  > (tarXCor + 1); count-- ) {
        
        std::cout << "-";
    } std::cout << endl;
    

    
   


    

        
    std::cout << "Time (ms): "    << setw(6) << std::setprecision(0) << time 
            << " -- Altitude: " << setw(7) << std::setprecision(2) <<  pumCuralt_m
            << " -- Velocity: " << setw(7) << std::setprecision(2) << pumCurFallVel
            << " -- Forward distance: " << setw(7) << std::setprecision(2) << curForFlown_m
            << " -- Coord: (" << currentPumpkinXCoordinate << "," << currentPumpkinYCoordinate << ")" << endl;
}

double doubleGen() {

    srand(static_cast<unsigned int>(clock()));
    double result = double(rand()) / (double(RAND_MAX) + 1.0);

    return result;
}

double windSpeedCalc() {
    double result;

    double maxWindSpeed = 4.0;

    double randomDouble = doubleGen(); 

    double windSpeed = (2 * maxWindSpeed * randomDouble) - 4;

    result = windSpeed;

    return result;
    
}
