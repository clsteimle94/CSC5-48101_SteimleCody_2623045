/* 
   File:   main
   Author: Cody Steimle
   Created on October 11th, 2016, 10:15 AM
   Purpose:  To find the gravitational force of between two masses
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
float GRAVITY=6.673e-8f;  //Universal Gravity Constant cm^3/g/sec^2

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char ans;              //Answer for looping
    float distanc;         //Distance apart
    float msOne;           //First Mass
    float msTwo;           //Second Mass
    float force;           //The force between the two objects
    
    //Looping
    do{
    
    //Conversion of inputs
    cout<<"Enter the weight of the first object (in dynes):"<<endl;
    cin>>msOne;
    cout<<"Enter the weight of the second object(in dynes):"<<endl;     
    cin>>msTwo;
    cout<<"Enter the distance between the two objects (in centimeters):"<<endl;
    cin>>distanc; 
        
    //Process values -> Map inputs to Outputs
    force=GRAVITY*msOne*msTwo/(distanc*distanc);
    
    //Display Output
    cout<<"The gravitational force between the two object is : "<<force<<" dynes"<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>ans;
    }while((ans=='y')||(ans=='Y'));
    
    //Exit Program
    return 0;
}