#include <Wt/WApplication.h>
#include "HelloApplication.h"

/**
 * \mainpage
 * @brief Runs the hello world program in the browser
 * 
 * Runs a basic hello world program from the witty tutorials
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char **argv)
{
    return WRun(argc, argv, [](const WEnvironment &env)
                { return std::make_unique<HelloApplication>(env); });
}