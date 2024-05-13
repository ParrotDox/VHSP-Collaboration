#include "..\Structures\OurTree.h"
#include "..\Methods\getLengthOfIntNumber.cpp"

int OurTree::findMaxLength(OurTree* current_node) {
    if (current_node == nullptr) {
        return 0;
    }

    int left_length = findMaxLength(current_node->left);
    int right_length = findMaxLength(current_node->right);
    int current_length = getLenghtOfIntNumber(current_node->key);

    // Находим максимум из длин левого и правого поддеревьев, а также текущего узла
    return std::max(std::max(left_length, right_length), current_length);
}
