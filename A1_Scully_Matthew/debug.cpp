
#include "debug.h"

#include <fstream>
#include <iostream>
#include <istream>
#include <string>

std::fstream myFile;
int globalvar = 0;
unsigned int debug_dummy;
bool file_logging = true;

void set_debug_environment(unsigned int debug_levels, bool file_logging) {
    if (debug_levels == PRINT_L1 || PRINT_L2 || PRINT_L3) {
        globalvar = debug_levels;
        file_logging = true;
        myFile.open("test.log");
    } else if (debug_levels == PRINT_L0) {
        globalvar = debug_levels;
    }
}

void debug(std::string message, unsigned int debug_level) {
    if (debug_level == PRINT_L1) {
        if (globalvar != PRINT_L0) {
            std::cout << message << std::endl;
            if (file_logging) {
                myFile << message << std::endl;
            }
        }
    } else if (debug_level == PRINT_L2 || PRINT_L3) {
        std::cout << message << std::endl;
        if (file_logging) {
            myFile << message << std::endl;
        }
    }
}

void debug_close() {
    if (globalvar == PRINT_L1 || PRINT_L2 || PRINT_L3) {
        myFile.close();
    }
}
