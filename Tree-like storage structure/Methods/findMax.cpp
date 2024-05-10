#include "..\Structures\OurTree.h"

OurTree* OurTree::findMax() {
	if (this->right != nullptr) {
		while (this->right != nullptr)
			return right->findMax();
		return this;
	}
	return this;
}