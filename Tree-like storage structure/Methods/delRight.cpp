#include "..\Structures\OurTree.h"

void OurTree::delRight()
{
	if (this->right != nullptr)	//Checking absence
	{
		if (this->right->left == nullptr && this->right->right == nullptr)	//If SubTree has no children
		{
			delete this->right;
			return;
		}
		if (this->right->left != nullptr && this->right->right == nullptr)	//If SubTree has left child
		{
			OurTree* temp = this->right->left;
			delete this->right;
			this->right = temp;
			return;
		}
		if (this->right->left == nullptr && this->right->right != nullptr)	//If SubTree has right child
		{
			OurTree* temp = this->right->right;
			delete this->right;
			this->right = temp;
			return;
		}
		if (this->right->left == nullptr && this->right->right != nullptr)
		{
			//Complex code will be here	(Needs min_func() to work)
		}
	}
	else
	{
		cout << "\nRight SubTree doesn't exist";
		return;
	}
}