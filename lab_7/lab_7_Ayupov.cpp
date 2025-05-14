#include "BinarySearchTree.h"
#include <iostream>

int main() {
    BinarySearchTree bst;
    setlocale(LC_ALL, "Ru");
    std::cout << "Создание пустого дерева:" << std::endl;
    std::cout << "Дерево пустое? " << (bst.isEmpty() ? "Да" : "Нет") << std::endl << std::endl;

    std::cout << "Создание дерева со случайными значениями (10 элементов от 10 до 99):" << std::endl;
    bst.createTree(10, 99, 10);

    std::cout << "Обход сверху вниз: " << bst.preOrderTraversal() << std::endl;
    std::cout << "Обход слева направо: " << bst.inOrderTraversal() << std::endl;
    std::cout << "Обход снизу вверх: " << bst.postOrderTraversal() << std::endl << std::endl;

    std::cout << "Очистка дерева:" << std::endl;
    bst.clear();
    std::cout << "Дерево пустое? " << (bst.isEmpty() ? "Да" : "Нет") << std::endl;

    return 0;
}