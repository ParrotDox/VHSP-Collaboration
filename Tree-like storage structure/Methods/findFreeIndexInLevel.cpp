#include "../Structures/OurTree.h"
// Поиск ведётся слева направо
int OurTree::findFreeIndexInLevel(int* level) {
	int index = 0;
	bool index_has_been_found = false;
	while (!index_has_been_found) {
		if (level[index] == -2) // Означает свободное место
			index_has_been_found = true;
		else
			++index;
	}
	return index;
}