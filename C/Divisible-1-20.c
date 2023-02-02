/*
NAME:		Divisible-1-20
DEVELOPED BY: 	Tiago Almeida
DATE:		21/01/2023
VERSION:	0.0
LAST MODIFIED: 	21/01/2023
C language
*/

#include <stdio.h>



int main(){
	// initiation of some variables
	int remainder = 0;	// to save the result of a modulus (remainder)
	int n1 = 1;		// first number to verify the modulus
	int n2 = 20;		// last number to verify the modulus demora 0,027 s
	int result = n2;	// variable to save the result obtained

	// start of the calculations
	int i = n1;			// counter for the loop, it starts with the value of n1
	while( i <= n2 ){		// while loop - passes through all the numbers which must calculate the modulus
	        remainder = result % i;		// calculates the modulus
	        if( remainder == 0 ){
	                i += 1;			// if the remainder is 0, increment the variable i to the next value
		}
	        else{
	                i = n1;			// else i returns to the value of n1
	                result += 1;		// increments the result to try the next number
		}
	}

	// if it exits the cycle it's because the number to show was found

	// show the results
	printf("%d is the smaller number that can be divided by all numbers from %d to %d with zero reminder\n", result, n1, n2);

	return 0;
}
