
#include "multiply_if.h"
#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <stdexcept>

auto main()->int
{
	try
	{
		// multiply test
		std::set<double> data_2{ -1.01, 0.02, 2.33, -5.04, 0.001, 53.0801 };
		auto multiplication_2{ multiply(data_2.begin(), data_2.end()) };
		auto positives_multiplication_2{ multiply_if(data_2.begin(), data_2.end(), [](auto & val) { return val > 0.0; }) };
		auto negatives_multiplication_2{ multiply_if(data_2.begin(), data_2.end(), [](auto & val) { return val < 0.0; }) };
		//auto strings_multiplication_2{ add_if(data_2.begin(), data_2.end(), [](const double val) { return std::to_string(val); }) };
		std::cout
			<< "\n\tmultiplication: " << multiplication_2
			<< "\n\tpositives multiplication: " << positives_multiplication_2
			<< "\n\tnegatives multiplication: " << negatives_multiplication_2
			/*<< "\n\tstrings multiplication: " << strings_multiplication_2*/
			<< '\n';

		return EXIT_SUCCESS;
	}
	catch (const std::exception & xxx)
	{
		std::cerr << xxx.what() << std::endl;
		return EXIT_FAILURE;
	}
}
