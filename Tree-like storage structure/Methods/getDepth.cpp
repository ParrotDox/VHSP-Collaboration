#include "..\Structures\OurTree.h"
// Находит высоту дерева, а именно количество уровней, на которых расположены узлы
int OurTree::getDepth(OurTree* current_node, int number_of_current_level, int maximal_level) {
    if (current_node == nullptr)
        return maximal_level;
    if (number_of_current_level > maximal_level)
        maximal_level = number_of_current_level;
    maximal_level = getDepth(current_node->left, number_of_current_level + 1, maximal_level);
    maximal_level = getDepth(current_node->right, number_of_current_level + 1, maximal_level);
    return maximal_level;
}