	// vector assign
	#include <iostream>
	#include <vector>

	int main () {
		std::vector <int> first;
		std::vector <int> second;
		std::vector <int> third;

		// 7 ints with a value of 100
		first.assign(7, 100);

		std::vector <int> ::iterator it;
		it = first.begin() + 1;
		
		// the 5 central values of first
		second.assign(it, first.end() - 1);

		int myints[] = { 1776, 7, 4 };
		
		// assigning from array.
		third.assign(myints, myints + 3);

		std::cout << "Size of first: " << int (first.size()) << '\n';
		std::cout << "Size of second: " << int (second.size()) << '\n';
		std::cout << "Size of third: " << int (third.size()) << '\n';
		
		return 0;
	}
