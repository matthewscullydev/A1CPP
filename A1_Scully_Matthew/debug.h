#include <string>
const unsigned int PRINT_L0 = 0x0;
const unsigned int PRINT_L1 = 0x1;
const unsigned int PRINT_L2 = 0x2;
const unsigned int PRINT_L3 = 0x3;

void set_debug_environment(unsigned int debug_levels,
                           bool file_logging = false);

void debug(std::string message, unsigned int debug_level = PRINT_L1);

void debug_close();
