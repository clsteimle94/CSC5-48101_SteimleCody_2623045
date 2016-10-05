/* 
   File:   main
   Author: Cody Steimle
   Created on October 4, 2016, 9:30 AM
   Purpose:  Determines a person's horoscope.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short month, day;
    
    //Input values
    cout<<"Enter your birthday numerically (month day):"<<endl;
    cin>>month>>day;
    
    //Input validation
    if(day<1||day>31){
        cout<<"Bad Day"<<endl;
        return 1;//Return failure
    }
    if(month<1||month>12){
        cout<<"Bad Month"<<endl;
        return 1;//return failure
    }
    
    //Process values and display outputs
    switch(month){
        case 1: {
            if((day>=1)&&(day<=17)){
                cout<<"You are a Capricorn."<<endl;
                cout<<"Your horoscope is: This is a good time to put yourself in someone else's shoes and experience life through their eyes."<<endl;
            }else if((day==18)||(day==19)){
                cout<<"You are a Capricorn on the cusp of being a Aquarius."<<endl;
                cout<<"Your horoscope is: This is a good time to put yourself in someone else's shoes and experience life through their eyes."<<endl;
            }else if((day==20)||(day==21)){
                cout<<"You are a Aquarius on the cusp of being a Capricorn."<<endl;
                cout<<"Your horoscope is: Today your thoughts may turn to fashion and the different ways in which you can improve your wardrobe."<<endl;
            }else{
                cout<<"You are a Aquarius."<<endl;
                cout<<"Your horoscope is: Today your thoughts may turn to fashion and the different ways in which you can improve your wardrobe."<<endl;
            }
            break;
        }
        case 2: {
            if((day>=1)&&(day<=16)){
                cout<<"You are a Aquarius."<<endl;
                cout<<"Your horoscope is: Today your thoughts may turn to fashion and the different ways in which you can improve your wardrobe."<<endl;
            }else if((day==17)||(day==18)){
                cout<<"You are a Aquarius on the cusp of being a Pisces."<<endl;
                cout<<"Your horoscope is: Today your thoughts may turn to fashion and the different ways in which you can improve your wardrobe."<<endl;
            }else if((day==19)||(day==20)){
                cout<<"You are a Pisces on the cusp of being a Aquarius."<<endl;
                cout<<"Your horoscope is: You have just the right tone of voice and catch phrase for every situation."<<endl;
            }else{
                cout<<"You are a Pisces."<<endl;
                cout<<"Your horoscope is: You have just the right tone of voice and catch phrase for every situation."<<endl;
            }
            break;
        }
        case 3: {
            if((day>=1)&&(day<=18)){
                cout<<"You are a Pisces."<<endl;
                cout<<"Your horoscope is: You have just the right tone of voice and catch phrase for every situation."<<endl;                   
            }else if((day==19)||(day==20)){
                cout<<"You are a Pisces on the cusp of being a Aries."<<endl;
                 cout<<"Your horoscope is: You have just the right tone of voice and catch phrase for every situation."<<endl;
            }else if((day==20)||(day==21)){
                cout<<"You are a Aries on the cusp of being a Pisces."<<endl;
                cout<<"Your horoscope is: You're apt to get the feeling that the grass is greener on the other side of the fence today."<<endl;           
            }else{
                cout<<"You are a Aries."<<endl;
                cout<<"Your horoscope is: You're apt to get the feeling that the grass is greener on the other side of the fence today."<<endl;
            }
            break;
        }
        case 4: {
            if((day>=1)&&(day<=17)){
                cout<<"You are a Aries."<<endl;
                cout<<"Your horoscope is: You're apt to get the feeling that the grass is greener on the other side of the fence today."<<endl;        
            }else if((day==18)||(day==19)){
                cout<<"You are a Aries on the cusp of being a Taurus."<<endl;
                cout<<"Your horoscope is: You're apt to get the feeling that the grass is greener on the other side of the fence today."<<endl;
            }else if((day==20)||(day==21)){
                cout<<"You are a Taurus on the cusp of being a Aries."<<endl;
                cout<<"Your horoscope is: Your mind may wander to a fantasyland full of castles, wizards, and magic dragons today."<<endl;                      
            }else{
                cout<<"You are a Taurus."<<endl;
                cout<<"Your horoscope is: Your mind may wander to a fantasyland full of castles, wizards, and magic dragons today."<<endl;
            }
            break;
        }
        case 5: {
            if((day>=1)&&(day<=18)){
                cout<<"You are a Taurus."<<endl;
                cout<<"Your horoscope is: Your mind may wander to a fantasyland full of castles, wizards, and magic dragons today."<<endl;                                 
            }else if((day==19)||(day==20)){
                cout<<"You are a Taurus on the cusp of being a Gemini."<<endl;
                cout<<"Your horoscope is: Your mind may wander to a fantasyland full of castles, wizards, and magic dragons today."<<endl;
            }else if((day==20)||(day==21)){
                cout<<"You are a Gemini on the cusp of being a Taurus."<<endl;
                cout<<"Your horoscope is: Get on the fast track and use your powerful words and creative mind to make quick decisions that are mindful yet spontaneous."<<endl;                             
            }else{
                cout<<"You are a Gemini."<<endl;
                cout<<"Your horoscope is: Get on the fast track and use your powerful words and creative mind to make quick decisions that are mindful yet spontaneous."<<endl;
            }
            break;
        }
        case 6: {
            if((day>=1)&&(day<=19)){
                cout<<"You are a Gemini."<<endl;
                cout<<"Your horoscope is: Get on the fast track and use your powerful words and creative mind to make quick decisions that are mindful yet spontaneous."<<endl;                                
            }else if((day==20)||(day==21)){
                cout<<"You are a Gemini on the cusp of being a Cancer."<<endl;
                 cout<<"Your horoscope is: Get on the fast track and use your powerful words and creative mind to make quick decisions that are mindful yet spontaneous."<<endl;
            }else if((day==22)||(day==23)){
                cout<<"You are a Cancer on the cusp of being a Gemini."<<endl;
                cout<<"Your horoscope is: Start the day with some vigorous yoga and then some meditation to help clear your mind"<<endl;           
            }else{
                cout<<"You are a Cancer."<<endl;
                cout<<"Your horoscope is: Start the day with some vigorous yoga and then some meditation to help clear your mind"<<endl;
            }
            break;
        }
        case 7: {
            if((day>=1)&&(day<=20)){
                cout<<"You are a Cancer."<<endl;
                cout<<"Your horoscope is: Start the day with some vigorous yoga and then some meditation to help clear your mind"<<endl;                                    
            }else if((day==21)||(day==22)){
                cout<<"You are a Cancer on the cusp of being a Leo."<<endl;
                cout<<"Your horoscope is: Start the day with some vigorous yoga and then some meditation to help clear your mind"<<endl;    
            }else if((day==23)||(day==24)){
                cout<<"You are a Leo on the cusp of being a Cancer."<<endl;
                cout<<"Your horoscope is: Do something for the community today."<<endl;                 
            }else{
                cout<<"You are a Leo."<<endl;
                cout<<"Your horoscope is: Do something for the community today."<<endl;
            }
            break;
        }
        case 8: {
            if((day>=1)&&(day<=20)){
                cout<<"You are a Leo."<<endl;
                cout<<"Your horoscope is: Do something for the community today."<<endl;                               
            }else if((day==21)||(day==22)){
                cout<<"You are a Leo on the cusp of being a Virgo."<<endl;
                cout<<"Your horoscope is: Do something for the community today."<<endl;
            }else if((day==23)||(day==24)){
                cout<<"You are a Virgo on the cusp of being a Leo."<<endl;
                cout<<"Your horoscope is: They key for you is to break things down into smaller chunks, analyze them."<<endl;               
            }else{
                cout<<"You are a Virgo."<<endl;
                cout<<"Your horoscope is: They key for you is to break things down into smaller chunks, analyze them."<<endl;
            }
            break;
        }
        case 9: {
            if((day>=1)&&(day<=20)){
                cout<<"You are a Virgo."<<endl;
                cout<<"Your horoscope is: They key for you is to break things down into smaller chunks, analyze them."<<endl;                                   
            }else if((day==21)||(day==22)){
                cout<<"You are a Virgo on the cusp of being a Libra."<<endl;
                cout<<"Your horoscope is: They key for you is to break things down into smaller chunks, analyze them."<<endl;
            }else if((day==23)||(day==24)){
                cout<<"You are a Libra on the cusp of being a Virgo."<<endl;
                cout<<"Your horoscope is: Don't compare yourself to other people and make judgments based on outside appearances."<<endl;                                           
            }else{
                cout<<"You are a Libra."<<endl;
                cout<<"Your horoscope is: Don't compare yourself to other people and make judgments based on outside appearances."<<endl;
            }
            break;
        }
        case 10: {
            if((day>=1)&&(day<=20)){
                cout<<"You are a Libra."<<endl;
                cout<<"Your horoscope is: Don't compare yourself to other people and make judgments based on outside appearances."<<endl;                                 
            }else if((day==21)||(day==22)){
                cout<<"You are a Libra on the cusp of being a Scorpio."<<endl;
                cout<<"Your horoscope is: Don't compare yourself to other people and make judgments based on outside appearances."<<endl;
            }else if((day==23)||(day==24)){
                cout<<"You are a Scorpio on the cusp of being a Libra."<<endl;
                cout<<"Your horoscope is: Imagination and fantasy play a big part in your thinking today."<<endl;          
            }else{
                cout<<"You are a Scorpio."<<endl;
                cout<<"Your horoscope is: Imagination and fantasy play a big part in your thinking today."<<endl;
            }
            break;
        }
        case 11: {
            if((day>=1)&&(day<=19)){
                cout<<"You are a Scorpio."<<endl;
                cout<<"Your horoscope is: Imagination and fantasy play a big part in your thinking today."<<endl;                                  
            }else if((day==20)||(day==21)){
                cout<<"You are a Scorpio on the cusp of being a Sagittarius."<<endl;
                cout<<"Your horoscope is: Imagination and fantasy play a big part in your thinking today."<<endl;
            }else if((day==22)||(day==23)){
                cout<<"You are a Sagittarius on the cusp of being a Scorpio."<<endl;
                cout<<"Your horoscope is: Engage more of your rational mind today."<<endl;                   
            }else{
                cout<<"You are a Sagittarius."<<endl;
                cout<<"Your horoscope is: Engage more of your rational mind today."<<endl;
            }
            break;
        }
        case 12: {
            if((day>=1)&&(day<=19)){
                cout<<"You are a Sagittarius."<<endl;
                cout<<"Your horoscope is: Engage more of your rational mind today."<<endl;                              
            }else if((day==20)||(day==21)){
                cout<<"You are a Sagittarius on the cusp of being a Capricorn."<<endl;
                cout<<"Your horoscope is: Engage more of your rational mind today."<<endl;
            }else if((day==22)||(day==23)){
                cout<<"You are a Capricorn on the cusp of being a Sagittarius."<<endl;
                cout<<"Your horoscope is: This is a good time to put yourself in someone else's shoes and experience life through their eyes."<<endl;              
            }else{
                cout<<"You are a Capricorn."<<endl;
                cout<<"Your horoscope is: This is a good time to put yourself in someone else's shoes and experience life through their eyes."<<endl;
            }
            break;
        }
    }

    //Exit Program
    return 0;
}