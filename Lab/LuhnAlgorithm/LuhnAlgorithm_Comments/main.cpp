/* 
 * Author:   Dr. Mark E. Lehr
 * Date:     Created on September 18, 2023, 3:49 PM
 * Purpose:  What is the shortest Luhn Algorithm I could write
 * Validate: https://www.getcreditcardnumbers.com
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std; //Namespace where iostream is under

//Begin Execution
int main(int argc, char** argv) {
    
  //Use a char array to start the test, copy from above site
  char a[]="37363975826632 ";//Input the number with a buffer of 1 space
  
  //Start of my solution requires 3 Logical lines of code
  int one[]={0,1,2,3,4,5,6,7,8,9},     //Mapping one to one or multiply by one
      two[]={0,2,4,6,8,1,3,5,7,9},     //Mapping of multiply by two sum digits
      nine[]={'0','9','8','7','6','5','4','3','2','1'},//Mapping of multiply by nine
      sum=0,               //Initialize sum
      digit=sizeof(a)-3,   //1st digit location for sum
      even=true;           //Map by 2x or not
  for(int i=digit; i>=0; i--){//Loop through all positions right to left
         sum += even ? //Is it even or time to map by 2
                two[a[i]-48] : //Map this digit by 2x
                one[a[i]-'0']; //Leave this digit alone in sum map by 1x
         even=!even;  //If even use 2x else use 1x
  }
  
  //Map the multiplication by 9 and %ing the result
  a[++digit] = nine[sum%10];//Now add the Luhn number to the end of the array
  
  //End of my solution
  cout<<a<<endl;
  return 0;
}