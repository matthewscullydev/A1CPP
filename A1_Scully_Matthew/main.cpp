#include <fstream>
#include <iostream>

#include "debug.h"

using namespace std;

int main() {
    unsigned int dbg_level = PRINT_L2;
    set_debug_environment(dbg_level, true);
    debug("cory brunga");
    string m2("jake");
    debug(m2, PRINT_L2);
    debug("message 3", PRINT_L2);
    debug("message 4", PRINT_L3);
    /*
    myFile.open("test.log");
    myFile << "Writing this to a file.\n";
    myFile.close();
    return 0;
    */
}
