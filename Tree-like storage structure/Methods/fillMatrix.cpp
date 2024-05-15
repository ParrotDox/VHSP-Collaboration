#include "../Structures/OurTree.h"

void OurTree::fillMatrix(int** matrix, OurTree* current_node, int depth_limit, int current_depth) {
	// Для указателей на nullptr (узелы без идентификатора). Выход из рекурсии
	if (current_node == nullptr) {
		if (current_depth > depth_limit)
			return;
		int* level = matrix[current_depth - 1];
		int index = findFreeIndexInLevel(level);
		level[index] = -1; // Означает nullptr
		fillMatrix(matrix, current_node, depth_limit, current_depth + 1);
		fillMatrix(matrix, current_node, depth_limit, current_depth + 1);
		return;
	}
	// Для всех узлов, кроме указателей на nullptr. Продолжение рекурсии
	int* level = matrix[current_depth - 1];
	int index = findFreeIndexInLevel(level);
	level[index] = current_node->key;
	fillMatrix(matrix, current_node->left, depth_limit, current_depth + 1);
	fillMatrix(matrix, current_node->right, depth_limit, current_depth + 1);
}