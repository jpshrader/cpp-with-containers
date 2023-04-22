#include <iostream>

std::string GetName() {
    std::string name;
    std::getline(std::cin, name);

    return name;
}

void PrintLine(std::string line) {
    std::cout << line << std::endl;
}