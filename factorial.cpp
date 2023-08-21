#include <iostream>
#include "functions.h"

int factorial(int n){
    // check for negative numbers
    if (n<0){
       cout<<"Error: Please Enter a number greater than zero."<<endl;
       exit(0);
     }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
