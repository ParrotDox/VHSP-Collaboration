#include "..\Structures\OurTree.h"
/* Левое поддерево: рекурсивно обрабатывается левое поддерево.
Корневой узел: затем обрабатывается текущий узел.
Правое поддерево: после корня рекурсивно обрабатывается правое поддерево. */
void OurTree::symmetricWay(OurTree* current_node) {
	if (current_node == nullptr)
		return;
	else {
		symmetricWay(current_node->left);
		cout << current_node->key << ' ';
		symmetricWay(current_node->right);
	}
	cout << endl;
}