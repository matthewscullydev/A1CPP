#include <fstream>
#include <iostream>

#include "debug.h"

using namespace std;

int main() {
    // test case #1

    unsigned int dbg_level = PRINT_L1 | PRINT_L3;

    set_debug_environment(dbg_level);

    debug("message 1");

    debug("message 2", PRINT_L2);

    debug("message 3", PRINT_L3);

    debug_close();
    // test case #2

    dbg_level = PRINT_L2;

    set_debug_environment(dbg_level, true);

    debug("message 1");

    string m2("message 2");

    debug(m2, PRINT_L2);

    debug("message 3", PRINT_L2);

    debug("message 4", PRINT_L3);
}
