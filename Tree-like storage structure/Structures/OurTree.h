/* ������� �� �������� OurTree ������������ ����� ������ ������, �������� � ���� ��������
���� int. ����� ����� ������� �� ����� ���� �����, � ������� ���������� �������� */
#pragma once
#include <iostream>
using namespace std;

struct OurTree {
	// ��������� ������ � ������������������� ������
	OurTree* previous = nullptr;
	int key = 0; // ������������� ���� ������
	OurTree* left = nullptr;
	OurTree* right = nullptr;
	// ���������� �������, ���������� � �������
	void addLeaf(OurTree* current_node, int value); // ������ ���� ��� ������, �� ���������, �������� �������� ���������� ������ ������
	void demolishCollapse(OurTree* current_node); // �������� ����� ������ �� ���������� ���� �� ��� ������
	// ������, ������������ ������ � ����� � �������� �������
	void directWay(OurTree* current_node);
	void symmetricWay(OurTree* current_node);
	void reverseWay(OurTree* current_node);
	// ��������������� ���������
	OurTree* findMin();
	OurTree* findMax();
	void delLeft();
	void delRight();
};