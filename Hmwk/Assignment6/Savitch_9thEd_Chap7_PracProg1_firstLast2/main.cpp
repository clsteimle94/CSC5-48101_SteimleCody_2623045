/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on November 17, 2016, 7:00 AM
 * Purpose:  State if an array starts or ends with a 2.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void fillAry(int [],int);  //Fills the array
bool is2ftlt(int [],int);  //Is 2 first or last

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=8;
    int array[SIZE];
    char repeat;
    
    //Initialize
    cout<<"This program will generate an an array and will state if it starts or ends with a 2."<<endl; 
    
    do{
        //Fill the array
        fillAry(array,SIZE);

        //Output Located Here
        is2ftlt(array,SIZE);
        cout<<"Run the program again? (y/n)"<<endl;
        cin>>repeat;    
    }while(repeat=='y');    
    
    //Exit
    return 0;
}

bool is2ftlt(int a[],int n){ //a=array, n=size, i=position
    //Initialize
    cout<<"Amount of entries in the array: "<<n<<endl; 
    //Declare all Variables Here
    int count=0;
    //Prints array to screen
    for(int i=0;i<n;i++){ 
        cout<<a[i]<<" ";
        if((count++)%8==7)cout<<endl;  //8 entries per row
} 
    if(a[0]==2){
        cout<<"The first entry is a 2."<<endl;
        return true;
    }
    if(a[n-1]==2){
        cout<<"The last entry is a 2."<<endl;
        return true;
    }
    else return false;
}

void fillAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%9; //Random 1 digit number
    }
}