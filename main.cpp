﻿#include <iostream>


int main()
{
	int n;
	std::cout << "Input number of animal pairs of legs" << std::endl;
	std::cin >> n;
	std::cout << "On farm can be: " << std::endl;
	for (int i = 0; i <= 2 * n; ++i) {
		if ((2 * n - i) % 4 == 0) {
			std::cout << (2 * n - i) / 4 << " cows and ";
			std::cout << i / 2 << " chikens" << std::endl;
		}
	}
    return 0;
}
