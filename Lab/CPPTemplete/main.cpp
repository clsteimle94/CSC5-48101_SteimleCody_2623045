/* 
   File:   main.cpp
   Author: Cody Steimle
   Created on August 29, 2016, 9:41 AM
   Purpose: 
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
    short a,b,c;
    
    //Set values
    a=30000;
    b=20000;
    
    //Process values -> Map inputs to outputs
    c=a+b;
    
    //Display Output
    cout<<a<<" + "<<b<<" = "<<c<<endl;
    
    //Exit Program
    return 0;
}