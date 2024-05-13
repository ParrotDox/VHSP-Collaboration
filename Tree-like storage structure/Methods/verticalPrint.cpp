#include "..\Structures\OurTree.h"
#include "..\Methods\getLengthOfIntNumber.cpp"
#include "..\Methods\convertIntNumberToString.cpp"
#include "..\Methods\fillVectorOfNumbers.cpp"
#include <math.h>
#include <vector>
void OurTree::verticalPrint() {
	int quantity_of_levels = getDepth(this, 1, 1);
	int container_length = getLenghtOfIntNumber(this->findMaxLength(this)) + 1;
	int lenght_of_level = container_length * pow(2, quantity_of_levels - 1) - 1;
	vector<vector<int>> vector_of_vectors; // ¬ектор из векторов
    // «аполнение вектора числами дл¤ каждого уровн¤ высоты
    for (int i = 1; i <= quantity_of_levels; ++i) {
        // —оздаем вектор дл¤ текущего уровн¤
        std::vector<int>* numbers = fillVectorOfNumbers(this, i);
        // ѕомещаем вектор чисел текущего уровн¤ в общий вектор
        vector_of_vectors.push_back(*numbers);
        // ќсвобождаем пам¤ть, выделенную дл¤ временного вектора чисел текущего уровн¤
        delete numbers;
    }
}