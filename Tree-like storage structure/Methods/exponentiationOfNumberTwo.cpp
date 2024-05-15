#include "../Structures/OurTree.h"

int OurTree::exponentiationOfNumberTwo(int degree) {
	int result = 1;
	for (int i = 0; i < degree; ++i)
		result *= 2;
	return result;
}