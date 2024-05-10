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
	// ������ ��������� ����� ������
	void addNode(int value); // ��������� ���� � ����� ������
	// ��������������� �������
	int simplificationOfNumeral(int number);
	string matchingWordNodeWithNumeral(int number);
	void showInfo(); // ������� ������ ������ � ��� �����
	MyNode* getNodeByPosition(int number); // �������� ����� ���� � ������, ��������� ��� ���������� �����
	void deleteNodeByPosition(int number); // ������� ����, ��������� ��� ���������� ����� � ������
};