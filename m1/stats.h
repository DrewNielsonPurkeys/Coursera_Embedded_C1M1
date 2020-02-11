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
 * @file stats.h
 * @brief Header file for stats program for assignment #1
 *
 *This is the header file for the stats program created and completed
 *for assignment #1 on Coursera course Introduction to Embedded Systems
 *Software and Development.
 *
 * @author Andrew Nielson
 * @date 02/03/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Prints array statistics
 *
 * Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param array Pointer to char data array
 *
 * @return nothing
 */
void print_statistics(unsigned char* array, unsigned int len);

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
void print_array(unsigned char* array, unsigned int len);

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
unsigned char find_median(unsigned char* array, unsigned int len);

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
unsigned char find_mean(unsigned char* array, unsigned int len);

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
unsigned char find_maximum(unsigned char* array, unsigned int len);

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
unsigned char find_minimum(unsigned char* array, unsigned int len);

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
void sort_array(unsigned char* array, unsigned int len);

#endif /* __STATS_H__ */
