#include "..\Structures\OurTree.h"
void OurTree::verticalPrint(OurTree* root_of_tree) {
	// Создание матрицы и внесение в неё значений узлов дерева
	const int height = getDepth(root_of_tree, 1, 1); // Глубина дерева
	const int width = exponentiationOfNumberTwo(height - 1); // Количество листьев в дереве
	int** matrix = new int* [height];
	for (int i = 0; i < height; ++i) {
		int* level = new int[width];
		for (int j = 0; j < width; ++j)
			level[j] = -2; // Означает свободное место
		matrix[i] = level;
	}
	cout << "Вывод значений узлов дерева поиска:\n";
	directWay(root_of_tree);
	cout << "\nИсходное состояние матрицы:\n";
	printMatrix(matrix, height, width);
	fillMatrix(matrix, root_of_tree, height, 1);
	cout << "Матрица со значениями узлов дерева:\n";
	printMatrix(matrix, height, width);
	cout << endl;
	int length_of_cell = getLenghtOfNumber(findNodeWithMaximalKey(root_of_tree)->key) + 1;
	int length_of_line = length_of_cell * width;
	int current_amount_of_cells;
	int reverse_depth = width;
	for (int i = 0; i < height; ++i) {
		current_amount_of_cells = exponentiationOfNumberTwo(i);
		string line = "";
		for (int j = 0; j < current_amount_of_cells; ++j) {
			if (matrix[i][j] < 0)
				line += getSomeSpace(length_of_cell * exponentiationOfNumberTwo(reverse_depth - 1));
			else
				line += placeNumberInCell(matrix[i][j], length_of_cell * exponentiationOfNumberTwo(reverse_depth - 1));
		}
		--reverse_depth;
		cout << line << endl;
	}
	destroyMatrix(matrix, height);
}