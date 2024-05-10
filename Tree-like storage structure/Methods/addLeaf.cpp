#include "..\Structures\OurTree.h"
// Создаёт лист для дерева, по алгоритму, согласно которому получается дерево поиска
void OurTree::addLeaf(OurTree* current_node, int value) {
	// Проверка на то, чтобы значение дерева не совпадало ни с одним значением других деревьев. Выход из рекурсии
	if (value == current_node->key) {
		cout << "Нельзя добавить лист " << value << ". Такое значение уже есть в дереве\n";
		return;
	}
	// Проверка на возможность создания левого листа. Выход из рекурсии
	if (value < current_node->key && current_node->left == nullptr) {
		OurTree* new_tree = new OurTree;
		new_tree->key = value;
		current_node->left = new_tree;
		new_tree->previous = current_node;
		cout << "Успешно добавлен лист " << value << endl;
		return;
	}
	// Проверка на возможность создания правого листа. Выход из рекурсии
	if (value > current_node->key && current_node->right == nullptr) {
		OurTree* new_tree = new OurTree;
		new_tree->key = value;
		current_node->right = new_tree;
		new_tree->previous = current_node;
		cout << "Успешно добавлен лист " << value << endl;
		return;
	}
	// Рекурсивное перемещение по узлам дерева
	if (value < current_node->key) {
		cout << "Переход на узел " << current_node->left->key << endl;
		addLeaf(current_node->left, value);
	}
	else {
		cout << "Переход на узел " << current_node->right->key << endl;
		addLeaf(current_node->right, value);
	}
}