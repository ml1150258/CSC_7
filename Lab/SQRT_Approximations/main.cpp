/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on August 31, 2023, 11:30 AM
 * Purpose:  Approximations to SQRT
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes
float nwRphDv(float,int);
float nwRph(float,int);


//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    
    //Declare Variables - Known and Unknown, units, range, description
    int nLoops;
    float x,sqrt3;
    
    //Initialize Variables
    x=3;
    nLoops=200000000;
    
    //Map inputs to outputs -> i.e. process the inputs
    int beg=time(0);
    for(int i=0;i<=nLoops;i++){}
    int end=time(0);
    
    //Display the outputs
    int e=log(nLoops)/log(10);
    cout<<"Number of iterations = "<<nLoops/pow(1,e)<<endl;
    cout<<"Just For Loop < "<<end-beg+1<<" Secs"<<endl;
    
    beg=time(0);
    for(int i=0;i<=nLoops;i++){
        sqrt3=pow(x,0.5);
    }
    end=time(0);
    
    //Display the outputs
    cout<<"Power Function < "<<end-beg+1<<" Secs"<<endl;
    cout<<"      Sqrt(3) = "<<sqrt3<<endl;
    
    beg=time(0);
    for(int i=0;i<=nLoops;i++){
        sqrt3=nwRphDv(x,3);
    }
    end=time(0);
    
    //Display the outputs
    cout<<"Newton Raphson 1 with Division < "<<end-beg+1<<" Secs"<<endl;
    cout<<"      Sqrt(3) = "<<sqrt3<<endl;
    
    beg=time(0);
    for(int i=0;i<=nLoops;i++){
        sqrt3=nwRph(x,3);
    }
    end=time(0);
    
    //Display the outputs
    cout<<"Newton Raphson 2 with 2 Sequences no Division< "<<end-beg+1<<" Secs"<<endl;
    cout<<"      Sqrt(3) = "<<sqrt3<<endl;
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
float nwRphDv(float x,int n){
    float xn=x/2;
    for(int i=1;i<=n;i++){
        xn=(xn+x/xn)/2;
    }
    return xn;
}

float nwRph(float x,int n){
    float yn=1/x/2;
    float xn=x/2;
    for(int i=1;i<=n;i++){
        yn=yn*(2-2*xn*yn);
        xn=xn-(xn*xn-x)*yn;
    }
    return xn;
}