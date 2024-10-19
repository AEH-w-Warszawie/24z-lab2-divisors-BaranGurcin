#include <vector>
#include "Divisors.h"
#include <cmath>  

std::vector<unsigned long long> divisors(unsigned long long number)
{
	std::vector<unsigned long long> result;
	for (unsigned long long i = 1; i <= number; ++i)
	return result;
    {
        if (number % i == 0)
        {
            result.push_back(i);
            if (i != number / i)
                result.push_back(number / i);
        }
}
