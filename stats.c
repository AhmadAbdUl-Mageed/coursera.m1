/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <array status>
 * @brief <show array status>
 *
 * <by passing the address of any array and the number of the elements
 * in your array you can get a specified information about your array
 * from the function of this file>
 *
 * @author <Ahmad AbdUl-Mageed Othman>
 * @date <5/9/2017>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data set*/

#define SIZE (40)

void main() {

	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
       	                            114, 88,   45,  76, 123,  87,  25,  23,
                                    200, 122, 150, 90,   92,  87, 177, 244,
                                    201,   6,  12,  60,   8,   2,   5,  67,
                                      7,  87, 250, 230,  99,   3, 100,  90};

	/* Other Variable Declarations Go Here */

	unsigned char min = find_minimum( &test , SIZE);

	unsigned char max = find_maximum( &test , SIZE);

	short mean = find_mean( &test , SIZE);

	unsigned char median = find_median ( &test, SIZE);




	/* Statistics and Printing Functions Go Here */

	printf("The array before sorting\n\n");

	print_array( &test , SIZE);

	print_statistics( min , max , mean , median);

	printf("\nThe array after sorting\n\n");

        sort_array( &test , SIZE);

	print_array( &test , SIZE);

}

void print_array(unsigned char *s , unsigned int len){

	for (unsigned int i = 1; i <= len; i++){

		printf("%d ", *(s+i-1) );

		if( !(i % 10) )

			printf("\n");

	}

	printf("\n");
}

void print_statistics(unsigned char min , unsigned char max , short mean , unsigned char median){

	printf("The minumum value is: %d , the maximum value is : %d \n the mean value is : %d , the median value is : %d \n \n", min, max, mean, median);

}

unsigned char find_median(unsigned char *s , unsigned int len){

	if(len % 2)

		return *(s+((len/2)+1));

	else

		return *(s+(len/2));
}

short find_mean(unsigned char *s , unsigned int len){

	int mean = 0;

	for (unsigned int i = 0 ; i < len ; i++)

		mean += *(s+i);


	return (mean / len);
}

unsigned char find_maximum(unsigned char *s, unsigned int len){

	unsigned char max = *s;

	for (unsigned int i = 0 ; i < len ; i++){

		if( max < *(s+i))

			max = *(s+i);

	}

	return max;
}

unsigned char find_minimum(unsigned char *s, unsigned int len){

	unsigned char min = *s;

	for (unsigned int i = 0 ; i < len ; i++){

		if ( min > *(s+i))

			min = *(s+i);

	}

	return min;
}

void sort_array(unsigned char *s, unsigned int len){


	for (unsigned int i = 0 ; i < len-1 ; i++){

		for (unsigned int j = i+1 ; j <= len ; j++){

			if ( *(s+i) < *(s+j)){

				char max = *(s+j);

				*(s+j) = *(s+i);

				*(s+i) = max;
			}
		}
	}
}
