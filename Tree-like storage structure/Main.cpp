/* Смысловые обозначения конструкций, использованных в программе:
структура - каждое слово начинается с заглавной буквы, без пробелов между словами (OurTree)
функция - первое слово со строчной, другие - с заглавной буквы, без пробелов между словами (addLeaf)
переменные - первое слово со строчной буквы, присутствует разделение слов нижним подчёркиванием (new_tree) */

/*Стоит также добавить обработку исключений, чтобы нельзя было сломать программу, например,
записать строковое значение (string) вместо целочисленного (int)*/

#include <iostream>
#include "Structures\OurTree.h"
#include "Structures\MyNode and MyList.h"
#include "Methods\getLengthOfIntNumber.cpp"
#include "Methods\convertIntNumberToString.cpp"
using namespace std;

int main() {
	system("title Tree-like storage structure");
	system("chcp 1251");
	system("color f0");
	system("cls");
	MyList* list_of_roots = new MyList;
	MyNode* chosen_node = nullptr;
	while (true) {
		cout << "1. Создать новый узел с корнем дерева\n";
		cout << "2. Информация о выбранном узле\n";
		cout << "3. Выбрать корень дерева\n";
		cout << "4. Удалить дерево с корнем\n";
		cout << "5. Добавить лист для выбранного дерева\n";
		cout << "6. Найти высоту дерева\n";
		cout << "7. Вертикальная печать дерева (нет)\n";
		cout << "8. Прямой обход\n";
		cout << "9. Симметричный обход\n";
		cout << "10. Обратный обход\n";
		cout << "11. Завершить работу консольного приложения\n";
		cout << "Выберите номер (int) опции работы со списком: ";
		int option_identificator;
		cin >> option_identificator;
		system("cls");
		int number;
		switch (option_identificator) {
		case 1:
			cout << "Введите значение корневого узла дерева (int): ";
			cin >> number;
			list_of_roots->addNode(number);
			break;
		case 2:
			if (chosen_node == nullptr)
				cout << "Узел с корнем дерева не выбран\n";
			else
				cout << "Выбран узел списка по адресу " << chosen_node << " со значением корня дерева " << chosen_node->root_of_tree->key << endl;
			break;
		case 3:
			if (list_of_roots->head == nullptr)
				cout << "Список пуст. Нельзя выбрать узел\n";
			else {
				do {
					list_of_roots->showInfo();
					cout << "Введите порядок узла в списке (int): ";
					cin >> number;
					if (number <= 0 || number > list_of_roots->quantity_of_nodes) {
						cout << "Узла под этим номером не существует в списке\n";
						system("pause");
					}
					system("cls");
				} while (number <= 0 || number > list_of_roots->quantity_of_nodes);
				chosen_node = list_of_roots->getNodeByPosition(number);
				cout << "Корень дерева успешно выбран и содержится в узле под номером " << number << endl;
			}
			break;
		case 4:
			if (list_of_roots->head == nullptr)
				cout << "Список пуст. Нельзя удалить узел\n";
			else {
				do {
					list_of_roots->showInfo();
					cout << "Введите порядок узла в списке (int): ";
					cin >> number;
					if (number <= 0 || number > list_of_roots->quantity_of_nodes) {
						cout << "Узла под этим номером не существует в списке\n";
						system("pause");
					}
					system("cls");
				} while (number <= 0 || number > list_of_roots->quantity_of_nodes);
				if (chosen_node == list_of_roots->getNodeByPosition(number)) {
					cout << "Был выбран корень дерева, с узлом которого работают методы работы дерева поиска\n";
					cout << "Теперь нет выбранного узла для работы с деревом\n";
					chosen_node = nullptr;
				}
				list_of_roots->deleteNodeByPosition(number);
				cout << "Успешно удалён узел списка под номером " << number << endl;
			}
			break;
		case 5:
			if (chosen_node == nullptr)
				cout << "Нет выбранного дерева\n";
			else {
				cout << "Введите такой ключ для узла дерева, значения которого нет в нём: ";
				cin >> number;
				chosen_node->root_of_tree->addLeaf(chosen_node->root_of_tree, number);
			}
			break;
		case 6:
			if (chosen_node == nullptr)
				cout << "Нет выбранного дерева\n";
			else
				cout << "Высота этого дерева равна " << chosen_node->root_of_tree->getDepth(chosen_node->root_of_tree, 1, 1) << endl;
			break;
		case 7:
			if (chosen_node == nullptr)
				cout << "Нет выбранного дерева\n";
			else {
				cout << "Fine! I suppose this how you wish to die.\n";
			}
			break;
		case 8:
			if (chosen_node == nullptr)
				cout << "Нет выбранного дерева\n";
			else {
				cout << "Прямой обход дерева:\n";
				chosen_node->root_of_tree->directWay(chosen_node->root_of_tree);
			}
			break;
		case 9:
			if (chosen_node == nullptr)
				cout << "Нет выбранного дерева\n";
			else {
				cout << "Симметричный обход дерева:\n";
				chosen_node->root_of_tree->symmetricWay(chosen_node->root_of_tree);
			}
			break;
		case 10:
			if (chosen_node == nullptr)
				cout << "Нет выбранного дерева\n";
			else {
				cout << "Обратный обход дерева:\n";
				chosen_node->root_of_tree->reverseWay(chosen_node->root_of_tree);
			}
			break;
		case 11:
			return 0;
		default:
			cout << "Опции работы с программой под этим номером не существует\n";
		}
		system("pause");
		system("cls");
	}
}