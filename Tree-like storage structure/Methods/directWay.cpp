#include "..\Structures\OurTree.h"
/* ������ ���������� ������: ������� ��������� ��� �������������� �������� ��������� ����.
����� ��������� ����� ���������: ����� ����� ���������� ���������� ����� ��� ������ ���������.
�������, ��������� ������ ���������: ����� ��������� ������ ��������� ���������� ���������� ����� ��� ������� ���������.*/
void OurTree::directWay(OurTree* current_node) {
	if (current_node == nullptr)
		return;
	else {
		cout << current_node->key << ' ';
		directWay(current_node->left);
		directWay(current_node->right);
	}
	cout << endl;
}