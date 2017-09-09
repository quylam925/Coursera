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
 * @brief Function implementation
 *
 * This file implements the functions that analyze the arrays
 *
 * @author Quy Lam Hoang
 * @date 06-09-2017
 *
 */



#include <stdio.h>
#include "stats.h"
#include <math.h>

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
  printf("Our input array:\n");
  print_array(test,SIZE);
  printf("\n");
  sort_array(test,SIZE);
  printf("Input array is sorted!\n");
  print_array(test,SIZE);
  printf("\n");
  print_statistics(test, SIZE);
  return;
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char* array, unsigned int size){
  printf("Statistics start!\n");
  printf("Maximum value: %u\n", find_maximum(array, size));
  printf("Minimum value: %u\n", find_minimum(array, size));
  printf("Mean value: %u\n",find_mean(array, size));
  printf("Median value: %u\n",find_median(array, size));
  printf("Statistics end!\n");
  return;
}

void print_array(unsigned char* array, unsigned int size){
  unsigned int temp;
  temp = size;
  while ( size-- ){
    printf("%u ", *array);
    array++;
  }
  printf("\n");
  return;
}

unsigned int find_median(unsigned char* array, unsigned int size){
   unsigned int median = 0;
   unsigned int tmp = size/2;
   sort_array(array, size);
   if( size%2 == 0 ){
	   median = (int)((float)(array[tmp] + array[tmp-1])/2);
   } else {
	   median = (float)array[tmp-1];
   }
   return median;
}

unsigned int find_mean(unsigned char* array, unsigned int size){
  unsigned int sum = 0;
  unsigned int mean = 0;
  unsigned int tmp = size;
  while ( tmp-- ){
    sum += (*array);
    array++;
  }
  mean = sum/size;
  return mean;
}

unsigned char find_maximum(unsigned char* array, unsigned int size){
  unsigned char max = 0;
  while( size-- ){
    if ( *array > max )
      max = *array;
    array++;
  }
  return max;
}

unsigned char find_minimum(unsigned char* array, unsigned int size){
  unsigned char min = 255;
  while( size-- ){
    if ( *array < min )
      min = *array;
    array++;
  }
  return min;
}

void sort_array(unsigned char* array, unsigned int size){
  unsigned int i,j;
  unsigned char tmp = 0;
  for ( i = 0; i < size; i++ ){
      for ( j = i + 1; j < size; j++ ){
         if ( array[j] < array[i] ){
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
         }
      }	  
  }
  return;
}
