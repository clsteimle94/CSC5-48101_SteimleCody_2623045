/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on November 18, 2016, 8:30 AM
 * Purpose:  A simple virtual phone book.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
string findNme(string, string [], string [],int);  //Searches for name match and returns the phone number

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    string names[]={"Michael Myers",
                    "Ash Williams",
                    "Jack Torrance",
                    "Freddy Krueger"};
    string pNumbrs[]={"333-8000","333-2323",
                      "333-6150","339-7970"};
    string trgtNme,trgtNum;
    char repeat;
    
    //Initialize
    cout<<"This program will act as a virtual phone book."<<endl; 
    do{     
        cout<<"Enter a name to find the corresponding phone number."<<endl;
        cout<<"Name list: Michael Myers, Ash Williams, Jack Torrance, Freddy Krueger"<<endl;
        getline(cin,trgtNme);
        trgtNum=findNme(trgtNme,names,pNumbrs,4);
        if(trgtNum.length()>0) cout<<"The number is: "<<trgtNum<<endl;
        else cout<<"Name not found."<<endl;
        cout<<"Look up another name? (y/n)"<<endl;
        cin>>repeat;
        cin.ignore();    
    }while(repeat=='y');

    //Exit
    return 0;
}

string findNme(string trgt, string nme[], string num[],int n){
    int i=0;
    bool found=false;
    for(;(!found)&&(i<n);i++)
        if(trgt==nme[i]) found=true;
    if(found)
        return num[i-1];                
}