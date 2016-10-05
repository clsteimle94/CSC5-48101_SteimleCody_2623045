/* 
   File:   main
   Author: Cody Steimle
   Created on October 4, 2016, 11:13 AM
   Purpose:  Process credit balance and payment after interest.
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
    float accbal, intrst, minpay, ttldue;  //Account balance, Interest, Minimum Payment, Total Due
    
    //Input values
    cout<<"This program will update your current credit account balance with the company's interest rate."<<endl;
    cout<<"Enter the credit account balance:"<<endl;
    cin>>accbal;
    
    //Process values -> Map inputs to Outputs
    if(accbal<=10)  //If the balance is less than or equal to 10$
    {
        minpay=accbal;
        ttldue=accbal;
    }
    else if((accbal>10)&&(accbal<=1000))  //If the balance is between 10$ and 1000$
    {
        intrst=0.015*accbal;   //1.5% interest rest
        ttldue=intrst+accbal;
        if(accbal<98.5)        //$98.60 is were the minimum payment becomes greater than $10
        minpay=10;             //Minimum payment must always be at least 10$
        else    
        minpay=0.10*ttldue;    
    }
    else if(accbal>1000)      //If the balance is greater than 1000$
    {
        intrst=(0.01*(accbal-1000))+15;  //Takes 15$ from the base 1000$ then charges the 1% for the additional balance
        ttldue=intrst+accbal;
        minpay=0.10*ttldue;
    }
    
    //Displays proper dollar amounts
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Display Output
    cout<<"After applying the interest rate to the balance of: $"<<accbal<<endl;
    cout<<"The minimum payment due:                            $"<<minpay<<endl;
    cout<<"The total due balance on the account:               $"<<ttldue<<endl;
            
    //Exit Program
    return 0;
}