#include "..\Structures\OurTree.h"

void OurTree::delLeft()
{
	if (this->left != nullptr)	//Checking absence
	{
		if (this->left->left == nullptr && this->left->right == nullptr)	//If SubTree has no children
		{
			delete this->left;
			return;
		}
		if (this->left->left != nullptr && this->left->right == nullptr)	//If SubTree has left child
		{
			OurTree* temp = this->left->left;
			delete this->left;
			this->left = temp;
			return;
		}
		if (this->left->left == nullptr && this->left->right != nullptr)	//If SubTree has right child
		{
			OurTree* temp = this->left->right;
			delete this->left;
			this->left = temp;
			return;
		}
		if (this->left->left == nullptr && this->left->right != nullptr)
		{
			//Complex code will be here (Needs min_func() to work)
		}
	}
	else
	{
		cout << "\nLeft SubTree doesn't exist";
		return;
	}
}