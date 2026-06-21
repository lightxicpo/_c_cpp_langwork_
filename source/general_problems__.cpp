#include<iostream>
#include<vector>

class problems_prof_sec__ {
private: 
	static void sort_bubble_(std::vector<int> &array_target_space) {
		int temp_value__ = 0; 
		for (unsigned int i = 0; i < array_target_space.size() - 1; i++) {
			for (unsigned int j = 0; j < array_target_space.size() - i -1; j++) {
				if (array_target_space[j] > 
					array_target_space[static_cast<std::vector<int,
					std::allocator<int>>::size_type>(j) + 1]) {
					temp_value__ = array_target_space[j]; 
					array_target_space[j] = array_target_space[static_cast<std::vector<int, 
						std::allocator<int>>::size_type>(j) + 1];
					array_target_space[static_cast<std::vector<int,
						std::allocator<int>>::size_type>(j) + 1] = temp_value__;
				}
			}
		}
	}
public: 
	static inline void implement_bubble_sort__() {
		std::vector<int> sort_array__ = { 2, 5, 6, 2, 4,2, 1 };
		sort_bubble_(sort_array__);
		std::cout << "{ ";
		for (int i : sort_array__) {
			std::cout << i << ",";
		}
		std::cout << " } \n";
	}
};

static inline int __main__general_problems__(int argc, const char *argv[]) {
	problems_prof_sec__::implement_bubble_sort__();
	return argc; 
}