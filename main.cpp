#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int width = 25;
const string version = "0.1";

void WELCOME() {
    cout << string(width, '*') << endl;
    cout << "*   Welcome to CPass!   *" << endl;
    cout << string(width, '*') << endl;
    cout << "version: " << version << endl << endl;
}
int OPTIONS() {
    int chosen;
    cout << string(width, '*') << endl;
    cout << "1. Search" << endl;
    cout << "2. Add" << endl;
    cout << "3. Delete" << endl;
    cin >> chosen;
    return chosen;
}

int main() {
    WELCOME();
    int option = OPTIONS();

    return 0;
}