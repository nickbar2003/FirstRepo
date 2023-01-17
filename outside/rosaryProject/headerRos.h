#include <chrono>
#include <fstream>
#include <iostream>
#include <map>
#include <stdlib.h>
#include <thread>

using namespace std::this_thread;
using namespace std::chrono;

const int LOOP_DELAY_MS = 50;
const int DECADE = 10;

std::string readPrayers(std::string);
void printPrayers(std::string);
void joyfulRos(std::string);
void determineRosType(char *);
