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
void fillAry(int [],int);
void prntAry(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=16;
    int array[SIZE];
       
    //Fill the array
    fillAry(array,SIZE);
    
    //Output Located Here
    prntAry(array,SIZE);

    //Exit
    return 0;
}

void firstLast2(){
    //Input: An array of integers, and an integer that says how many entries or in the array
    //Output
}

void prntAry(int a[],int n){  //a=array, n=size, i=position
    //Output Located Here
    int count=0;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if((count++)%4==3)cout<<endl;  //4 columns Array
    }
}

void fillAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//Random 2 digit number
    }
}