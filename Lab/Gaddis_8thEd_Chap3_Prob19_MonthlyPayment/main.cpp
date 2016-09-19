/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on September 19, 9:55 AM
 * Purpose:  Calculating monthly payments
 */

//System Libraries Here
#include <iostream>   //Input/output
#include <iomanip>    //Format
#include <cmath>      //Math library for power function
using namespace std;  //Name-space used in the system library

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int PERCENT=100;  //Percentage conversion
const int MONTHS=12;    //Months in a year

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char nCmPrds=36; //Number of monthly compounding periods
    float intRate=12;   //Percentage per year
    float loanAmt=1e4f; //$10,000 Loan
    float monPay;       //Monthly payment $'s
    float totPaid;      //Total amount paid $'s
    float intPaid;      //Total interest paid $'s
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    intRate/={PERCENT*MONTHS};
    float temp=pow((1+intRate),nCmPrds);
    monPay=intRate*temp*loanAmt/(temp-1);
    totPaid=nCmPrds*monPay;
    intPaid=totPaid-loanAmt;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Using floating point values gives an error"<<endl;
    cout<<"Loan Amount                  $:"<<setw(8)<<loanAmt<<endl;
    cout<<"Interest Rate %/month         :"<<setw(8)<<intRate<<endl;
    cout<<"Number of months              :"<<static_cast<int>{nCmPrds}<<endl;
    cout<<"Monthly Payment              $:"<<setw(8)<<monPay<<endl;
    cout<<"Interest Paid                $:"<<setw(8)<<intPaid<<endl;
    cout<<"Total Paid                   $:"<<setw(8)<<totPaid<<endl;
    
    //Process/Calculations Here
    monPay=intRate*temp*loanAmt/(temp-1);
    int mp=monPay*100+1;
    totPaid=nCmPrds*monPay;
    intPaid=totPaid-loanAmt;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Using integer values"<<endl;
    cout<<"Loan Amount                  $:"<<setw(8)<<loanAmt<<endl;
    cout<<"Interest Rate %/month         :"<<setw(8)<<intRate<<endl;
    cout<<"Number of months              :"<<static_cast<int>{nCmPrds}<<endl;
    cout<<"Monthly Payment              $:"<<setw(8)<<monPay<<endl;
    cout<<"Interest Paid                $:"<<setw(8)<<intPaid<<endl;
    cout<<"Total Paid                   $:"<<setw(8)<<totPaid<<endl;
    

    //Exit
    return 0;
}

