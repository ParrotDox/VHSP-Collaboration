#include "..\Structures\OurTree.h"

string OurTree::createKeepCell(int min_length_cell, unsigned long long number, int cd, int d)
{
	int cur_width_cell = min_length_cell * pow(2, d - cd);
	string cell = placeNumberInCell(number, cur_width_cell);
	return cell;
}