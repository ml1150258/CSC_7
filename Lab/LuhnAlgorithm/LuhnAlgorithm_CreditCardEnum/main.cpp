/* 
 * Author:   Dr. Mark E. Lehr
 * Date:     Created on September 27th, 2023, 3:49 PM
 * Purpose:  What is the enum for the assignment
 * Validate: https://www.getcreditcardnumbers.com
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum CrdCard {MASTERCARD, VISA, AMERICAN_EXPRESS, DISCOVER, ALL};
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    CrdCard crdcard;
    string msg="1. Loop\n2. Choose Card -> ";
    crdcard=static_cast<CrdCard>(rand()%5);
    switch(crdcard){
        case MASTERCARD:       msg+="Master Card";break;
        case VISA:             msg+="Visa";break;
        case AMERICAN_EXPRESS: msg+="American Express";break;
        case DISCOVER:         msg+="Discover";break;
        case ALL:              msg+="Any from all";break;
        default:               msg+="Something is wrong";
    };
    msg+="\n3. Fill Random then put Luhn at end.\n";
    msg+="4. Flip any digit.\n";
    msg+="5. Recalculate Luhn digit.\n";
    msg+="6. Compare new Luhn digit with old.\n";
    msg+="7. If different increment error counter.\n";
    msg+="8. Calculate per cent error caught.";
    cout<<msg;
  return 0;
}