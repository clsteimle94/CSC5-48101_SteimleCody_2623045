/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on December 02, 2016, 10:15 PM
 * Purpose:  A menu for Assignment 7
 */

//System Libraries Here
#include <iostream>  //Imput and Output
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void problem1();
void problem2();
void problem3();
void fillAry(int [],int [],int);
void fillAry(int [],int);
void prntAry(int [],int);
void aryNZro(int [],int);
void markSrt(int [],int);
void dltDoub(int [],int [],int);
int  binSrch(int [],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int menuItm; //Choice for menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for: Search_Binary_V2"<<endl;
        cout<<"2.  Type 2  for: Savitch_9thEd_Chap7_PracProg2_noDoubles"<<endl;
        cout<<"3.  Type 3  for: Blank"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:;

        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}

//*************************   Problem 1 ****************************************
//Purpose:  Updated binary search to find multiple elements in an array
//Inputs:   The 2 digit number to find in the randomized array
//Output:   Locations of elements in the sorted index
//******************************************************************************
void problem1(){
    cout<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Inside Problem Search_Binary_V2"<<endl;
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=2000;
    int array[SIZE],utilize=50,value;
    
    //Input or initialize values Here
    cout<<"This program will find multiple elements in an array."<<endl;
    do{
        cout<<"What value to find in the array?"<<endl;
        cout<<"Choose a number between 1 and 9"<<endl;
        cin>>value;
    }while(value<1||value>9);
    
    //Fill the array
    fillAry(array,utilize);
    
    //Output Located Here
    cout<<"The randomized array:"<<endl;
    prntAry(array,utilize);
    
    //Test out minPos
    markSrt(array,utilize);
    
    //Output Located Here
    cout<<"The sorted array:"<<endl;
    prntAry(array,utilize);
    
    //Utilize the Binary Search
    cout<<endl;
    binSrch(array,utilize,value);
    cout<<": where the value "<<value<<" is found in index."<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<endl;
}

//*************************   Problem 2 ****************************************
//Purpose:  To eliminate duplicates from an array
//Inputs:   Randomized array
//Output:   The array with no repeated numbers
//******************************************************************************
void problem2(){
    cout<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Inside Problem Savitch_9thEd_Chap7_PracProg2_noDoubles"<<endl;
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=16;
    int array[SIZE],index[SIZE];
          
    //Fill the array
    fillAry(array,index,SIZE);
    
    //Output
    cout<<"This program will remove duplicate elements from an array."<<endl;
    cout<<"The randomized array:"<<endl;
    prntAry(array,SIZE);        //Print array
    markSrt(array,SIZE);        //Sort array
    dltDoub(array,index,SIZE);  //Delete doubles (replaces with 0)
    cout<<"New sorted array with no repeats:"<<endl;   
    aryNZro(array,SIZE);        //Skips printing zeros
    cout<<"-----------------------------------------------"<<endl;
    cout<<endl;
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

void fillAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%9+1;//Random 1 digit number
    }
}

void aryNZro(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0) cout<<a[i]<<" ";
    }
    cout<<endl; 
}

int binSrch(int a[],int n,int val){
    //Declare and setup
    int begRng=0,endRng=n-1;
    //Loop until found  
    do{
        int midPnt=(endRng+begRng)/2;
        if(a[midPnt]==val){
            cout<<midPnt<<" ";
            for(int count=1;count<n;count++){
                if(a[midPnt-count]==val){
                    cout<<midPnt-count<<" ";
                }    
                if(a[midPnt+count]==val){
                    cout<<midPnt+count<<" ";
                }   
            }
            return midPnt;
        }         
        else if(a[midPnt]<val){
            begRng=midPnt+1;
        }else{
            endRng=midPnt-1;
        }
    }while(endRng>begRng);
    return -1;
}