#include <iostream>
#include <chrono>
#include <thread>

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main() {
    int delayOneSecond_ms = 1000;
    double heightOfPumpkin_m = 50;
    double heightOfGround = 0;
    double velocity = -10;
    double timeElapsed = 0;
    


    std::cout << "Starting simuation" << std::endl;
    while(heightOfPumpkin_m > 0) {
        

        sleep_for(milliseconds(delayOneSecond_ms));

        heightOfPumpkin_m = heightOfPumpkin_m + velocity;
        timeElapsed = timeElapsed + delayOneSecond_ms;




        



        std::cout << "Time (ms): " << timeElapsed << " -- altitude: " << heightOfPumpkin_m << " -- velocity: " << velocity << std::endl;
    }
    std::cout << "Slam! <huge mess>" << std::endl;
}