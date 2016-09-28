/* 
   File:   main
   Author: Cody Steimle
   Created on September 27, 2016, 2:03 PM
   Purpose:  To covert a runners speed (mph) into pace (1 mile in [time]).
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Math Library
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
        
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float mph, pace, minpace, secpace; //Rate of speed, how many seconds to run a mile, minutes to run a mile, seconds to run a mile.
    
    //Input values
    cout<<"This program will convert running speed into mile pace."<<endl;
    cout<<"What is the running speed in mph?"<<endl;
    cin>>mph;  //User input running speed
    
    //Process values -> Map inputs to Outputs
    pace= 3600/mph;                     //It takes 3600 secs to run a mile at 1 mph
    minpace=pace/60;                    //secs to run a mile divided by 60
    minpace=static_cast<int>(minpace);  //turn the float into a int to drop the decimal
    secpace=pace-(minpace*60);
    
    //Rounding
    float shift=pow(10,2);         //Number of places to shift answer
    int round1=secpace*shift+0.5; //Round to nearest 10^places
    secpace=round1/shift;         //Then shift result back

    
    //Display Output
    cout<<"If the speed of "<<mph<<"mph is maintained, then it will take "<<minpace<<" minutes and "<<secpace<<" seconds to run 1 mile."<<endl;

    //Exit Program
    return 0;
}