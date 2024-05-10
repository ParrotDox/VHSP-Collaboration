#include "..\Structures\OurTree.h"
/* ����� ���������: ���������� �������������� ����� ���������.
������ ���������: ���������� �������������� ������ ���������.
�������� ����: ����� ��������� ����������� ������������ � ��������� �������� ����. */
void OurTree::reverseWay(OurTree* current_node) {
	if (current_node == nullptr)
		return;
	else {
		reverseWay(current_node->left);
		reverseWay(current_node->right);
		cout << current_node->key << ' ';
	}
	cout << endl;
}