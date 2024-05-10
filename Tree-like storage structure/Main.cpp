/* ��������� ����������� �����������, �������������� � ���������:
��������� - ������ ����� ���������� � ��������� �����, ��� �������� ����� ������� (OurTree)
������� - ������ ����� �� ��������, ������ - � ��������� �����, ��� �������� ����� ������� (addLeaf)
���������� - ������ ����� �� �������� �����, ������������ ���������� ���� ������ �������������� (new_tree) */

/*����� ����� �������� ��������� ����������, ����� ������ ���� ������� ���������, ��������,
�������� ��������� �������� (string) ������ �������������� (int)*/

#include <iostream>
#include "Structures\OurTree.h"
#include "Structures\MyNode and MyList.h"
using namespace std;

int main() {
	system("title Tree-like storage structure");
	system("chcp 1251");
	system("color f0");
	system("cls");
	MyList* list_of_roots = new MyList;
	MyNode* chosen_node = nullptr;
	while (true) {
		cout << "1. ������� ����� ���� � ������ ������\n";
		cout << "2. ���������� � ��������� ����\n";
		cout << "3. ������� ������ ������\n";
		cout << "4. ������� ������ � ������\n";
		cout << "5. �������� ���� ��� ���������� ������\n";
		cout << "6. ��������� ������ ����������� ����������\n";
		cout << "�������� ����� (int) ����� ������ �� �������: ";
		int option_identificator;
		cin >> option_identificator;
		system("cls");
		int number;
		switch (option_identificator) {
			case 1:
				cout << "������� �������� ��������� ���� ������ (int): ";
				cin >> number;
				list_of_roots->addNode(number);
				break;
			case 2:
				if (chosen_node == nullptr)
					cout << "���� � ������ ������ �� ������\n";
				else
					cout << "������ ���� ������ �� ������ " << chosen_node << " �� ��������� ����� ������ " << chosen_node->root_of_tree->key << endl;
				break;
			case 3:
				if (list_of_roots->head == nullptr)
					cout << "������ ����. ������ ������� ����\n";
				else {
					do {
						list_of_roots->showInfo();
						cout << "������� ������� ���� � ������ (int): ";
						cin >> number;
						if (number <= 0 || number > list_of_roots->quantity_of_nodes) {
							cout << "���� ��� ���� ������� �� ���������� � ������\n";
							system("pause");
						}
						system("cls");
					} while (number <= 0 || number > list_of_roots->quantity_of_nodes);
					chosen_node = list_of_roots->getNodeByPosition(number);
					cout << "������ ������ ������� ������ � ���������� � ���� ��� ������� " << number << endl;
				}
				break;
			case 4:
				if (list_of_roots->head == nullptr)
					cout << "������ ����. ������ ������� ����\n";
				else {
					do {
						list_of_roots->showInfo();
						cout << "������� ������� ���� � ������ (int): ";
						cin >> number;
						if (number <= 0 || number > list_of_roots->quantity_of_nodes) {
							cout << "���� ��� ���� ������� �� ���������� � ������\n";
							system("pause");
						}
						system("cls");
					} while (number <= 0 || number > list_of_roots->quantity_of_nodes);
					if (chosen_node == list_of_roots->getNodeByPosition(number)) {
						cout << "��� ������ ������ ������, � ����� �������� �������� ������ ������ ������ ������\n";
						cout << "������ ��� ���������� ���� ��� ������ � �������\n";
						chosen_node = nullptr;
					}
					list_of_roots->deleteNodeByPosition(number);
					cout << "������� ����� ���� ������ ��� ������� " << number << endl;
				}
				break;
			case 5:
				if (chosen_node == nullptr)
					cout << "��� ���������� ������\n";
				else {
					cout << "������� ����� ���� ��� ���� ������, �������� �������� ��� � ��: ";
					cin >> number;
					chosen_node->root_of_tree->addLeaf(chosen_node->root_of_tree, number);
				}
				break;
			case 6:
				return 0;
			default:
				cout << "����� ������ � ���������� ��� ���� ������� �� ����������\n";
		}
		system("pause");
		system("cls");
	}
}