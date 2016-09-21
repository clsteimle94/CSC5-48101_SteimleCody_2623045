/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on September 21, 2016, 9:45 AM
 * Purpose:  Find out much artificial sweetener in a soda can kill you
 */

//System Libraries Here
#include <iostream>   //Input output objects
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float SODASWT=350*0.001f;
const float PDGRAM=4.53592e2f;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float pWeight, gWeight; //The user weight that a dieter will stop dieting at, p for pounds, g for grams
    float sodaAmt;            //The amount of soda to needed kill a person
    
    //Input or initialize values Here
    cout<<"At what weight in pounds will you stop dieting?"<<endl;
    cin>>pWeight;
    
    //Process/Calculations Here
    gWeight=pWeight*PDGRAM;
    sodaAmt=gWeight/7/SODASWT;
    
    int round=sodaAmt*100+0.5f; //Shift by 2 decimal places *100 then round up 0.5
    sodaAmt=round/100.0f;       //Integer truncated then shift back 2 decimal places
    
    //Output Located Here
    cout<<"Test, users weight in grams: "<<endl;
    cout<<gWeight<<endl;
    cout<<"It will take this many sodas to kill you: "<<endl;
    cout<<sodaAmt<<endl;

    //Exit
    return 0;
}

