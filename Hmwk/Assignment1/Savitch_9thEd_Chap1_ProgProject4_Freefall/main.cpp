/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on September 12, 2016, 10:27 AM
 * Purpose:  Calculate the distance dropped in free fall.
 */

//System Libraries Here
#include <iostream>
#include <cmath> //Math Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float GRAVITY=32.174; //Acceleration in ft/sec^2
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time;   //Time as input in seconds
    float disFell;//Distance in free fall
    int   places; //Places to round the answer
    
    //Input or initialize values Here
    cout<<"This problem determines distance dropped in free-fall"<<endl;
    cout<<"Input the time in free fall, units of seconds"<<endl;
    cin>>time;
    cout<<"How many decimal places to round the result"<<endl;
    cin>>places;
    
    //Process/Calculations Here
    disFell=GRAVITY*time*time/2; 
    float shift=pow(10,places); //Number of places to shift
    int round1=disFell*shift+0.5; //Round to the nearest 10th
    disFell=round1/shift;
      
    //Output Located Here
    cout<<"Gravity = "<<GRAVITY<<" ft/sec^2"<<endl;
    cout<<"Time fallen = "<<GRAVITY<<" seconds"<<endl;
    cout<<"Distance traveled = "<<disFell<<" ft"<<endl;
    

    //Exit
    return 0;
}

