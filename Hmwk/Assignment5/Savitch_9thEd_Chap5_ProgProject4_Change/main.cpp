/* 
   File:   main
   Author: Cody Steimle
   Created on November 08, 2016, 2:35 PM
   Purpose:  Calculates change given
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void dollars(int,int &,int &,int &,int &,int &);
void cents(int,int &,int &,int &,int &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int n50s,n20s,n10s,n5s,n1s;       //Dollar quantities
    int quarter,dimes,nickles,pennies;//Coin quantities
    float tender,price;               //Price and Tendered amounts
    int tDolr,tCent,pDolr,pCent;      //Price and Tendered dollars and cents
    
    //Initialize
    cout<<"This program calculates the exact coins needed for change."<<endl;
    
    //Input values
    do{
        cout<<"What is the price of the purchase = $";
        cin>>price;
        cout<<"What is the tendered amount (>Price)= $";
        cin>>tender;
    }while(tender-price<0);
    
    //First step calculate dollars and cents
    pDolr=price+0.005f;           //Partial penny
    pCent=(price-pDolr)*100+0.005;//Number of cents with partial penny   
    tDolr=tender+0.005f;           //Partial penny
    tCent=(tender-tDolr)*100+0.005;//Number of cents with partial penny
    
    //Display the amounts
    cout<<"The price input     = $"<<pDolr<<"."<<pCent<<endl;
    cout<<"The tendered amount = $"<<tDolr<<"."<<tCent<<endl;
    if(tCent-pCent<0){
        tDolr--;
        tCent+=100;
    }
    cout<<"The change amount   = $"<<tDolr-pDolr<<"."<<tCent-pCent<<endl;
    
    //Calculate the Change
    cout<<"The bills required:"<<endl;
    dollars(tDolr-pDolr,n50s,n20s,n10s,n5s,n1s);
    cout<<"    Number of 50's : "<<n50s<<endl;
    cout<<"    Number of 20's : "<<n20s<<endl;
    cout<<"    Number of 10's : "<<n10s<<endl;
    cout<<"    Number of 5's  : "<<n5s<<endl;
    cout<<"    Number of 1's  : "<<n1s<<endl;
     
    //Calculate the Change
    cout<<"The coins required:"<<endl;
    cents(tCent-pCent,quarter,dimes,nickles,pennies);   
    cout<<"    Number of quarters : "<<quarter<<endl;
    cout<<"    Number of dimes    : "<<dimes<<endl;
    cout<<"    Number of nickels  : "<<nickles<<endl;
    cout<<"    Number of pennies  : "<<pennies<<endl;
    

    //Exit Program
    return 0;
}

void cents(int d,int &n25s,int &n10s,int &n5s,int &n1s){
    //Calculate the change
    n25s=d/25;  //How many 25's
    d-=25*n25s;
    n10s=d/10;  //How many 10's
    d-=10*n10s;
    n5s=d/5;    //How many 5's
    d-=5*n5s;
    n1s=d;
}

void dollars(int d,int &n50s,int &n20s,int &n10s,int &n5s,int &n1s){
    //Calculate the change
    n50s=d/50;  //How many 50's
    d-=50*n50s;
    n20s=d/20;  //How many 20's
    d-=20*n20s;
    n10s=d/10;  //How many 10's
    d-=10*n10s;
    n5s=d/5;    //How many 5's
    d-=5*n5s;
    n1s=d;
}