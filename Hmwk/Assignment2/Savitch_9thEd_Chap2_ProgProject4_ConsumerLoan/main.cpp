/* 
   File:   main
   Author: Cody Steimle
   Created on August 27, 2016, 6:31 PM
   Purpose:  To calculate what the discount installment loan will be.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float amtNeed, intRate, fceVal, monpay, intOwed;  //Amount the consumer needs in hand, Interest rate, Face Value, Monthly pay, Interest Owed
    int duratn;                                       //Duration of loan in months
    //Input values
    cout<<"This program will calculate a discount installment loan amount based on how much the user needs in hand."<<endl;
    cout<<"What is the amount of money the consumer needs?"<<endl;
    cin>>amtNeed;
    cout<<"What is the interest rate for the loan in decimal form?"<<endl;
    cin>>intRate;
    cout<<"How many months will the loan last?"<<endl;
    cin>>duratn;
    
    //Process values -> Map inputs to Outputs
    fceVal=amtNeed/(1-(intRate*duratn/12));
    monpay=fceVal/duratn;   
    
    //Displays proper dollar amounts
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Display Output
    cout<<"The face value of the loan is: $"<<fceVal<<endl;
    cout<<"The monthly payments will be:  $"<<monpay<<endl;

    //Exit Program
    return 0;
}
	