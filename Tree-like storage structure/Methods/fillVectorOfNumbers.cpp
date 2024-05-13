#include <iostream>
#include <vector>
#include "..\Structures\OurTree.h"
using namespace std;
void fillVectorOfNumbersHelper(vector<int>* numbers, OurTree* current_node, int current_depth, int target_depth) {
    if (current_node == nullptr) {
        return;
    }
    // Если текущий уровень равен целевому уровню, добавляем значение текущего узла в вектор
    if (current_depth == target_depth) {
        numbers->push_back(current_node->key);
        return;
    }
    // Рекурсивно вызываем функцию для левого и правого поддеревьев
    fillVectorOfNumbersHelper(numbers, current_node->left, current_depth + 1, target_depth);
    fillVectorOfNumbersHelper(numbers, current_node->right, current_depth + 1, target_depth);
}
// Функция должна заполнить вектор числами, которые хранятся в дереве поиска на заданном уровне высоты
vector<int>* fillVectorOfNumbers(OurTree* root_of_tree, int depth) {
    // Создаем вектор для хранения чисел на заданном уровне
    vector<int>* numbers = new vector<int>;
    // Запускаем вспомогательную рекурсивную функцию для заполнения вектора
    fillVectorOfNumbersHelper(numbers, root_of_tree, 1, depth);
    return numbers;
}
