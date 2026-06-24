#include "_c_cpp_langwork_.h"
#include "source/general_problems__.cpp"


static inline void _pointer__arithmetic__() {
	std::vector<int> inter_work__ = { 1, 2, 3, 4 };
	std::cout << "Chal ja kuttee!!"; 
}

static inline void __pointer_points() {
	int a = 3; 
	int* b;
	b = &a; 
	int** pointer_pointer = &b; 
	std::cout << "Pointer pointer: " << pointer_pointer; 
	std::cout << "Address of a " << &a;
}


int main(int argc, const char *argv[]) {
	//__main__general_problems__(argc, argv);
	_pointer__arithmetic__();
	return argc;
}
