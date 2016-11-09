/* 
   File:   main.cpp
   Author: Cody Steimle
   Created on November 08, 2016, 1:45 PM
   Purpose: Converts Centimeters/Meters <---> Inches/Feet
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Namespace used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int entLen1(int &);           //Enter Length in Meters and Centimeters
float conLen1(int &,float &); //Convert Length
float outLen1(int &,float &); //Output Length
int entLen2(int &);           //Enter Length in Inches and Feet
float conLen2(int &,float &); //Convert Length
float outLen2(int &,float &); //Output Length
        
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    char repeat,answer;   //Repeat program, choice of conversion
    float inches1,meter1; //1's for method 1, 2's for 2
    int feet1,cntmtr1;
    int inches2,meter2;
    float cntmtr2; 
    
    //Initialize
    cout<<"This program converts inches/feet and centimeters/meters."<<endl;
    cout<<"Please choose one of the conversions (1/2)."<<endl;
    
    //Process values
    do{
        do{
            cout<<"1) Convert meters/centimeters -> inches/feet."<<endl;
            cout<<"2) Convert inches/feet -> meters/centimeters."<<endl;
            cin>>answer;
        }while(answer!='1'&&answer!='2');
        if(answer=='1'){ 
            cntmtr1=entLen1(cntmtr1);
            inches1=conLen1(cntmtr1,inches1);
            outLen1(feet1,inches1);
        }
        else if(answer=='2'){
            inches2=entLen2(inches2);
            cntmtr2=conLen2(inches2,cntmtr2);
            outLen2(meter2,cntmtr2);
        }
        cout<<"Would you like to run this program again? (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');

    //Exit Program
    return 0;
}

// Method 1 Meters/Centimeters to Feet/Inches
// Method 2 Feet/Inches to Meters/Centimeters

int entLen1(int &ttlCent){
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

float conLen1(int &centmtr,float &inches){
    //Declare Variables
    float const CTMTRIN=0.3937f;   //Centimeters to Inches
    //Convert centimeters into inches
    inches=centmtr*CTMTRIN;
    return inches;
}

float outLen1(int &feet,float &inches){
    feet=inches/12;           //Truncates and gets the feet
    inches=inches-(feet*12);  //Subtracts off feet and leaves remainder
    cout<<"Feet: "<<feet<<endl;
    cout<<"Inches: "<<inches<<endl;
}

int entLen2(int &ttlInch){
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

float conLen2(int &inches,float &centmtr){
    //Declare Variables
    float const INCTMTR=2.54f;   //Inches to centimeters
    //Convert inches into centimeters
    centmtr=inches*INCTMTR;
    return centmtr;
}

float outLen2(int &meters,float &centmtr){
    meters=centmtr*0.01f;         //Truncates and gets the meters
    centmtr=centmtr-(meters*100); //Subtracts off meters and leaves remainder
    cout<<"Meters: "<<meters<<endl;
    cout<<"Centimeters: "<<centmtr<<endl;
}
