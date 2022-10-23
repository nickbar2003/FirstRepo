#include <iostream>
#include <chrono>
#include <thread>

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main() {
    int delayOneSecond_ms = 1000;
    double heightOfPumpkin_m = 50;
    double heightOfGround = 0;
    double currentVelocity = 0;
    double timeSinceLaunch_ms = 0;
    double gravity_mps2 = -9.8;
    double addedVelocity_mps = 0;
    double timeFalling_s;
    double distanceFallen_m;
    double startingVelocity;
    double forwardVelocity_mps = 0;
    double distance_m = 0;
    std::string userSetForwardVelocity;
    std::string userSetHeight;
    std::string userSetVelocity;
    
    std::cout << "Welcome to the pumpkin throwyoff simulator, from what height would you like to toss the pumpkin: ";
    std::cin >> userSetHeight;
    heightOfPumpkin_m = stod(userSetHeight);
    std::cout << "What should the starting velocity of the pumpkin be: ";
    std::cin >> userSetVelocity;
    startingVelocity = stod(userSetVelocity);
    std::cout << "What should the starting forward velocity of the pumpkin be: ";
    std::cin >> userSetForwardVelocity;
    forwardVelocity_mps = stod(userSetForwardVelocity);

    

    std::cout << "Starting simuation" << std::endl;
    while(heightOfPumpkin_m > heightOfGround) {
        
        std::cout << "Time (ms): " << timeSinceLaunch_ms << " -- altitude: " << heightOfPumpkin_m << " -- velocity: " << currentVelocity << " distance is: " << distance_m << std::endl;
        sleep_for(milliseconds(delayOneSecond_ms));

        
        timeSinceLaunch_ms += delayOneSecond_ms;

        timeFalling_s = (timeSinceLaunch_ms / 1000);


        addedVelocity_mps = (gravity_mps2 * timeFalling_s);


        currentVelocity = startingVelocity + addedVelocity_mps;


        distanceFallen_m += currentVelocity;


        heightOfPumpkin_m = heightOfPumpkin_m + distanceFallen_m;

        distance_m = distance_m + (forwardVelocity_mps * (delayOneSecond_ms / 1000));
    
  
    



        
    }
    std::cout << "Slam! <huge mess>" << std::endl;
}