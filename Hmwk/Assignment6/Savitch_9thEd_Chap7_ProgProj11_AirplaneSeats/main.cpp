/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void fillAry(char [],int);
void prntAry(char [],int);
void player1(char [],int);
void player2(char [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int const SIZE=35;
    char array[SIZE];    
    
    //Fill the array
    fillAry(array,SIZE);
    prntAry(array,SIZE);

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

void prntAry(char a[],int n){ //a=array, n=size, i=position
    int count=0;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if((count++)%5==4)cout<<endl;  //8 entries per row
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