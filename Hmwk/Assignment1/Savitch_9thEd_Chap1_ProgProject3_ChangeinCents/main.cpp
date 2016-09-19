/* 
   File:   main.cpp
   Author: Cody Steimle
   Created on September 18, 2016, 10:41 PM
   Purpose: To calculate coins and convert them to value in cents.
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Namespace used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    short quart,dimes,nickl,cents;
    
    //Set values
    quart=quart*25;
    dimes=dimes*10;
    nickl=nickl*5;
    cents=quart+dimes+nickl;
    
    //Process values -> Map inputs to outputs
    cout<<"Enter the number of quarters"<<endl;
    cin>>quart;
    cout<<"Enter the number of dimes"<<endl;
    cin>>dimes;
    cout<<"Enter the number of nickels"<<endl;    
    cin>>nickl;       
            
    //Display Output
    cout<<"The amount of money is "<<cents<<"cents"<<endl;
    
    //Exit Program
    return 0;
}