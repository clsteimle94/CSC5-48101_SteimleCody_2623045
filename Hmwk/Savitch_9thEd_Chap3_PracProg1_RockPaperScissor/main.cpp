/* 
   File:   main
   Author: Cody Steimle
   Created on October 3, 2016, 10:48 AM
   Purpose:  A game of rock, paper, scissors
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string plyrOne, plyrTwo;
    
    //Input values
    cout<<"Player 1 type in either rock (R), paper(P), or scissors(S):"<<endl;
    cin>>plyrOne;
    cout<<"Player 2 type in either rock (R), paper(P), or scissors(S):"<<endl;
    cin>>plyrTwo;   
    
    //Process values -> Map inputs to Outputs
    switch(plyrOne){
        case 'r': cout<<"rock"<<endl;break;
        case 'p': {
            if(plyrTwo=0){
                cout<<"There are 29 days in February, "<<endl;
            }else{
                cout<<"There are 28 days in February, "<<endl;
            }
            break;
        }
        case 's': cout<<"scissor"<<endl;break;
    }
           
    //Display Output
    cout<<"Rock smashes Scissors!"<<endl;    
    cout<<"Paper covers Rock!"<<plyrOne<<endl;    
    cout<<"Scissors cut Paper!"<<endl;
    cout<<"Player 1 Wins!"<<endl;
    cout<<"Player 2 Wins!"<<endl;
    //Exit Program
    return 0;
}