/*****************************************************************
/ CS3560 HW7
/ Header file for a variadic standard deviation funciton
/ Arguments:
/  int n : number of values to be included in the calculation
/  ... : values [n in length] to have their standard deviation
/        calculated
/
/ Return:
/  double of the standard deviation of the entire population
/
/ Daniel Ivory
/ di316014@ohio.edu
/ 3/3/19
******************************************************************/
#ifndef STDDEV
#define STDDEV
double stddev(int n, ...);

#endif
