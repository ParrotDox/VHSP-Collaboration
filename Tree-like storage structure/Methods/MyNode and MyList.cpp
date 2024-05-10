#include "..\Structures\OurTree.h"
#include "..\Structures\MyNode and MyList.h"
// ��������� ���� � ����� ������
void MyList::addNode(int value) {
	OurTree* new_root = new OurTree;
	new_root->key = value;
	MyNode* new_node = new MyNode;
	new_node->root_of_tree = new_root;
	if (quantity_of_nodes == 0) {
		head = new_node;
		cout << "� ������ ��� �������� ������ ����\n";
	}
	else {
		MyNode* current_node = head;
		while (current_node->next != nullptr)
			current_node = current_node->next;
		current_node->next = new_node;
		cout << "��� �������� ����� ���� � ����� ������\n";
	}
	++quantity_of_nodes;
}
// ��������������� �������
int MyList::simplificationOfNumeral(int number) {
	if (number > 19 && number < 100)
		return number % 10;
	if (number > 99) {
		number = number % 100;
		if (number > 19 && number < 100)
			return number % 10;
	}
	return number;
}
string MyList::matchingWordNodeWithNumeral(int number) {
	number = simplificationOfNumeral(number);
	if (number == 0 || number > 4)
		return "�����";
	if (number == 1)
		return "����";
	return "����";
}
// ������� ������ ������ � ��� �����
void MyList::showInfo() {
	if (head == nullptr) {
		cout << "������ ����\n";
		return;
	}
	cout << "�������� ����: " << head << endl;
	cout << "������ ������ � ���� " << quantity_of_nodes << matchingWordNodeWithNumeral(quantity_of_nodes) << ":\n";
	int node_number = 1;
	MyNode* current_node = head;
	do {
		cout << "�����: " << node_number << ". ����� �������� ����: " << current_node << ". ������������� ����� ������: " << current_node->root_of_tree->key << ". ����� ���������� ����: " << current_node->next << endl;
		current_node = current_node->next;
		++node_number;
	} while (current_node != nullptr);
}
// �������� ����� ���� � ������, ��������� ��� ���������� �����
MyNode* MyList::getNodeByPosition(int number) {
	if (head == nullptr)
		return nullptr;
	else {
		MyNode* current_node = head;
		int number_of_current_node = 1;
		while (number_of_current_node != number) {
			current_node = current_node->next;
			++number_of_current_node;
		}
		return current_node;
	}
}
// ������� ����, ��������� ��� ���������� ����� � ������
void MyList::deleteNodeByPosition(int number) {
	// ����������
	if (quantity_of_nodes == 0) {
		cout << "������ ����. ������� ������\n";
		return;
	}
	if (number < 0 || number > quantity_of_nodes) {
		cout << "���� ��� ������� " << number << "��� � ������\n";
		return;
	}
	// �������������� ��������
	MyNode* current_node = head;
	if (number == 1) {
		if (current_node->next == nullptr) {
			head = nullptr;
			delete current_node;
			cout << "��� ����� ������������ ���� ������\n";
		}
		else {
			head = current_node->next;
			delete current_node;
			cout << "��� ����� ������ ���� ������\n";
		}
	}
	else {
		int number_of_current_node = 1;
		while (number_of_current_node != number - 1) {
			current_node = current_node->next;
			++number_of_current_node;
		}
		MyNode* targeted_node = current_node->next;
		current_node->next = targeted_node->next;
		delete targeted_node;
		cout << "��� ����� ���� �� ������ ��� ������� " << number << endl;
	}
	--quantity_of_nodes;
}