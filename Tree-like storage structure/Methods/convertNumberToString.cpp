#include "../Structures/OurTree.h"

string OurTree::convertNumberToString(int number) {
	string current_string = "";
	while (number != 0) {
		int last_digit = number % 10;
		switch (last_digit) {
		case 0:
			current_string += '0';
			break;
		case 1:
			current_string += '1';
			break;
		case 2:
			current_string += '2';
			break;
		case 3:
			current_string += '3';
			break;
		case 4:
			current_string += '4';
			break;
		case 5:
			current_string += '5';
			break;
		case 6:
			current_string += '6';
			break;
		case 7:
			current_string += '7';
			break;
		case 8:
			current_string += '8';
			break;
		default:
			current_string += '9';
		}
		number /= 10;
	}
	string reversed_string = "";
	for (int i = current_string.size() - 1; i > -1; --i)
		reversed_string += current_string[i];
	return reversed_string;
}