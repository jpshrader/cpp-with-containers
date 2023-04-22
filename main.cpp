#include <iostream>
#include <string>

#include "helpers.h"

int main() {
    PrintLine("What is your name: ");

    std::string name = GetName();

    PrintLine("Hello " + name + "!");
    return 0;
}
