/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on October 19, 2016, 10:10 AM
 * Purpose:  All the ways to save
 */

//System Libraries Here
#include <iostream>  //Input/Output
#include <cmath>     //Power function, Exponential, Log
#include <iomanip>   //Formatting
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float PERCENT=100.0f;

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float pv,intRate;
    int   nComp;
    
    //Input or initialize values Here
    pv=100.0f;         //$100
    intRate=8/PERCENT; //8 Percent
    nComp=9;           //9 Years
    
    //Process/Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value             =$"<<pv<<endl;
    cout<<"Interest Rate             ="<<intRate<<"%/year"<<endl;
    cout<<"Years in Account          ="<<nComp<<" years"<<endl;
    cout<<"Future Value (Power)      =$"<<save1(pv,intRate,nComp)<<endl;
    cout<<"Future Value (Exp,Log)    =$"<<save2(pv,intRate,nComp)<<endl;
    cout<<"Future Value (For-Loop)   =$"<<save3(pv,intRate,nComp)<<endl;
     cout<<"Future Value (Recursion) =$"<<save4(pv,intRate,nComp)<<endl;
    
    //Exit
    return 0;
}

//FV=pv(1+i)^n
//pv(1+i)*(1+i)*(1+i)*(1+i) -> for-loop    
//Sav(p,i,n)=Sav(p,i,n-1)*(1+i)  =p*(1+i)^n-1*(1+i)


//Purpose: Show Rule of 72
//Inputs:  
// p->Initial balance in $'s
// i->Decimal value for the interest/year
// n->Number of compounding periods, typically by year
//Output:
// Savings after n compounding
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

//Purpose: Show Rule of 72
//Inputs:  
// p->Initial balance in $'s
// i->Decimal value for the interest/year
// n->Number of compounding periods, typically by year
//Output:
// Savings after n compounding
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

//Purpose: Show Rule of 72
//Inputs:  
// p->Initial balance in $'s
// i->Decimal value for the interest/year
// n->Number of compounding periods, typically by year
//Output:
// Savings after n compounding
float save3(float p,float i,int n){
    float fv=p;
    for(int year=1;year<=n;year++){
        fv*=(1+i);   
    }
    return fv;
}

//Purpose: Show Rule of 72
//Inputs:  
// p->Initial balance in $'s
// i->Decimal value for the interest/year
// n->Number of compounding periods, typically by year
//Output:
// Savings after n compounding
float save4(float p,float i,int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);   
}