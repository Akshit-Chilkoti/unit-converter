#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    system("color a && cls");
    float distanceInput;
    float distanceOutput;
    cout << "Welcome to the CLI Unit Converter!\n" << "Enter the distance in Centimeter: \n";
    cin >> distanceInput;
    distanceOutput = distanceInput / 100;
    cout << "The Distance in Meters is: " << distanceOutput;
    return 0;
}