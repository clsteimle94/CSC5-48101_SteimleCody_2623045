/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on September 21, 2016, 9:45 AM
 * Purpose:  Find out much artificial sweetener in diet soda can kill you.
 */

//System Libraries Here
#include <iostream>   //Input output objects
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float SODASWT=350*0.001f;  //Amount of grams of sweetener in diet soda
const float PDGRAM=4.53592e2f;   //Pound to grams conversion

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float pWeight, gWeight; //The user weight that a dieter will stop dieting at, p for pounds, g for grams
    float sodaAmt;          //The amount of diet soda to needed kill a person
    
    //Input or initialize values Here
    cout<<"This program will provide a safe amount of artificial sweetener to consume within diet soda depending on weight."<<endl;
    cout<<"At what weight in pounds will you stop dieting?"<<endl;
    cin>>pWeight;
    
    //Process/Calculations Here
    gWeight=pWeight*PDGRAM;    //Converts pounds to grams
    sodaAmt=gWeight/7/SODASWT; //Takes 1/7th of a person's weight and calculates the deadly amount of soda.
    

    //Output Located Here
    cout<<"Based on 5 grams of artificial sweetener killing a 35 gram mouse, then ";
    cout<<"it will take "<<sodaAmt<<" diet sodas to kill a "<<gWeight<<" gram person."<<endl;

    //Exit
    return 0;
}

