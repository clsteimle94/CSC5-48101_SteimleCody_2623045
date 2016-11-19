/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on November 18, 2016, 11:15 AM
 * Purpose:  Swaps the first and last elements of a generated array
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void fillAry(int [],int);
void prntAry(int [],int);
void swpFtLt(int [],int);  //Swaps the first and last elements of an array

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Initialize
    cout<<"This program will generate an an array and swap the first and last elements."<<endl; 
    
    //Declare all Variables Here
    int const SIZE=8;
    int array[SIZE];
    char repeat;      //User input for program rerun
      
    do{
        //Fill the array
        fillAry(array,SIZE);

        //Output Located Here
        prntAry(array,SIZE);
        swpFtLt(array,SIZE);
        prntAry(array,SIZE);
        cout<<"Run the program again? (y/n)"<<endl;
        cin>>repeat; 
    }while(repeat=='y');
    
    //Exit
    return 0;
}

void swpFtLt(int a[],int n){ //a=array, n=size, i=position
    if(n<2){
        cout<<"The array is not large enough"<<endl;
        return; 
    }       
    cout<<"The array with the first and last elements swapped."; 
    //In place memory swap
    a[0]=a[0]^a[n-1];
    a[n-1]=a[0]^a[n-1];
    a[0]=a[0]^a[n-1];
    cout<<endl;
} 

void prntAry(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if((count++)%8==7)cout<<endl;  //8 entries per row
    }
    cout<<endl; 
}
    
void fillAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%9;//Random 2 digit number
    }
}