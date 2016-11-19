/* 
 * File:   main.cpp
 * Author:Cody Steimle
 * Created on November 17, 2016, 8:35 AM
 * Purpose:  Count the amount of 2's within a generated array
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void fillAry(int [],int);
void count2s(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=8;
    int array[SIZE];
    char repeat;
       
    //Initialize
    cout<<"This program will count the amount of 2's within a generated array."<<endl;
    
    do{
        //Fill the array
        fillAry(array,SIZE);
    
        //Output Located Here
        count2s(array,SIZE);
        cout<<"Run the program again? (y/n)"<<endl;
        cin>>repeat;    
    }while(repeat=='y');   
    
    //Exit
    return 0;
}

void count2s(int a[],int n){ //a=array, n=size, i=position
    int count=0;
    int twos=0;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if((count++)%8==7)cout<<endl;  //8 entries per row
        if(a[i]==2) twos++;
    }
    cout<<"# of 2's: "<<twos<<endl;
} 
    
void fillAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%9;//Random 2 digit number
    }
}