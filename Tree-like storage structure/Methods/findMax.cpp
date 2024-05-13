#include "..\Structures\OurTree.h"

OurTree* OurTree::findMax() {
	OurTree* current_node = this;
	while (current_node->right != nullptr)
		current_node = current_node->right;
	return current_node;
}