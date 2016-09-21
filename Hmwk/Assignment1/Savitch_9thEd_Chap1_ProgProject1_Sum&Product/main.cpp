/* 
   File:   main.cpp
   Author: Cody Steimle
   Created on August 29, 2016, 9:41 AM
   Purpose: Finding the sum and product of two integers.
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
    short a,b,c,d;  //a and b will be determined by the user, c and d will be solutions
    
    //Set values
    cout<<"Enter two of any two digit whole numbers:"<<endl;
    cin>>a>>b;  //User picks any two numbers within 2 significant digits
    
    //Process values -> Map inputs to outputs
    c=a+b;
    d=a*b;
    
    //Display Output
    cout<<"The sum of the two numbers is"<<" = "<<c<<endl;
    cout<<"The product of the two numbers is"<<" = "<<d<<endl;
    
    //Exit Program
    return 0;
}