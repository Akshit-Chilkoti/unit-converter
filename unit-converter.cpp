#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    system("color a && cls");
    int distanceInput;
    int distanceOutput;
    cout << "Welcome to the CLI Unit Converter!\n" << "Enter the distance in Centimeter: \n";
    cin >> distanceInput;
    int distnceOutput = distanceInput / 100;
    cout << distanceOutput;
    return 0;
}