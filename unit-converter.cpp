#include <iostream>
#include <string>
#include <windows.h>
#include "unit-converter.h"
using namespace std;

int main() {
    system("color a && cls");
    float distanceInput;
    float distanceOutput;
    cout << "Welcome to the CLI Unit Converter!\n" << "Enter the distance in Centimeter: \n";
    cin >> distanceInput;

    cout << "Both of the folling outputs are same!\n";

    // We can Shotern the code by creating a custome header file!

    // We wrote 1 line of code to print the output using the header file!

    cout << "The Distance in Meters is: " << converter(distanceInput) << "m" << "\n";

    // We wrote 2 lines of code to print the same thing without header file!
    distanceOutput = distanceInput / 100;
    cout << "The Distance in Meters is: " << distanceOutput << "m" << "\n";

    return 0;
}