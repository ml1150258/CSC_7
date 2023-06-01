/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 19th, 2023, 7:30 PM
 * Purpose:  Compare Closed and Recursive Retirement Sequences
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes
float retCF(float,float,float,int);
float retRec(float,float,float,int);
float retFor(float,float,float,int);
float powRec(float,int);

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    
    //Declare Variables - Known and Unknown, units, range, description
    float p,//Principle in $'s
          i,//Interest rate decimal
          d;//Regular Deposit $'s
    int   n;//Number of periods compounded
    
    //Initialize Variables
    p=1e4f;//Grandma left us $10000
    i=5e-2f;//5% interest
    d=1e4f;//Regular deposit 10% of $100000
    n=50;//50 years
    
    //Map inputs to outputs -> i.e. process the inputs
    float sav1=retCF(p,i,d,n);
    float sav2=retRec(p,i,d,n);
    float sav3=retFor(p,i,d,n);
    
    //Display the outputs
    cout<<"Initial Balance = $"<<p<<endl;
    cout<<"Interest Rate   =  "<<i*100<<"%"<<endl;
    cout<<"Regular Deposit = $"<<d<<endl;
    cout<<"Number of years =  "<<n<<endl;
    cout<<"Closed Form     = $"<<sav1<<endl;
    cout<<"Recursive Form  = $"<<sav2<<endl;
    cout<<"For-Loop  Form  = $"<<sav3<<endl;
    
    //Clean up - File closing, memory de-allocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
float powRec(float x,int y){
    //Base Condition
    if(y<=0)return 1;
    //Recursive Form
    return powRec(x,y-1)*x;
}

float retFor(float p,float i,float d,int n){
    float c=1+i;
    for(int i=1;i<=n;i++){
        p*=c;
        p+=d;
    }
    return p;
}

float retCF(float p,float i,float d,int n){
    float c=1+i;
    float cton=powRec(c,n);
    return cton*p+d*(1-cton)/(1-c);
}

float retRec(float p,float i,float d,int n){
    //Base Condition
    if(n==0)return p;
    //Recursion
    float c=1+i;
    return c*retRec(p,i,d,n-1)+d;
}