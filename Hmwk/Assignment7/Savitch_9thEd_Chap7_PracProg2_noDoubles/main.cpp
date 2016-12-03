/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void fillAry(int [],int [],int);
void prntAry(int [],int);
void aryNZro(int [],int);
void markSrt(int [],int);
void dltDoub(int [],int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=16;
    int array[SIZE],index[SIZE];
    
       
    //Fill the array
    fillAry(array,index,SIZE);
    
    //Output
    cout<<"The randomized array:"<<endl;
    prntAry(array,SIZE);        //Print array
    markSrt(array,SIZE);        //Sort array
    dltDoub(array,index,SIZE);  //Delete doubles (replaces with 0)
    cout<<"New sorted array with no repeats:"<<endl;   
    aryNZro(array,SIZE);        //Skips printing zeros
    
    //Exit
    return 0;
}


void dltDoub(int a[],int indx[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        indx[i]=a[i];   
        for(int count=1;count<n;count++){
            if(a[i-count]==indx[i]) a[i-count]=0;
        }        
    }   
} 

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}

void prntAry(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if((count++)%8==7)cout<<endl;  //8 entries per row
    }
    cout<<endl; 
}
    
void fillAry(int a[],int indx[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%9+1; //Random 1 digit number (not 0)
        indx[i]=i;
    }
}

void aryNZro(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0) cout<<a[i]<<" ";
    }
    cout<<endl; 
}