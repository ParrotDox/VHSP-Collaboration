#include "../Structures/OurTree.h"
int OurTree::getLenghtOfNumber(unsigned long long number) {
	int current_length = 0;
	while (number != 0) {
		number /= 10;
		++current_length;
	}
	return current_length;
}