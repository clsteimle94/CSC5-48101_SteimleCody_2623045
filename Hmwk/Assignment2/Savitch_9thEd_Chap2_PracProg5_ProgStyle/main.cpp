/* 
   File:   main
   Author: Cody Steimle
   Created on September 27, 2016, 1:46 PM
   Purpose:  To properly format the code given in Savitch 9th edition chapter 2 practice program 5.
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
    double radius, volume;  //Sets the radius and the volume variables
    
    //Input values
    cout<<"This program will help calculate the volume of a sphere."<<endl;
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;  //User inputs the radius 
    
    //Process values -> Map inputs to Outputs
    volume=(4.0/3.0)*3.1415*radius*radius*radius;
    
    //Display Output
    cout<<"The volume of the sphere is "<<volume<<endl; 
    
    //Exit Program
    return 0;
}