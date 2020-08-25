#include <algorithm>
#include <iostream>

template <typename T1, typename T2>
std::ostream& operator << (std::ostream& stream, const std::pair<T1, T2>& pair) {
	return stream << "[" << pair.first << ", " << pair.second << "]";
}

bool int_ptr_less(int a, int b) {
	return a < b;
}

int main() {
	int a = 10;
	int b = 99;
	int c = 77;
	
	int Max = std::max(a, b, int_ptr_less);
	int Min = std::min(a, b, int_ptr_less);
	
	std::cout << "max: " << Max << std::endl;
	std::cout << "min: " << Min << std::endl;
	
	std::pair<int, int> extremes = std::minmax( {a, b, c}, int_ptr_less);
	
	std::cout << "max in pair: " << extremes.first << std::endl;
	std::cout << "min in pair: " << extremes.second << std::endl;
	
	std::cout << extremes << std::endl;
	
	return 0;
}
