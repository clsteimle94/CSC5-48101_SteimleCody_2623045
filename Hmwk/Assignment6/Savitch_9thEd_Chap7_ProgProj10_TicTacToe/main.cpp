/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on November 18, 2016, 7:10 AM
 * Purpose:  A 2 Player game of Tic-Tac-Toe with arrays
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void fillAry(char [],int);
void prntAry(char [],int);
void player1(char [],int); //Player 1 turn
void player2(char [],int); //Player 2 turn
bool isWon(char [],int);   //Checks for a winner

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int const SIZE=9;
    char array[SIZE];    
    
    //Initialize
    cout<<"This program plays a 2 player game of Tic-Tac-Toe."<<endl;
    cout<<"Select a number to make your move."<<endl;
    
    //Fill the array
    fillAry(array,SIZE);
    prntAry(array,SIZE);
    
    //Output Located Here
    for(int i=1;i<=4;i++){       
        if(isWon(array,SIZE)==false){
            player1(array,SIZE);
            prntAry(array,SIZE);
        }    
        if(isWon(array,SIZE)==false){
            player2(array,SIZE);
            prntAry(array,SIZE);
        }
    }
    if(isWon(array,SIZE)==false) cout<<"Cats game!"<<endl;
    
    //Exit
    return 0;
}

void player1(char a[],int n){
    int choice;
    cout<<"Player 1's Turn:";
    do{
        cin>>choice;
    }while(a[choice-1]=='X'||a[choice-1]=='O');
    a[choice-1]='X';
    cout<<endl;
}

void player2(char a[],int n){
    int choice;
    cout<<"Player 2's Turn:";
    do{
        cin>>choice;
    }while(a[choice-1]=='X'||a[choice-1]=='O');
    a[choice-1]='O';
    cout<<endl;
}

bool isWon(char a[],int n){
    //Player 1 checks
    if((a[0]=='X')&&(a[1]=='X')&&(a[2]=='X')){
        cout<<"Player 1 Wins!"<<endl;
        return true;  
    }    
    if((a[3]=='X')&&(a[4]=='X')&&(a[5]=='X')){
        cout<<"Player 1 Wins!"<<endl;
        return true;
    }    
    if((a[6]=='X')&&(a[7]=='X')&&(a[8]=='X')){
        cout<<"Player 1 Wins!"<<endl;
        return true;
    }    
    if((a[0]=='X')&&(a[3]=='X')&&(a[6]=='X')){
        cout<<"Player 1 Wins!"<<endl;
        return true;
    }    
    if((a[1]=='X')&&(a[4]=='X')&&(a[7]=='X')){
        cout<<"Player 1 Wins!"<<endl;
        return true;
    }    
    if((a[2]=='X')&&(a[5]=='X')&&(a[8]=='X')){
        cout<<"Player 1 Wins!"<<endl;
        return true;
    }    
    if((a[0]=='X')&&(a[4]=='X')&&(a[8]=='X')){
        cout<<"Player 1 Wins!"<<endl;
        return true;
    }    
    if((a[2]=='X')&&(a[4]=='X')&&(a[6]=='X')){
        cout<<"Player 1 Wins!"<<endl;
        return true;
    }            
    //Player 2 checks
    if((a[0]=='O')&&(a[1]=='O')&&(a[2]=='O')){
        cout<<"Player 2 Wins!"<<endl;
        return true;  
    }    
    if((a[3]=='O')&&(a[4]=='O')&&(a[5]=='O')){
        cout<<"Player 2 Wins!"<<endl;
        return true;
    }    
    if((a[6]=='O')&&(a[7]=='O')&&(a[8]=='O')){
        cout<<"Player 2 Wins!"<<endl;
        return true;
    }    
    if((a[0]=='O')&&(a[3]=='O')&&(a[6]=='O')){
        cout<<"Player 2 Wins!"<<endl;
        return true;
    }    
    if((a[1]=='O')&&(a[4]=='O')&&(a[7]=='O')){
        cout<<"Player 2 Wins!"<<endl;
        return true;
    }    
    if((a[2]=='O')&&(a[5]=='O')&&(a[8]=='O')){
        cout<<"Player 2 Wins!"<<endl;
        return true;
    }    
    if((a[0]=='O')&&(a[4]=='O')&&(a[8]=='O')){
        cout<<"Player 2 Wins!"<<endl;
        return true;
    }    
    if((a[2]=='O')&&(a[4]=='O')&&(a[6]=='O')){
        cout<<"Player 2 Wins!"<<endl;
        return true;
    }    
    else return false;
}


void prntAry(char a[],int n){ //a=array, n=size, i=position
    int count=0;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if((count++)%3==2)cout<<endl;  //8 entries per row
    }
    cout<<endl;
} 
    
void fillAry(char a[],int n){
    char start=49;
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=start++;
    }
}