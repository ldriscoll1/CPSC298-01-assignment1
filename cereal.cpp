#include <iostream>

using namespace std;
int main() {
    //Metric ton is 35,273.92 ounces
    double weightInOunces;
    double weightInTons;
    double boxesNeeded;
    double tonToOunceRatio = 35273.92;

    //Read the weight in ounces

    cout << "What is the weight of the package in ounces?" << endl;
    cin >> weightInOunces;

    //Output the weight in tons

    weightInTons=weightInOunces/tonToOunceRatio;
    cout << "Weight in Tons is " << weightInTons << "." << endl;

    //Output the number of boxs needed to yield one metric ton of cereal
    
    boxesNeeded=tonToOunceRatio/weightInOunces;

    cout << "Boxes needed to yield one metric ton of cereal " << boxesNeeded << "." << endl;

    return 0;
}
