#include "../Structures/OurTree.h"

// Помещает символы числа в центр ячейки
string OurTree::placeNumberInCell(unsigned long long number, int lenght_of_cell) {
	string converted_number = convertNumberToString(number);
	int length_of_number = getLenghtOfNumber(number);
	if (length_of_number > lenght_of_cell)
		return "ERROR";
	if (length_of_number == lenght_of_cell)
		return converted_number;
	int amount_of_spaces = lenght_of_cell - length_of_number;
	if (amount_of_spaces == 1)
		return converted_number + ' ';
	int length_of_corner = amount_of_spaces / 2;
	string corner = "";
	for (int i = 0; i < length_of_corner; ++i)
		corner += ' ';
	string cell = corner + converted_number + corner;
	if (amount_of_spaces - length_of_corner * 2 == 1)
		cell += ' ';
	return cell;
}