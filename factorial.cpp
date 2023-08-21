#include <iostream>
#include "functions.h"

int factorial(int n){
    // check for negative numbers
    if (n<0){
       printf("Error: Please Enter a number greater than zero.\n");
       exit(0);
     }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
