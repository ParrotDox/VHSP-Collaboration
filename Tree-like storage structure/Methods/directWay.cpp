#include "..\Structures\OurTree.h"
/* Первым посещается корень: сначала выводится или обрабатывается значение корневого узла.
Затем обходится левое поддерево: после корня рекурсивно вызывается обход для левого поддерева.
Наконец, обходится правое поддерево: после обработки левого поддерева рекурсивно вызывается обход для правого поддерева.*/
void OurTree::directWay(OurTree* current_node) {
	if (current_node == nullptr)
		return;
	else {
		cout << current_node->key << ' ';
		directWay(current_node->left);
		directWay(current_node->right);
	}
}
void OurTree::directWay(OurTree* current_node, vector<vector<int>>& matrix,int level) {
	int cur_index = 0;
	if (current_node == nullptr)
	{
		while (matrix[level][cur_index] != -1)	//-1 означает, что ячейка пустая. Ее можно заполнить
		{
			++cur_index;
		}
		matrix[level][cur_index] = -2;	//-2 в матрице означает, что указатель на ячейку имеет значение nullptr. -2 нужен для отступа
		return;
	}
	else
	{
		while(matrix[level][cur_index] != -1)	//-1 означает, что ячейка пустая. Ее можно заполнить
		{
			++cur_index;
		}
		matrix[level][cur_index] = current_node->key;
		directWay(current_node->left, matrix, level+1);
		directWay(current_node->right, matrix, level+1);
	}
}