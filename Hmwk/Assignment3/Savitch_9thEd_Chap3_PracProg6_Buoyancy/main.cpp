/* 
   File:   main
   Author: Cody Steimle
   Created on October 3, 2016, 8:48 PM
   Purpose:  Finds out if a sphere in water will float or sink
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
float PI=3.14159f;  //PI
float WATER=62.4*10e-3f;  //Weight of water

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float radius, volume, buoyan;  //buoyant force
    int weight;
    
    //Input values
    cout<<"This program will determine if a sphere would float or sink in water."<<endl;
    cout<<"Type the weight of the sphere in pounds:"<<endl;
    cin>>weight;
    cout<<"Type the radius of the sphere in feet:"<<endl;
    cin>>radius;
    
    //Process values -> Map inputs to Outputs and display
    volume=(1.33333)*PI*(radius*radius*radius);  //formula for the volume of a sphere
    buoyan=volume*WATER;                         //Buoyant force
    if(buoyan>=weight)
        cout<<"The sphere will float."<<endl;
    else
        cout<<"The sphere will sink."<<endl;    
    
    //Exit Program
    return 0;
}