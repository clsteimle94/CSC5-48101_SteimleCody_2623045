/* 
   File:   main.cpp
   Author: Cody Steimle
   Created on November 08, 2016, 2:00 PM
   Purpose: Converts Ounces/Pounds into Grams/Kilograms
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Namespace used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int entWght(int &);           //Enter Weight in Pounds and Ounces
float conWght(int &,float &); //Convert Weight
float outWght(int &,float &); //Output Weight
        
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Initialize
    cout<<"This program converts ounces/pounds into grams/kilograms."<<endl;
    
    //Declaration of Variables
    char repeat;         //Repeat the program
    int ounces,kilogm;   //Ounces, Kilograms
    float grams;
    
    //Process values
    do{
        ounces=entWght(ounces);
        grams=conWght(ounces,grams);
        outWght(kilogm, grams);
        cout<<"Would you like to run this program again? (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');

    //Exit Program
    return 0;
}

int entWght(int &ttlOunc){
    //Declare Variables
    int ounces,pounds;
    //Input Values
    do{
        cout<<"Enter the length in pounds: ";
        cin>>pounds;
    }while(pounds<0);
    do{    
        cout<<"Enter the remaining ounces : ";
        cin>>ounces;
    }while(ounces>=16||ounces<0);
    ttlOunc=(pounds*16)+ounces;   //Totals the combined ounces
    return ttlOunc;
}

float conWght(int &ounces,float &grams){
    //Declare Variables
    float const OZGRAM=28.3495f;   //Ounces to grams
    //Convert Ounces into Grams
    grams=ounces*OZGRAM;
    return grams;
}

float outWght(int &kilogm,float &grams){
    kilogm=grams*0.001f;       //Truncates and gets the kilograms
    grams=grams-(kilogm*1000); //Subtracts off kilograms and leaves remainder
    cout<<"Kilograms: "<<kilogm<<endl;
    cout<<"Grams: "<<grams<<endl;
}
