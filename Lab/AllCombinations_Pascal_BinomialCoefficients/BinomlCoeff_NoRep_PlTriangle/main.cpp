/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 9th, 2023, 11:19 AM
 * Purpose:  Recursive Binomial Coefficient
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
int bCoeff(int,int);

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    
    //Initialize variables here
    
    //Map inputs to outputs here, i.e. the process
    
    //Display the results
    for(int n=0;n<=10;n++){
        //cout<<"n = "<<n<<endl;
        for(int i=0;i<=n;i++){
            cout<<bCoeff(n,i)<<" ";
        }
        cout<<endl;
    }

    return 0;
}

int bCoeff(int n,int i){
    //Base Condition
    if(i==0)return 1;
    if(i==n)return 1;
    //Recursion
    return bCoeff(n-1,i-1)+bCoeff(n-1,i);
}