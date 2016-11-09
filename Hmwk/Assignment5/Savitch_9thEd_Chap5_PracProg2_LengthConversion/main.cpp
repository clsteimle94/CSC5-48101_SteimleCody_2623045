/* 
   File:   main.cpp
   Author: Cody Steimle
   Created on November 08, 2016, 12:15 PM
   Purpose: Convert Inches/Feet into Centimeters/Meters
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Namespace used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int entLnth(int &);           //Enter Length in Inches and Feet
float conLnth(int &,float &); //Convert Length
float outLnth(int &,float &); //Output Length
        
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    char repeat;        //Repeat the program
    int inches,meters;
    float centmtr;      //Centimeters
    
    //Initialize
    cout<<"This program converts inches/feet into centimeters/meters."<<endl;
    
    //Process values
    do{
        inches=entLnth(inches);
        centmtr=conLnth(inches,centmtr);
        outLnth(meters,centmtr);
        cout<<"Would you like to run this program again? (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');

    //Exit Program
    return 0;
}

int entLnth(int &ttlInch){
    //Declare Variables
    int inches,feet;
    //Input Values
    do{
        cout<<"Enter the length in feet: ";
        cin>>feet;
    }while(feet<0);
    do{
        cout<<"Enter the remaining inches (<12): ";
        cin>>inches;
    }while(inches>=12||inches<0);
    ttlInch=(feet*12)+inches;   //Totals the combined inches
    return ttlInch;
}

float conLnth(int &inches,float &centmtr){
    //Declare Variables
    float const INCTMTR=2.54f;   //Inches to centimeters
    //Convert inches into centimeters
    centmtr=inches*INCTMTR;
    return centmtr;
}

float outLnth(int &meters,float &centmtr){
    meters=centmtr*0.01f;         //Truncates and gets the meters
    centmtr=centmtr-(meters*100); //Subtracts off meters and leaves remainder
    cout<<"Meters: "<<meters<<endl;
    cout<<"Centimeters: "<<centmtr<<endl;
}
