#include "..\Structures\OurTree.h"
// Удаление части дерева от указанного узла до его листов
void OurTree::demolishCollapse(OurTree* current_node) {
	// Обход дерева в обратном порядке 
	if (current_node->left != nullptr) {
		cout << "Переход на узел " << current_node->left->key << endl;
		demolishCollapse(current_node->left);
	}
	if (current_node->right != nullptr) {
		cout << "Переход на узел " << current_node->right->key << endl;
		demolishCollapse(current_node->right);
	}
	// Выход из рекурсии
	if (current_node->previous != nullptr) { // Если узел не является корнем дерева
		cout << "Узел " << current_node->key << "исходит из узла " << current_node->previous->key << endl;
		if (current_node->previous->left == current_node) { // Обнуление указателя на узел перед его удалением
			cout << "Обнуление левого указателя узла " << current_node->previous->key << endl;
			current_node->previous->left = nullptr;
		}
		else {
			cout << "Обнуление правого указателя узла " << current_node->previous->key << endl;
			current_node->previous->right = nullptr;
		}
	}
	cout << "Удаление узла " << current_node->key;
	delete current_node;
}