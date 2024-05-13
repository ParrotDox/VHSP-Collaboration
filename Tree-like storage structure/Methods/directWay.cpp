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
	if (current_node == nullptr)
		return;
	else {
		int cur_index = 0;
		while(matrix[level][cur_index] != 0)
		{
			++cur_index;
		}
		matrix[level][cur_index] = current_node->key;
		directWay(current_node->left, matrix, level+1);
		directWay(current_node->right, matrix, level+1);
	}
}