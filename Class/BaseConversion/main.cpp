/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 26th,2023 8:30 PM
 * Purpose:  Show Base Conversion
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes
float bLogCnv(float,float);


//Execution Starts Here
int main(int argc, char** argv){
    //Declare variable
    float x,base;
    
    //Initialize Variables
    x=128;
    base=2;
    
    //Map inputs to outputs -> i.e. process the inputs
    
    //Display the outputs
    cout<<"Natural log of x = ln("<<x<<")="<<log(x)<<endl;
    cout<<"Log Base_"<<base<<"("<<x<<")     ="<<bLogCnv(x,base)<<endl;
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
float bLogCnv(float x,float base){
    return log(x)/log(base);
}