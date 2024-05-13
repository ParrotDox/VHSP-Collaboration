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