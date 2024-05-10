#include "..\Structures\OurTree.h"
#include "..\Structures\MyNode and MyList.h"
// Добавляет узел в конец списка
void MyList::addNode(int value) {
	OurTree* new_root = new OurTree;
	new_root->key = value;
	MyNode* new_node = new MyNode;
	new_node->root_of_tree = new_root;
	if (quantity_of_nodes == 0) {
		head = new_node;
		cout << "В список был добавлен первый узел\n";
	}
	else {
		MyNode* current_node = head;
		while (current_node->next != nullptr)
			current_node = current_node->next;
		current_node->next = new_node;
		cout << "Был добавлен новый узел в конец списка\n";
	}
	++quantity_of_nodes;
}
// Вспомогательные функции
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
		return "узлов";
	if (number == 1)
		return "узел";
	return "узла";
}
// Выводит данные списка и его узлов
void MyList::showInfo() {
	if (head == nullptr) {
		cout << "Список пуст\n";
		return;
	}
	cout << "Головной узел: " << head << endl;
	cout << "Список хранит в себе " << quantity_of_nodes << matchingWordNodeWithNumeral(quantity_of_nodes) << ":\n";
	int node_number = 1;
	MyNode* current_node = head;
	do {
		cout << "Номер: " << node_number << ". Адрес текущего узла: " << current_node << ". Идентификатор ключа дерева: " << current_node->root_of_tree->key << ". Адрес следующего узла: " << current_node->next << endl;
		current_node = current_node->next;
		++node_number;
	} while (current_node != nullptr);
}
// Получает адрес узла в списке, используя его порядковый номер
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
// Удаляет узел, используя его порядковый номер в списке
void MyList::deleteNodeByPosition(int number) {
	// Исключения
	if (quantity_of_nodes == 0) {
		cout << "Список пуст. Удалять нечего\n";
		return;
	}
	if (number < 0 || number > quantity_of_nodes) {
		cout << "Узла под номером " << number << "нет в списке\n";
		return;
	}
	// Грантированное удаление
	MyNode* current_node = head;
	if (number == 1) {
		if (current_node->next == nullptr) {
			head = nullptr;
			delete current_node;
			cout << "Был удалён единственный узел списка\n";
		}
		else {
			head = current_node->next;
			delete current_node;
			cout << "Был удалён первый узел списка\n";
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
		cout << "Был удалён узел из списка под номером " << number << endl;
	}
	--quantity_of_nodes;
}