#include "../Structures/OurTree.h"
void OurTree::destroyMatrix(int** matrix, int height) {
	for (int i = 0; i < height; ++i)
		delete[] matrix[i];
	delete[] matrix;
}