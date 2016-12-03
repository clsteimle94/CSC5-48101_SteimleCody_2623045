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
void prntAry(int [],int [],int);
void inptAry(int [],int);
void counter(int [],int [], int);
void markSrt(int [],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int const SIZE=10;
    int array[SIZE];
    int count[SIZE];
    
    //Fill the array
    fillAry(array,SIZE);
    counter(array,count,SIZE);
    markSrt(array,SIZE,0);
    prntAry(array,count,SIZE);
    
    //Exit
    return 0;
}


void prntAry(int a[],int c[],int n){ //a=array, n=size, i=position
    int count=0;
    cout<<"Array  Count"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<c[i]<<endl;;
    }
    cout<<endl;
} 
    
void fillAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//Random 2 digit number
    }
}

void inptAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//Random 2 digit number
    }
}

void counter(int a[], int c[], int n){
    //Fill the array
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(a[i]==c[i]);
    }
}


void markSrt(int a[],int size,int pos){
    for(int pos=0;pos<size-1;pos++){
        for(int i=pos+1;i<size;i++){
            if(a[pos]>a[i]){
                a[pos]=a[pos]^a[i];
                a[i]=a[pos]^a[i];
                a[pos]=a[pos]^a[i];
            }
        }
    }  
}