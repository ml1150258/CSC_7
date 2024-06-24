/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 19th, 2024, 1:00 PM
 * Purpose:  C++ Template
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    
    //Declare Variables - Known and Unknown, units, range, description
    
    //Initialize Variables
    
    //Map inputs to outputs -> i.e. process the inputs
    //Display the outputs
    cout<<" x  y  x^y x^y^y x^y^x"<<endl;
    for(int x=1;x>=0;x--){
        for(int y=1;y>=0;y--){
            cout<<" "<<(x?'T':'F')<<"  "
                <<(y?'T':'F')<<"   "
                <<(x^y?'T':'F')<<"    "
                <<(x^y^y?'T':'F')<<"     "
                <<(x^y^x?'T':'F')<<endl;
        }
    }
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations