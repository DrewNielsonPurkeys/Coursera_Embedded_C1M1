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
 * @file stats.c
 * @brief Source file for stats program for assignment #1
 *
 *This is the header file for the stats program created and completed
 *for assignment #1 on Coursera course Introduction to Embedded Systems
 *Software and Development.
 *
 * @author Andrew Nielson
 * @date 02/03/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/**
 * @brief prints array statistics
 *
 * Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param array Pointer to char data array
 *
 * @return nothing
 */
void print_statistics(char * array) {

}

/**
 * @brief Prints array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param array Pointer to char data array
 * @param len Length of char data array
 *
 * @return nothing
 */
void print_array(char* array, unsigned int len) {

}

/**
 * @brief Find median value of char data array
 *
 * Given an array of data and a length, returns the median value
 *
 * @param array Pointer to char data array
 * @param len Length of char data array
 *
 * @return char median value
 */
char find_median(char* array, unsigned int len) {

}

/**
 * @brief Find mean value of char data array
 *
 * Given an array of data and a length, returns the mean
 *
 * @param array Pointer to char data array
 * @param len Length of char data array
 *
 * @return char mean value
 */
char find_mean(char* array, unsigned int len) {

}
/**
 * @brief Find maximum value of char data array
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param array Pointer to char data array
 * @param len Length of char data array
 *
 * @return char maximum value
 */
char find_maximum(char* array, unsigned int len) {

}

/**
 * @brief Find minimum value of char data array
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param array Pointer to char data array
 * @param len Length of char data array
 *
 * @return char minimum value
 */
char find_minimum(char* array, unsigned int len) {

}

/**
 * @brief Sort char data array
 *
 * Given an array of data and a length, sorts the array from 
 * largest to smallest. (The zeroth Element should be the largest 
 * value, and the last element (n-1) should be the smallest value.)
 *
 * @param array Pointer to char data array
 * @param len Length of char data array
 *
 * @return nothing
 */
void sort_array(char* array, unsigned int len) {

}
