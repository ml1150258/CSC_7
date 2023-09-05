/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on Aug 22nd, 2023, 12:15 PM
 * Purpose:  Limit Sequence
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    
    //Declare Variables
    double real1;
    float  real2;
    bool cmp1,cmp2;
    float tol=1e-6f;//1x10^-6
    
    //Initialize Variables
    real1=0.1;
    real2=0.1f;
    
    //The Process -> Map Inputs to Outputs
    cmp1=real1==real2;
    cmp2=-tol<(real1-real2)&&tol>(real1-real2);//abs(real1-real2)<tol;
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(20)<<showpoint<<endl;
    cout<<"Real 1 = "<<real1<<endl;
    cout<<"Real 2 = "<<real2<<endl;
    cout<<"Comparison 1 = "<<(cmp1?'T':'F')<<endl;
    cout<<"Comparison 2 = "<<(cmp2?'T':'F')<<endl;

    //Exit the Program
    return 0;
}