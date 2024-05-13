/* Система из структур OurTree представляет собой дерево поиска, хранящее в себе значения
типа int. Среди узлов системы не может быть таких, у которых одинаковое значение */
#pragma once
#include <iostream>
using namespace std;

struct OurTree {
	// Структура дерева с инициализированными полями
	OurTree* previous = nullptr;
	int key = 0; // Идентификатор узла дерева
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
};