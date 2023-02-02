#!/bin/bash

# NAME:           Divisible-1-20
# DEVELOPED BY:   Tiago Almeida
# DATE:           21/01/2023
# VERSION:        0.0
# LAST MODIFIED:  21/01/2023
# Bash scripting language

# initiation of some variables
remainder=0		# to save the result of a modulus (remainder)
n1=1			# first number to verify the modulus
n2=10			# last number to verify the modulus demora 0,027 s
result=$n2		# variable to save the result obtained

# start of the calculations
i=$n1				# counter for the loop, it starts with the value of n1
while [ $i -le $n2 ]		# while loop - passes through all the numbers which must calculate the modulus
do
        remainder=$(expr $result % $i)		# calculates the modulus
        if [[ $remainder -eq 0 ]]
        then
	        i=$(expr $i + 1)		# if the remainder is 0, increment the variable i to the next value
        else
                i=$n1				# else i returns to the value of n1
                result=$(expr $result + 1)	# increments the result to try the next number
	fi
done

# if it exits the cycle it's because found the number to show

# show the results
echo "$result is the smaller number that can be divided by all numbers from $n1 to $n2 with zero reminder."


