#include <iostream>
#include <vector>
#include <cmath>

/** \file */
/**
*	\brief A function to caluclate the standard deviation of a given array
*	\param a - the input array of integers for deviation to be calculated
*	\param n - the length of array a[]
*	\return Returns the standard deviation of the input array (as a double)
*/

///	fixed 2-11-19
double deviation( int* a, int n )
{
	int sum = 0;
	for(size_t i = 0; i <= n - 1; i++)
	{
		sum += a[i];
	}
	double mean = sum;
	mean /= n;
	double stddev = 0;
	for(size_t i = 0; i <= n - 1; i++)
	{
		stddev = stddev + (a[i] - mean) * (a[i] - mean);
	}
	stddev /= n;
	if( stddev == 0.0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
