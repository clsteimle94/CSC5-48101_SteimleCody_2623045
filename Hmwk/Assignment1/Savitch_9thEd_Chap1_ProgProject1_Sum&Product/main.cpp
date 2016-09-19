/* 
   File:   main.cpp
   Author: Cody Steimle
   Created on August 29, 2016, 9:41 AM
   Purpose: Finding the sum and product of two integers
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
    short a,b,c,d;
    
    //Set values
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    
    //Process values -> Map inputs to outputs
    c=a+b;
    d=a*b;
    
    //Display Output
    cout<<"The sum of the two numbers is "<<a<<" + "<<b<<" = "<<c<<endl;
    cout<<"The product of the two numbers is "<<a<<" * "<<b<<" = "<<d<<endl;
    
    //Exit Program
    return 0;
}