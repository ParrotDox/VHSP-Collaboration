#include "..\Structures\OurTree.h"

OurTree* OurTree::findMin() {
	if (left != nullptr) {
		while (this->left != nullptr)
			return left->findMin();
		return this;
	}
	return this;
}