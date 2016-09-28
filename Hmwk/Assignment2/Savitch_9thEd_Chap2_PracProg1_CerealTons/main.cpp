/* 
   File:   main
   Author: Cody Steimle
   Created on September 27, 2016, 2:09 PM
   Purpose:  To covert a cereal box's weight in ounces into metric tons, and also display how many boxes are needed to yield 1 ton.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float TON=3.527392e4f; //Conversion of ounces in a ton
const float OUNCE=3.125e-5f; //Conversion of tons in a ounce
        
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int boxwght;           //Cereal box weight
    float boxton, ttlbox;  //The weight of a cereal box in tons, Total boxes needed to make a ton.
    
    
    //Input values
    cout<<"This program will convert the weight of your cereal box into tons."<<endl;
    cout<<"What is the weight in ounces of the cereal box?"<<endl;
    cin>>boxwght;
    
    //Process values -> Map inputs to Outputs
    boxton=OUNCE*boxwght;
    ttlbox=TON/boxwght;
    
    //Display Output
    cout<<"The converted weight of the "<<boxwght<<"oz. cereal box is "<<boxton<<" tons."<<endl;
    cout<<"It would take "<<ttlbox<<" cereal boxes to yield 1 metric ton."<<endl;

    //Exit Program
    return 0;
}
