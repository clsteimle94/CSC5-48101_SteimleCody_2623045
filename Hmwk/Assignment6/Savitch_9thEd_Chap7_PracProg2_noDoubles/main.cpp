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
void swpFtLt(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=8;
    int array[SIZE];
       
    //Fill the array
    fillAry(array,SIZE);
    
    //Output Located Here
    prntAry(array,SIZE);
    swpFtLt(array,SIZE);
    prntAry(array,SIZE);
    
    //Exit
    return 0;
}

void swpFtLt(int a[],int n){ //a=array, n=size, i=position
    if(n<2){
        cout<<"The array is not large enough"<<endl;
        return; 
    }       
    cout<<"The array with the first and last elements swapped."; 
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


char a[10];
a[0]='a';
a[1]='b';
a[2]='a';
a[3]='c';
int size=4;
dltDoub(a,size);