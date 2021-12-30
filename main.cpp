#include <plasma/client.h>
#include <arrow/util/logging.h>
#include <iostream>

using namespace plasma;

int main(int argc, char** argv) {
    PlasmaClient client;
    ARROW_CHECK_OK(client.Connect("/tmp/plasma"));
    std::cout<< "connected..." << std::endl;
    ARROW_CHECK_OK(client.Disconnect());
}