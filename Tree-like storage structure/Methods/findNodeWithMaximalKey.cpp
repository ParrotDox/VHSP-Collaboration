#include "../Structures/OurTree.h"

// Находит адрес самого правого листа дерева поиска. Поиск идёт от указанного адреса узла
OurTree* OurTree::findNodeWithMaximalKey(OurTree* current_node) {
	while (current_node->right != nullptr)
		current_node = current_node->right;
	return current_node;
}