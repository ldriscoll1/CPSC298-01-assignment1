#include <iostream>

using namespace std;

int main(){
    int numHours;
    double grossPay;
    double federalIncomeTax;
    double stateIncomeTax;
    double socialSecurityTax;
    double netHomePay;
    //Read the number of hours worked

    cout << "How many hours have you worked this week?"<<endl;
    cin >> numHours;

    //Output gross pay

    //Paid $16 per hour where overtime is $1.5*16 per hour
    //Assuming that regular hours is 40 hours
    //Hours more than regular

    if(numHours>=40){
        grossPay=numHours*16 + (numHours-40)*1.5*16;
    }

    //No Overtime hours

    else{
        grossPay=numHours*16;
    }
    cout << "The worker's gross pay is "<<grossPay<<"."<<endl;

    //Output federal income tax
    
    //14% of pay is federal income tax

    federalIncomeTax=grossPay*.14;
    cout << "The amount for the federal income tax is " << federalIncomeTax << "." << endl;

    //Output social security tax

    //6% of pay is social security

    socialSecurityTax=grossPay*.06;
    cout << "The amount for the social security tax is " << socialSecurityTax << "." << endl;

    //Output state income tax

    //5% of pay is social security

    stateIncomeTax=grossPay*.05;
    cout << "The amount for the state income tax is " << stateIncomeTax << "." << endl;
    //Output medical insurance

    //$10 per week is medical insurance

    cout << "The amount for the medical insurance is $10" << endl;

    //Output net take-home pay

    netHomePay=grossPay-federalIncomeTax-socialSecurityTax-stateIncomeTax-10;
    cout << "The amount for the net take-home pay is " << netHomePay << "." << endl;
    
    return 0;
}