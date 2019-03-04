#include <cmath>
#include <cstdarg>
#include "hw7.h"

double stddev(int n, ...)
{
        int sum = 0;
        va_list args;
	va_start(args, n);
	for(size_t i = 0; i < n; i++)
        {
		int num = va_arg(args, int);
                sum += num;
        }
	va_end(args);
        double mean = sum;
        mean /= n;
        double stddev = 0;
	va_start(args, n);
        for(size_t i = 0; i < n; i++)
        {
		int num = va_arg(args, int);
                stddev = stddev + (num - mean) * (num - mean);
        }
	va_end(args);
        stddev /= n;
        if( stddev == 0.0)
                std::cout << "Sigma is zero." << std::endl;
        return sqrt(stddev);
}
