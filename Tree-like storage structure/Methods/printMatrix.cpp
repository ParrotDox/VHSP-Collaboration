#include "../Structures/OurTree.h"

void OurTree::printMatrix(int** matrix, int height, int width) {
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j) {
			if (j != width - 1)
				cout << matrix[i][j] << ' ';
			else
				cout << matrix[i][j];
		}
		cout << endl;
	}
}