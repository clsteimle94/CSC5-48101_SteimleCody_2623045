/* 
   File:   main
   Author: Cody Steimle
   Created on October 28th, 2016, 10:00 AM
   Purpose:  Converts Fahrenheit to Celsius through a table
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float tempCnv(float);
float tempCnv(float,float,float,float,float);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare freezing and boiling pts of water
    //for degree Fahrenheit and Celsius 
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    int begF=0,endF=250;
    
    //Process values -> Map inputs to Outputs
    cout<<"Degree F      Degree C"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int degF=begF;degF<=endF;degF++){
        cout<<setw(6)<<degF<<" F"
            <<setw(12)<<tempCnv(degF)<<" C"<<endl;
    }

    //Exit Program
    return 0;
}

//Temperature conversion from degree Fahrenheit to Celsius
//Input
//  f->Fahrenheit
//Output
//  c->Celsius
float tempCnv(float f){
    return (f-32.0f)*5/9;
}