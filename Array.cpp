#include "Array.h"
#include <time.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <array>
using namespace std;

int Array::generateNumbers() {

	array <int, 101> numbers;
	int i;
	const unsigned int sizeOfArray = 100;
	srand(time(NULL));

		for (i = 0; i < sizeOfArray; i++) {
			numbers[i] = rand();
	
		}


		std::sort(numbers.begin(), numbers.end());
		for (auto a : numbers) {
			std::cout << a << " ";
		}
		std::cout << endl;

		return 0;
}