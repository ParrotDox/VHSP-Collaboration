#include "..\Structures\OurTree.h"
// ������ ���� ��� ������, �� ���������, �������� �������� ���������� ������ ������
void OurTree::addLeaf(OurTree* current_node, int value) {
	// �������� �� ��, ����� �������� ������ �� ��������� �� � ����� ��������� ������ ��������. ����� �� ��������
	if (value == current_node->key) {
		cout << "������ �������� ���� " << value << ". ����� �������� ��� ���� � ������\n";
		return;
	}
	// �������� �� ����������� �������� ������ �����. ����� �� ��������
	if (value < current_node->key && current_node->left == nullptr) {
		OurTree* new_tree = new OurTree;
		new_tree->key = value;
		current_node->left = new_tree;
		new_tree->previous = current_node;
		cout << "������� �������� ���� " << value << endl;
		return;
	}
	// �������� �� ����������� �������� ������� �����. ����� �� ��������
	if (value > current_node->key && current_node->right == nullptr) {
		OurTree* new_tree = new OurTree;
		new_tree->key = value;
		current_node->right = new_tree;
		new_tree->previous = current_node;
		cout << "������� �������� ���� " << value << endl;
		return;
	}
	// ����������� ����������� �� ����� ������
	if (value < current_node->key) {
		cout << "������� �� ���� " << current_node->left->key << endl;
		addLeaf(current_node->left, value);
	}
	else {
		cout << "������� �� ���� " << current_node->right->key << endl;
		addLeaf(current_node->right, value);
	}
}