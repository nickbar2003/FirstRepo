#include <iostream>
#include <chrono>
#include <thread>
#include <fstream>
#include <map>

using namespace std::this_thread;
using namespace std::chrono;

const int LOOP_DELAY_MS = 40;
const int DECADE = 10;

std::string readPrayers(std::string);
void printPrayers(std::string);
void joyfulRos(std::string);

