#include <iostream>
#include "..\Structures\OurTree.h"
#include <vector>
#include "..\Methods\convertIntNumberToString.cpp"
using namespace std;

std::string OurTree::fillString(int level, int max_length) {
    // Вычисляем количество элементов на данном уровне
    int num_elements = pow(2, level - 1);

    // Создаем вектор для хранения чисел на уровне
    std::vector<int> numbers;

    // Заполняем вектор числами
    for (int i = 0; i < num_elements; ++i) {
        if (i < size) {
            // Если узел существует, добавляем его ключ
            numbers.push_back(tree[i]);
        }
        else {
            // Иначе добавляем пустое значение
            numbers.push_back(-1); // или любое другое значение для пустого узла
        }
    }

    // Создаем строку для данного уровня
    std::string level_str;
    for (int i = 0; i < num_elements; ++i) {
        // Преобразуем число в строку и добавляем его в строку уровня
        std::string num_str = convertIntNumberToString(numbers[i], max_length);
        level_str += num_str;

        // Добавляем пробелы между числами
        if (i < num_elements - 1) {
            level_str += " ";
        }
    }

    return level_str;
}
