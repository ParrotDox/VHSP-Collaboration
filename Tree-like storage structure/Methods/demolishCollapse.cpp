#include "..\Structures\OurTree.h"
// �������� ����� ������ �� ���������� ���� �� ��� ������
void OurTree::demolishCollapse(OurTree* current_node) {
	// ����� ������ � �������� ������� 
	if (current_node->left != nullptr) {
		cout << "������� �� ���� " << current_node->left->key << endl;
		demolishCollapse(current_node->left);
	}
	if (current_node->right != nullptr) {
		cout << "������� �� ���� " << current_node->right->key << endl;
		demolishCollapse(current_node->right);
	}
	// ����� �� ��������
	if (current_node->previous != nullptr) { // ���� ���� �� �������� ������ ������
		cout << "���� " << current_node->key << "������� �� ���� " << current_node->previous->key << endl;
		if (current_node->previous->left == current_node) { // ��������� ��������� �� ���� ����� ��� ���������
			cout << "��������� ������ ��������� ���� " << current_node->previous->key << endl;
			current_node->previous->left = nullptr;
		}
		else {
			cout << "��������� ������� ��������� ���� " << current_node->previous->key << endl;
			current_node->previous->right = nullptr;
		}
	}
	cout << "�������� ���� " << current_node->key;
	delete current_node;
}