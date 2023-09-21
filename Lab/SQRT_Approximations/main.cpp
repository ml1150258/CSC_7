/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on August 31, 2023, 11:30 AM
 * Purpose:  Approximations to SQRT with Timing Comparisons
 * Reference: The American Mathematical Monthly Aug-Sept 2023 Vol 30, No. 7
 *            Newtons Method without Division
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes
float nwRph(float,int);//Newton-Raphson with no Division
float Babylon(float,int);//Babylonian Method with algebra same as Newton-Raphson


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
    cout<<"      Sqrt("<<x<<") = "<<sqrt3<<endl;
    
    beg=time(0);
    for(int i=0;i<=nLoops;i++){
        sqrt3=Babylon(x,3);
    }
    end=time(0);
    
    //Display the outputs
    cout<<"Newton Raphson 1 / Babylonian "<<endl
            <<"with 2-Divisions and 1-Addition < "
            <<end-beg+1<<" Secs"<<endl;
    cout<<"      Sqrt("<<x<<") = "<<sqrt3<<endl;
    
    beg=time(0);
    for(int i=0;i<=nLoops;i++){
        sqrt3=nwRph(x,3);
    }
    end=time(0);
    
    //Display the outputs
    cout<<"Newton Raphson 2 with 2 Sequences "<<endl
            <<"no Division 5 Multiplications 3 Subtractions < "
            <<end-beg+1<<" Secs"<<endl;
    cout<<"      Sqrt("<<x<<") = "<<sqrt3<<endl;
    
    //Clean up - File closing, memory de-allocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
float Babylon(float x,int n){
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
        yn=2*yn*(1-xn*yn);
        xn=xn-(xn*xn-x)*yn;
    }
    return xn;
}