/**
 *  @author Put your name here
 *  @date Put the date here (Semester is OK)
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "sgilbert"; // "WHO ARE YOU?";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here

    // Write your code here
    //  Input: weight of a box of cereal in ounces
    //  Output: weight of box in metric tons and number of boxes in a metric ton.
    //  Given: metric ton is 35,273.92 ounces
    //  Calculation: the weight in metric tons is equal to the weight in ounces divided
    //     by the number of metric tons per ounce.
    //  Calculation: the number of boxes per metric ton is equal to one divided by
    //     the weight of a single box in metric tons.
    //  Added a line.

    // Write your code here
    cout << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "Cereal Box Calculator" << endl;
    cout << string(50, '-') << endl;
    // Input
    cout << "Enter ounces per box of cereal: ";     // prompt
    double ouncesPerBox;                            // store input
    cin >> ouncesPerBox;                            // read the input

    // Processing section
    double weightInTons = ouncesPerBox / 35273.92;
    double boxesPerTon = 1.0 / weightInTons;

    //Output section
        cout << "Weight in metric tons, boxes per ton: ["
        << weightInTons << ", " << boxesPerTon << "]" << endl;

    return 0;
}

