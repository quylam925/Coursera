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
 * @brief Function decleration
 *
 * This file include declarations and documentation for the functions from the
 * stats.c file
 * 
 * @author Quy Lam Hoang
 * @date 06-09-2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Given an array of data and a length, print all the statistics
 * 
 * @param array The pointer to the input array
 * @param size The size of the input array
 *
 * @return None
 */
void print_statistics(unsigned char* array, unsigned int size);


/**
 * @brief Given an array of data and a length, print the array on the screen
 * 
 * @param array The pointer to the input array
 * @param size The size of the input array
 *
 * @return None
 */
void print_array(unsigned char* array, unsigned int size);


/**
 * @brief Given an array of data and a length, returns the median value
 * 
 * @param array The pointer to the input array
 * @param size The size of the input array
 *
 * @return The median value of the input array
 */
unsigned int find_median(unsigned char* array, unsigned int size);


/**
 * @brief Given an array of data and a length, returns the mean value
 * 
 * @param array The pointer to the input array
 * @param size The size of the input array
 *
 * @return The mean value of the input array
 */
unsigned int find_mean(unsigned char* array, unsigned int size);


/**
 * @brief Given an array of data and a length, returns the maximum
 * 
 * @param array The pointer to the input array
 * @param size The size of the input array
 *
 * @return The maximum value of the input array
 */
unsigned char find_maximum(unsigned char* array, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the minimum
 * 
 * @param array The pointer to the input array
 * @param size The size of the input array
 *
 * @return The minimum value of the input array
 */
unsigned char find_minimum(unsigned char* array, unsigned int size);

/**
 * @brief Given an array of data and a length, sorts the array from largest
 * to smallest
 * 
 * @param array The pointer to the input array
 * @param size The size of the input array
 *
 * @return The array after sorting
 */
void sort_array(unsigned char* array, unsigned int size);


#endif /* __STATS_H__ */
