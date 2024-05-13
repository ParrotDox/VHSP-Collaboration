#pragma once
#include <iostream>
using namespace std;

struct MyNode {
	OurTree* root_of_tree = nullptr;
	MyNode* next = nullptr;
};

struct MyList {
	MyNode* head = nullptr;
	int quantity_of_nodes = 0;
	// Методы обработки узлов списка
	void addNode(int value); // Добавляет узел в конец списка
	// Вспомогательные функции
	int simplificationOfNumeral(int number);
	string matchingWordNodeWithNumeral(int number);
	void showInfo(); // Выводит данные списка и его узлов
	MyNode* getNodeByPosition(int number); // Получает адрес узла в списке, используя его порядковый номер
	void deleteNodeByPosition(int number); // Удаляет узел, используя его порядковый номер в списке
};