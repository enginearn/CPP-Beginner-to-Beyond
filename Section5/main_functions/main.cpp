#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Number of command line arguments: " << argc << "\n";
    for (int i = 0; i < argc; i++) {
        std::cout << "argv[" << i << "] = " << argv[i] << "\n";
    }
    return 0;
}