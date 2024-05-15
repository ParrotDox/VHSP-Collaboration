/* Система из структур OurTree представляет собой дерево поиска, хранящее в себе значения
типа int. Среди узлов системы не может быть таких, у которых одинаковое значение */
#pragma once
#include <iostream>
#include <string>
using namespace std;

struct OurTree {
	// Структура дерева с инициализированными полями
	OurTree* previous = nullptr;
	unsigned long long int key = 0; // Идентификатор узла дерева
	OurTree* left = nullptr;
	OurTree* right = nullptr;
	// Объявления методов, работающих с деревом
	void addLeaf(OurTree* current_node, int value); // Создаёт лист для дерева, по алгоритму, согласно которому получается дерево поиска
	void demolishCollapse(OurTree* current_node); // Удаление части дерева от указанного узла до его листов
	// Прямой, симметричный обходы и обход в обратном порядке
	void directWay(OurTree* current_node);
	void symmetricWay(OurTree* current_node);
	void reverseWay(OurTree* current_node);
	OurTree* findMax();
	int getDepth(OurTree* current_node, int number_of_current_level, int maximal_level);
	void verticalPrint(OurTree* root_of_tree);
	int findFreeIndexInLevel(int* level);
	int getLenghtOfNumber(unsigned long long number);
	OurTree* findNodeWithMaximalKey(OurTree* current_node);
	string placeNumberInCell(unsigned long long number, int lenght_of_cell);
	void printMatrix(int** matrix, int height, int width);
	void fillMatrix(int** matrix, OurTree* current_node, int depth_limit, int current_depth);
	void destroyMatrix(int** matrix, int height);
	string convertNumberToString(int number);
	int exponentiationOfNumberTwo(int degree);
	string getSomeSpace(int amount);
	string createEmptyCell(int min_length_cell, int cd, int d);
	string createKeepCell(int min_length_cell, unsigned long long number, int cd, int d);
};