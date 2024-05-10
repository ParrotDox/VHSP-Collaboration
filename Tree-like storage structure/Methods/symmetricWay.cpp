#include "..\Structures\OurTree.h"
/* ����� ���������: ���������� �������������� ����� ���������.
�������� ����: ����� �������������� ������� ����.
������ ���������: ����� ����� ���������� �������������� ������ ���������. */
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