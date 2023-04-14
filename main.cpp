#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "What is your name: ";

    string data;
    getline(cin, data);

    cout << "Hello " << data << "!\n";
    return 0;
}
