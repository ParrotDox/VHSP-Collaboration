#include "..\Structures\OurTree.h"
#include <math.h>
#include "..\Structures\OurTree.h"
void OurTree::verticalPrint(OurTree* root_of_tree) {
	// Создание матрицы и внесение в неё значений узлов дерева
	const int height = getDepth(root_of_tree, 1, 1); // Глубина дерева
	const int width = exponentiationOfNumberTwo(height - 1); // Количество ячеек на последней строке вывода
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
	int length_of_cell = getLenghtOfNumber(findNodeWithMaximalKey(root_of_tree)->key) + 1; // Найти длину для ячейки последнего уровня
	string temp;
	int depth = height;
	int min_length_cell = length_of_cell;
	for (int current_level = 1; current_level <= depth; ++current_level)
	{
		for (int element_index = 0; element_index < pow(2, current_level - 1); ++element_index)
		{
			if (matrix[current_level - 1][element_index] < 0)
			{
				temp = createEmptyCell(min_length_cell, current_level, depth);
			}
			else
			{
				int number = matrix[current_level - 1][element_index];
				temp = createKeepCell(min_length_cell, number, current_level, depth);
			}
			cout << temp;
		}
		cout << endl;
	}



	destroyMatrix(matrix, height);
}