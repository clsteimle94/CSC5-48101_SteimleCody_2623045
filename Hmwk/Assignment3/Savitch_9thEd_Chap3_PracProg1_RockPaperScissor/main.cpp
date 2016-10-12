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
    char plyrOne, plyrTwo;
    
    //Input values
    cout<<"Player 1 type in either rock (R), paper(P), or scissors(S):"<<endl;
    cin>>plyrOne;
    cout<<"Player 2 type in either rock (R), paper(P), or scissors(S):"<<endl;
    cin>>plyrTwo;
    
    //validate input
    
    //Process values -> Map inputs to Outputs
    if(plyrOne=='r'||'R'){
    cout<<"Player 1 picks Rock"<<endl;
    }
        if(plyrTwo=='r'||'R'){
	    cout<<"Player 2 picks Rock"<<endl;
	    cout<<"Draw!"<<endl;
        }else if(plyrTwo=='p'||'P'){
            cout<<"Player 2 picks Paper"<<endl;	
	    cout<<"Paper covers Rock!"<<plyrOne<<endl;  
            cout<<"Player 2 Wins!"<<endl;
        }else if(plyrTwo=='s'||'S'){
            cout<<"Player 2 picks Scissors"<<endl;	
            cout<<"Rock smashes Scissors!"<<endl;  
            cout<<"Player 1 Wins!"<<endl;
        }	
    else if(plyrOne=='p'||'P'){
    cout<<"Player 1 picks Paper"<<endl;
	}
	if(plyrTwo=='r'||'R'){
            cout<<"Player 2 picks Rock"<<endl;	
	    cout<<"Paper covers Rock!"<<plyrOne<<endl;  
            cout<<"Player 1 Wins!"<<endl;
        }else if(plyrTwo=='p'||'P'){
            cout<<"Player 2 picks Paper"<<endl;
	    cout<<"Draw!"<<endl;				
        }else if(plyrTwo=='s'||'S'){
	    cout<<"Player 2 picks Scissors"<<endl;	
	    cout<<"Scissors cut Paper!"<<endl;	
	    cout<<"Player 2 Wins!"<<endl;
        }
    else if(plyrOne=='s'||'S'){
    cout<<"Player 1 picks Scissors"<<endl;
    }
        if(plyrTwo=='r'||'R'){
            cout<<"Player 2 picks Rock"<<endl;	
            cout<<"Rocks smashes Scissors!"<<endl;	
            cout<<"Player 2 Wins!"<<endl;			
        }else if(plyrTwo=='p'||'P'){
            cout<<"Player 2 picks Paper"<<endl;	
            cout<<"Scissors cut Paper!"<<endl;	
            cout<<"Player 2 Wins!"<<endl;					
        }else if(plyrTwo=='s'||'S'){
            cout<<"Player 2 picks Scissors"<<endl;
	    cout<<"Draw!"<<endl;
        }    
            
    //Exit Program
    return 0;
}