#include "..\Structures\OurTree.h"
#include <math.h>

//Метод создает пустую матрицу и передает ее в метод, который заполнит созданную матрицу
vector<vector<int>>* OurTree::createMatrix(OurTree* current_root)
{
	//Создаем пустую матрицу
	vector<vector<int>> matrix(getDepth(this, 1, 1),vector<int>(pow(2, current_root->getDepth(this,1,1) - 1)));	//Тут только вопрос про функцию getDepth есть
	cout << "Adress of Matrix: " << &matrix << '\n';	//Просто вывод адреса матрицы, можно убрать
	//Производим заполнение матрицы при помощи метода fillMatrix, передаем адрес на коренной узел,
	//двумерную матрицу как ссылку и текущий уровень, который равен 0 т.к. будем работать с индексами
	directWay(current_root, matrix, 0);
	return &matrix;
}
