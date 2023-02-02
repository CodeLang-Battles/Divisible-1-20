#!/usr/bin/env python3
# NAME:			    Divisible-1-20
# DEVELOPED BY: 	Tiago Almeida
# DATE:		    	11/10/2022
# VERSION:   		0
# LAST MODIFIED: 	11/10/2022
# Python 3.10.6


# initiation of some variables
remainder = 0		# to save the result of a modulus (remainder)
n1 = 1				# first number to verify the modulus
n2 = 20				# last number to verify the modulus demora 0,027 s
result = n2			# variable to save the result obtained

# start of the calculations
i = n1				# counter for the loop, it starts with the value of n1
while i <= n2:		# while loop - passes through all the numbers which must calculate the modulus
	remainder = result % i		# calculates the modulus
	if( remainder == 0 ):
		i += 1			# if the remainder is 0, increment the variable i to the next value
	else:				
		i = n1			# else i returns to the value of n1
		result += 1		# increments the result to try the next number

# if it exits the cycle it's because found the number to show

# show the results
print( str(result) + " is the smaller number that can be divided by all numbers from " + str(n1) + " to " + str(n2) + " with zero reminder." )
