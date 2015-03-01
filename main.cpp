#include "easylogging++.h"
#include "Square.h"

// using namespace::std;

INITIALIZE_EASYLOGGINGPP

int main(int argc, char** argv)
{
    START_EASYLOGGINGPP(argc, argv);
    // Load configuration from file
    el::Configurations conf("log_conf.conf");
    // Actually reconfigure all loggers instead
    el::Loggers::reconfigureAllLoggers(conf);

    LOG(INFO) << "Hello, world";

    Square* sq1 = new Square(1);

    return 0;
}