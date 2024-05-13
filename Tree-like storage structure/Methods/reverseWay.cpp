#include "..\Structures\OurTree.h"
/* Левое поддерево: рекурсивно обрабатывается левое поддерево.
Правое поддерево: рекурсивно обрабатывается правое поддерево.
Корневой узел: после обработки поддеревьев возвращаются к обработке текущего узла. */
void OurTree::reverseWay(OurTree* current_node) {
	if (current_node == nullptr)
		return;
	else {
		reverseWay(current_node->left);
		reverseWay(current_node->right);
		cout << current_node->key << ' ';
	}
	cout << endl;
}