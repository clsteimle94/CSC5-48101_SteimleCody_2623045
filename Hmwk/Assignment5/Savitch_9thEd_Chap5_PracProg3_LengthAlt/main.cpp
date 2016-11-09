/* 
   File:   main.cpp
   Author: Cody Steimle
   Created on November 08, 2016, 1:20 PM
   Purpose: Convert Centimeters/Meters into Inches/Feet
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Namespace used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int entLnth(int &);           //Enter Length in Meters and Centimeters
float conLnth(int &,float &); //Convert Length
float outLnth(int &,float &); //Output Length
        
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    char repeat;        //Repeat the program
    float inches,meters;
    int feet,centmtr;   //Feet, Centimeters
    
    //Initialize
    cout<<"This program converts inches/feet into centimeters/meters."<<endl;
    
    //Process values
    do{
        centmtr=entLnth(centmtr);
        inches=conLnth(centmtr,inches);
        outLnth(feet,inches);
        cout<<"Would you like to run this program again? (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');

    //Exit Program
    return 0;
}

int entLnth(int &ttlCent){
    //Declare Variables
    int meters,centmtr;
    //Input Values
    do{
        cout<<"Enter the length in meters: ";
        cin>>meters;
    }while(meters<0);    
    do{   
        cout<<"Enter the remaining centimeters (<100): ";
        cin>>centmtr;
    }while(centmtr>=100||centmtr<0);    
    ttlCent=(meters*100)+centmtr;    //Totals the combined centimeters
    return ttlCent;
}

float conLnth(int &centmtr,float &inches){
    //Declare Variables
    float const CTMTRIN=0.3937f;   //Centimeters to Inches
    //Convert centimeters into inches
    inches=centmtr*CTMTRIN;
    return inches;
}

float outLnth(int &feet,float &inches){
    feet=inches/12;           //Truncates and gets the feet
    inches=inches-(feet*12);  //Subtracts off feet and leaves remainder
    cout<<"Feet: "<<feet<<endl;
    cout<<"Inches: "<<inches<<endl;
}