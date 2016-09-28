/* 
   File:   main
   Author: Cody Steimle
   Created on September 27, 2016, 5:32 PM
   Purpose:  To calculate where the money goes in a week's pay.
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
    int hours, depndts;                                          //Hours worked, Worker's number of dependents
    float rate, grospay, ssTax, fedTax, siTax, hlthIns, tkhmPay; //Rate of pay, Gross Pay, Social Security Tax, Federal Income Tax, State Income Tax, Health Insurance, Take home pay
    
    //Input values
    cout<<"This program will show how the money is dispersed in a paycheck."<<endl;
    cout<<"How many hours did the person work in a week?"<<endl;
    cin>>hours;
    cout<<"What is the rate of pay for this person?"<<endl;
    cin>>rate;
    cout<<"How many dependents does this person have?"<<endl;
    cin>>depndts;
    
    //Process values -> Map inputs to Outputs
    if (hours > 40)
        grospay=rate*40+1.5*rate*(hours-40);  //used if overtime was done
    else
        grospay=rate*hours;                   //used when no overtime
    
    ssTax=grospay*0.06+0.005f;
    fedTax=grospay*0.14+0.005f;
    siTax=grospay*0.05+0.005f;
    
    if (depndts > 2)
        {
        hlthIns=35.0f;          
        tkhmPay=grospay-hlthIns-10-ssTax-fedTax-siTax; //when 3 or more dependents, additional health insurance is needed.
        }    
    else
        {
        hlthIns=0.0f;
        tkhmPay=grospay-10-ssTax-fedTax-siTax;         //when 2 or less dependents, no additional health insurance required. 
        }
    
    //Displays proper dollar amounts
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Display Output
    cout<<"This is the total before deductions:        $"<<grospay<<endl;
    cout<<"Amount taken from Social Security Tax (6%): $"<<ssTax<<endl;
    cout<<"Amount taken from Federal Income Tax (14%): $"<<fedTax<<endl;
    cout<<"Amount taken from State Income Tax (5%):    $"<<siTax<<endl;
    cout<<"Amount taken from Union dues:               $10.00"<<endl;
    cout<<"Amount spent from additional Health Care:   $"<<hlthIns<<endl;
    cout<<"Take home amount for the person:            $"<<tkhmPay<<endl;
    
    //Exit Program
    return 0;
}