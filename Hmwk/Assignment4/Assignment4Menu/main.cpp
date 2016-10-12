/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on October 10, 2016, 9:30 AM
 * Purpose:  A menu without the functions
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
float LTRGAL=2.64179e-1f; //Conversion from liter to gallon

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int menuItm; //Choice for menu
    
    //Loop until user exits
    do{
    
    //Prompt for problem for user input
    cout<<"1.  Type 1  for Problem A: Savitch_9thEd_Chap4_PracProg1_Gasoline"<<endl;
    cout<<"2.  Type 2  for Problem B: Savitch_9thEd_Chap4_PracProg2_BetterGasMileage"<<endl;
    cout<<"3.  Type 3  for Problem C: Savitch_9thEd_Chap4_PracProg3_StockPrice"<<endl;
    cout<<"4.  Type 4  for Problem D: Savitch_9thEd_Chap4_PracProg4_InflationRate"<<endl;
    cout<<"5.  Type 5  for Problem E: Savitch_9thEd_Chap4_PracProg5_InflationRatePlus"<<endl;
    cout<<"6.  Type 6  for Problem F: Savitch_9thEd_Chap4_PracProg6_CreditInterest"<<endl;
    cout<<"7.  Type 7  for Problem G"<<endl;
    cout<<"8.  Type 8  for Problem H: Savitch_9thEd_Chap4_ProgProject2_ClothingSize"<<endl;
    cout<<"9.  Type 9  for Problem I: Savitch_9thEd_Chap4_ProgProject3_ClothingSizePlus"<<endl;
    cout<<"10. Type 10 for Problem J: Savitch_9thEd_Chap4_ProgProject4_99Bottles"<<endl;
    cin>>menuItm;
    
    //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Inside Problem A"<<endl;
                //Declare all Variables Here
                char ans;           //answer for looping
                int miles, ltrgas;  //Miles traveled, liters of gas
                float galgas, mpg;  //gallons of gas, miles per hour

                //Looping
                do{

                //Input or initialize values Here
                cout<<"This program will calculate your car's Miles Per Gallon (MPG)."<<endl;
                cout<<"Please input the liters of gas used:"<<endl;
                cin>>ltrgas;
                cout<<"Please input the miles traveled:"<<endl;
                cin>>miles;

                //Input validation
                if(ltrgas<0||miles<0){
                    cout<<"Can't calculate negative numbers"<<endl;
                    return 1;//Return failure
                    }
                else

                //Process/Calculations Here
                galgas=ltrgas*LTRGAL;
                mpg=miles/galgas;     

                //Displays only two decimal places
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);

                //Output Located Here
                cout<<"The car traveled "<<mpg<<" miles per gallon of gas."<<endl;

                //Looping
                cout<<"Would you like to run the program again?"<<endl;
                cin>>ans;
                }while((ans=='y')||(ans=='Y'));            
                break;
            }
            case 2:{
                cout<<"Inside Problem B"<<endl;
                //Declare all Variables Here
                char ans;                          //answer for looping
                int miles, ltrgas;                 //Miles traveled, liters of gas
                float galgas, mpg, carone, cartwo; //gallons of gas, miles per hour, first car, second car

                //Looping
                do{

                //Input/Process values 
                cout<<"This program will compare 2 car's MPG to find the superior one."<<endl; 
                cout<<"Please input the liters of gas used followed by the miles traveled for car 1:"<<endl;
                cin>>ltrgas>>miles;
                galgas=ltrgas*LTRGAL;
                mpg=miles/galgas;
                carone=mpg;

                //Input/Process values 
                cout<<"Please input the liters of gas used followed by the miles traveled for car 2:"<<endl;
                cin>>ltrgas>>miles;
                galgas=ltrgas*LTRGAL;
                mpg=miles/galgas;
                cartwo=mpg;

                //Displays only two decimal places
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);   

                //Display Output
                if (carone>cartwo){
                cout<<"Car 1 is superior with "<<carone<<" MPG"<<endl;
                cout<<"Car 2 is inferior with "<<cartwo<<" MPG"<<endl;
                }else if (carone<cartwo){
                cout<<"Car 2 is superior with "<<cartwo<<" MPG"<<endl;
                cout<<"Car 1 is inferior with "<<carone<<" MPG"<<endl;
                }else if (carone=cartwo){
                cout<<"Car 1 is the same: "<<cartwo<<" MPG"<<endl;
                cout<<"Car 2 is the same: "<<carone<<" MPG"<<endl;
                }

                //Looping
                cout<<"Would you like to run the program again?"<<endl;
                cin>>ans;
                }while((ans=='y')||(ans=='Y'));
                break;
            }
            case 3:{
                cout<<"Inside Problem C"<<endl;
                //Declare all Variables Here
                char ans;                    //answer for looping
                int numshar, stkpric;        //Number of shares, Stock price
                float fracA, fracB, ttlpric; //Numerator of portion, denominator of portion, total price

                //Looping
                do{

                //Input or initialize values Here
                cout<<"This program will determine the total value of your stock."<<endl;
                cout<<"What is the number of shares owned of the stock?"<<endl;
                cin>>numshar;
                cout<<"What is the whole dollar amount of the stock?"<<endl;
                cin>>stkpric;
                cout<<"What is the fractional portion of the stock? (enter two numbers):"<<endl;
                cin>>fracA>>fracB;

                //Input/Process values 
                if(numshar<0||stkpric<=0||fracB<=0||fracA<=0){
                    cout<<"Invalid input"<<endl;
                    return 1;//Return failure
                    }
                else 

                //Process/Calculations Here
                ttlpric=stkpric*(numshar*fracA/fracB);

                //Displays only two decimal places
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);    

                //Output Located Here
                cout<<"Your total value for the stock is: $"<<ttlpric<<endl;

                //Looping
                cout<<"Would you like to run the program again?"<<endl;
                cin>>ans;
                }while((ans=='y')||(ans=='Y'));
                break;
            }
            case 4:{
                cout<<"Inside Problem D"<<endl;
                //Declaration of Variables
                char ans;                        //answer for looping
                float pricnow, pricago, infrate; //Price today, Price 1 year ago, Inflation rate

                //Looping
                do{

                //Input values
                cout<<"This program will calculate the inflation rate using the cost of a large drink."<<endl;
                cout<<"Please enter the price of a large drink today:"<<endl;
                cin>>pricnow;
                cout<<"Please enter the price of a large drink a year ago:"<<endl;
                cin>>pricago;

                //Input/Process values 
                if(pricnow<=0||pricago<=0){
                    cout<<"Enter a postive number."<<endl;
                    return 1;//Return failure
                    }
                else

                //Process values -> Map inputs to Outputs
                infrate=(pricnow-pricago)/pricago*100;

                //Displays only two decimal places
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);  

                //Display Output
                cout<<"The inflation rate is : "<<infrate<<"%"<<endl;

                //Looping
                cout<<"Would you like to run the program again?"<<endl;
                cin>>ans;
                }while((ans=='y')||(ans=='Y'));
                break;
            }
            case 5:{
                cout<<"Inside Problem E"<<endl;
                //Declaration of Variables
                char ans;                                 //answer for looping
                float pricnow, pricago, infrate, annicrs; //Price today, Price 1 year ago, Inflation rate, Annual increase

                //Looping
                do{

                //Input values
                cout<<"Please enter the price of a large drink today:"<<endl;
                cin>>pricnow;
                cout<<"Please enter the price of a large drink a year ago:"<<endl;
                cin>>pricago;

                //Input/Process values 
                if(pricnow<=0||pricago<=0){
                    cout<<"Enter a postive number."<<endl;
                    return 1;//Return failure
                    }
                else

                //Process values -> Display Output
                infrate=(pricnow-pricago)/pricago*100;
                annicrs=infrate*pricnow/100;

                //Displays only two decimal places
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);    

                cout<<"Inflation rate: "<<infrate<<"%"<<endl;
                cout<<"In a year the cost of a large drink will be:  $"<<annicrs+pricnow<<endl;
                cout<<"In 2 years the cost of a large drink will be: $"<<annicrs*2+pricnow<<endl;

                //Looping
                cout<<"Would you like to run the program again?"<<endl;
                cin>>ans;
                }while((ans=='y')||(ans=='Y'));
                break;
            }
            case 6:{
                cout<<"Inside Problem F"<<endl;
                //Declaration of Variables
                char ans;               //answer for looping
                int months;             //number of months compounded
                float monrate, balance; //monthly interest rate, initial balance

                //Looping
                do{

                //Input values 
                cout<<"This program will take your initial credit balance and compound monthly interest."<<endl;
                cout<<"Initial balance?"<<endl;
                cin>>balance; 
                cout<<"How many months?"<<endl;
                cin>>months;
                cout<<"Monthly rate?"<<endl;
                cin>>monrate;

                //Process values -> Map inputs to Outputs
                monrate=monrate/100; //converts percent to decimal
                do {
                    balance=balance*monrate+balance; //compounds the balance
                    months--;
                } while (months!=0);  //while months hit 0 stop the loop

                //Displays only two decimal places
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);  

                //Output
                cout<<"The new due balance after compound interest is: $"<<balance<<endl;   

                //Looping
                cout<<"Would you like to run the program again?"<<endl;
                cin>>ans;
                }while((ans=='y')||(ans=='Y'));
                break;
            }
            case 7:{
                cout<<"Inside Problem G"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs
                //Display Output
                break;
            }
            case 8:{
                cout<<"Inside Problem H"<<endl;
                //Declaration of Variables
                char ans;                         //answer for looping
                int age, weight;                  //age in years, weight in pounds 
                float height, hat, jacket, waist; //height in inches, hat size, jacket chest size, waist size

                //Looping
                do{

                //Input values
                cout<<"This program will help find your clothing sizes."<<endl;
                cout<<"Please input your height in inches:"<<endl;
                cin>>height;
                cout<<"Please input your weight in pounds:"<<endl;
                cin>>weight;
                cout<<"Please input your age in years:"<<endl;
                cin>>age;

                //Process values -> Map inputs to Outputs
                hat=weight/height*2.9;      
                if(age>=40){
                    jacket=height*weight/288+((age/10-3)*0.125);
                    waist=weight/5.7+(((age-28)/2)*0.1);
                    }       
                else if (age>=30){
                    jacket=height*weight/288;
                    waist=weight/5.7+(((age-28)/2)*0.1);
                    }
                else{
                    jacket=height*weight/288;
                    waist=weight/5.7;
                    }

                //Displays only two decimal places
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);  

                //Display
                cout<<"Your hat size is:          "<<hat<<" inches"<<endl;
                cout<<"Your jacket size (chest): "<<jacket<<" inches"<<endl;
                cout<<"Your waist size:          "<<waist<<" inches"<<endl;

                //Looping
                cout<<"Would you like to run the program again?"<<endl;
                cin>>ans;
                }while((ans=='y')||(ans=='Y'));
                break;
            }
            case 9:{
                cout<<"Inside Problem I"<<endl;
                //Declaration of Variables
                char ans;                                           //answer for looping
                int age, weight;                                    //age in years, weight in pounds 
                float height, hat, jacket, waist, jcktftr, wstftr;  //height, hat size, jacket chest size, waist size, future jacket size, future waist size

                //Looping
                do{

                //Input values
                cout<<"This program will help find your clothing sizes."<<endl;
                cout<<"Please input your height in inches:"<<endl;
                cin>>height;
                cout<<"Please input your weight in pounds:"<<endl;
                cin>>weight;
                cout<<"Please input your age in years:"<<endl;
                cin>>age;

                //Process values -> Map inputs to Outputs
                hat=weight/height*2.9;      
                if(age>=40){
                    jacket=height*weight/288+((age/10-3)*0.125);
                    waist=weight/5.7+(((age-28)/2)*0.1);
                    }       
                else if (age>=30){
                    jacket=height*weight/288;
                    waist=weight/5.7+(((age-28)/2)*0.1);
                    }
                else{
                    jacket=height*weight/288;
                    waist=weight/5.7;
                    }
                jcktftr=jacket+0.125;
                wstftr=waist+0.5;

                //Displays only two decimal places
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);  

                //Display
                cout<<"Your current sizes"<<endl;
                cout<<"     hat size:             "<<hat<<" inches"<<endl;
                cout<<"     jacket size (chest): "<<jacket<<" inches"<<endl;
                cout<<"     waist size:          "<<waist<<" inches"<<endl;
                cout<<endl;
                cout<<"Your sizes after 10 years"<<endl;
                cout<<"     hat size:             "<<hat<<" inches"<<endl;
                cout<<"     jacket size (chest): "<<jcktftr<<" inches"<<endl;
                cout<<"     waist size:          "<<wstftr<<" inches"<<endl;

                //Looping
                cout<<"Would you like to run the program again?"<<endl;
                cin>>ans;
                }while((ans=='y')||(ans=='Y'));
                break;
            }
            case 10:{
                cout<<"Inside Problem J"<<endl;
                //Declaration of Variables
                char ans;           //answer for looping
                int bttlcnt;  //bottle count

                //Looping
                do{

                //Input values
                cout<<"Enter how many bottles of beer are on the wall:"<<endl;
                cin>>bttlcnt;

                    //Input validation
                if(bttlcnt<=0||bttlcnt>99){
                    cout<<"Choose a number between 1-99."<<endl;
                    return 1;//Return failure
                    }
                else

                //Process values -> Display Output
                do{ cout<<bttlcnt<<" bottles of beer on the wall, "<<endl;
                    cout<<bttlcnt<<" bottles of beer."<<endl;
                    cout<<"Take one down and pass it around, "<<endl;
                    bttlcnt--; 
                    cout<<bttlcnt<<" bottles of beer on the wall."<<endl;
                    cout<<endl;
                  }
                while(bttlcnt>0);  //Stop when no bottles remain

                //Looping
                cout<<"Would you like to run the program again?"<<endl;
                cin>>ans;
                }while((ans=='y')||(ans=='Y'));
                break;
            }        
        }
    }while(menuItm>0&&menuItm<=10); //Ends the Do-While loop

    //Exit
    return 0;
}

