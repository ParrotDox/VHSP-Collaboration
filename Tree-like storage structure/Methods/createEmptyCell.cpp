#include "..\Structures\OurTree.h"

string OurTree::createEmptyCell(int min_length_cell, int cd, int d)
{
	int cur_width_cell = min_length_cell * pow(2, d - cd);
	string cell = "";
	for (int i = 0; i < cur_width_cell; ++i)
	{
		cell += '_';
	}
	return cell;
}