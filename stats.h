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
 * @date <9/5/2017>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


void print_statistics( unsigned char *s , unsigned int len);
/**
 * @brief <printing statistics order of an unsigned 1-byte character>
 *
 * <printing statistics by passing the address of your array and the
 * length of your array this function will prints the statistics of
 * your array >
 *
 * @param <*s> <unsigned character pointer to the address of your array>
 * @param <len> <unsigned 4-byte integer variable - the length of your array>
 *
 * @return <nothing>
*/

void print_array(unsigned char *s , unsigned int len);
/**
 * @brief <printing an array order of unsigned 1-byte cahracter
 * has a length len order of unsigned 4-byte integer>
 *
 * <you can pass the address of array by passing your array like
 * &My_Array on  the first digit and passing the length of it on
 * the second digit to printing your array>
 *
 * @param <*s> <unsigned character pointer to your array>
 ** you'll write the address of your array in this digit.
 *
 * @param <len> <unsigned 4-byte integer variable - the length of your array>
 *
 * @return <nothing>
*/

unsigned char find_median(unsigned char *s ,unsigned int len);
/**
 * @brief <finding the median member on your array>
 *
 * <you can pass the address of your array on the first digit
 * and the length of your array on the second digit to get the
 * median member on your array>
 *
 * @param <*s> <unsigned character pointer to your array>
 ** you'll write the address of your array in this digit.
 *
 * @param <len> <unsigned 4-byte integer variable - the length of your array>
 *
 * @return <the median value on your array as a char variable>
*/

short find_mean(unsigned char *s ,unsigned int len);
/**
 * @brief <finding the mean value of your array>
 *
 * <by passing the address of your array on the first digit
 * and the length of your array on the second digit, then you
 * can get the mean value of your array from the returning
 * value of this function>
 *
 * @param <*s> <unsigned character pointer to your array>
 * @param <len> <unsigned 4-byte integer variable - the length of your array>
 *
 * @return <the mean value of your array>
*/

unsigned char find_maximum(unsigned char *s ,unsigned int len);
/**
 * @brief <finding the maximum value of your array>
 *
 * <by passing the address of your array on the first digit,
 * and the length of your array on the second digit, you can
 * get the maximum element on your array from the returning
 * value of this function>
 *
 * @param <*s> <unsigned character pointer to your array>
 * @param <len> <unsigned 4-byte integer variable - the length of your array>
 *
 * @return <the maximum value on your array>
*/

unsigned char find_minimum (unsigned char *s ,unsigned int len);
/**
 * @brief <finding the minimum value of your array>
 *
 * <by passing the address of your array on the first digit,
 * and the length of your array on the second digit, you can
 * get the minimum element on your array from the returning
 * value of this function>
 *
 * @param <*s> <unsigned character pointer to your array>
 * @param <len> <unsigned 4-byte integer variable - the length of your array>
 *
 * @return <the maximum value on your array>
*/

void sort_array(unsigned char *s ,unsigned int len);
/**
 * @brief <sorting your array from the maximum element to the minimum element>
 *
 * <by passing the address of your array on the first digit,
 * and the length of your array on the second digit, you can
 * sort your array from the maximum element to the minumum
 * element >
 *
 * @param <*s> <unsigned character variable to your array>
 * @param <len> <unsigned 4-byte integer variable - the length of your array>
 *
 * @return <returns nothing>
 */


#endif /* __STATS_H__ */
