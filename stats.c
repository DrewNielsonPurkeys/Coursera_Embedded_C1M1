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
  sort_array(test, SIZE);           //sort array before printing
  print_array(test, SIZE);          //print descending order array to screen
  print_statistics(test, SIZE);     //print statistics of array
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
void print_statistics(unsigned char* array, unsigned int len) {
  printf("\r\n Minimum: %-u", find_minimum(array, len));
  printf("\r\n Maximum: %-u", find_maximum(array, len));
  printf("\r\n Median:  %-u", find_median(array, len));
  printf("\r\n Mean:    %-u", find_mean(array, len));
  printf("\r\n\r\n");
}

/**
 * @brief Prints array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param array Pointer to char data array
 * @param len Length of char data array
 *
 * @return nothingprintf("\r\n");
 */
void print_array(unsigned char* array, unsigned int len) {

  char idx = 0;
  
  printf("\r\n Descending Order Data Array:\r\n");
  for (idx = 0; idx < len; idx++) {
    
    if (idx % 5 == 0) {
      printf("\r\n ");
    }
    printf("%3u, ", array[idx]);
  }
  printf("\r\n");
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
unsigned char find_median(unsigned char* array, unsigned int len) {
  
  unsigned int temp = 0;
  
  sort_array(array, len);   //sort array to be sure
  
  if (len % 2 == 0) {
    temp = array[len/2] + array[(len/2) + 1];
    temp = temp/2;
  }
  else {
    temp = array[len/2];
  }
  
  return temp;

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
unsigned char find_mean(unsigned char* array, unsigned int len) {
  unsigned int sum = 0;
  unsigned int idx = 0;
  
  sort_array(array, len);   //sort array to be sure
  
  for (idx = 0; idx < len; idx++) {
    sum += array[idx];
  }
  
  return (char)sum/len;
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
unsigned char find_maximum(unsigned char* array, unsigned int len) {
  
  sort_array(array, len);   //sort array to be sure
  return array[0];
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
unsigned char find_minimum(unsigned char* array, unsigned int len) {
  
  sort_array(array, len);   //sort array to be sure
  return array[len-1];
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
void sort_array(unsigned char* array, unsigned int len) {
  
  unsigned int idx_i = 0;
  unsigned int idx_j = 0;
  unsigned char temp = 0;
  
  for (idx_i = 0; idx_i < len; idx_i++) {
    for (idx_j = 0; idx_j < len - idx_i - 1; idx_j++) {
      if (array[idx_j] < array[idx_j + 1]) {
        temp = array[idx_j];              //keep lesser value
        array[idx_j] = array[idx_j + 1];  //higher value goes "left" in array
        array[idx_j + 1] = temp;          //lesser value goes "right" in array
      }
    }
  }

}
