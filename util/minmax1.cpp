#include <algorithm>

bool int_ptr_less(int* a, int* b) {
	return *a < *b;
}

int main() {
	int a = 10;
	int b = 99;
	int c = 77;
	
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	
	int* pmax = std::max(pa, pb, int_ptr_less);
	
	std::cout << pmax << std::endl;
	
	return 0;
}
