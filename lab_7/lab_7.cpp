#include "BinarySearchTree.h"
#include <iostream>

int main() {
    BinarySearchTree bst;
    setlocale(LC_ALL, "Ru");
    // Тестирование создания пустого дерева
    std::cout << "1. Создание пустого дерева:" << std::endl;
    std::cout << "Дерево пустое? " << (bst.isEmpty() ? "Да" : "Нет") << std::endl << std::endl;

    // Тестирование добавления элементов
    std::cout << "2. Добавление элементов 5, 3, 7, 2, 4, 6, 8:" << std::endl;
    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert(2);
    bst.insert(4);
    bst.insert(6);
    bst.insert(8);

    std::cout << "Обход сверху вниз: " << bst.preOrderTraversal() << std::endl;
    std::cout << "Обход слева направо: " << bst.inOrderTraversal() << std::endl;
    std::cout << "Обход снизу вверх: " << bst.postOrderTraversal() << std::endl << std::endl;

    // Тестирование очистки дерева
    std::cout << "3. Очистка дерева:" << std::endl;
    bst.clear();
    std::cout << "Дерево пустое? " << (bst.isEmpty() ? "Да" : "Нет") << std::endl << std::endl;

    // Тестирование создания дерева со случайными значениями
    std::cout << "4. Создание дерева со случайными значениями (10 элементов от 0 до 100):" << std::endl;
    bst.createTree(0, 100, 10);

    std::cout << "Обход сверху вниз: " << bst.preOrderTraversal() << std::endl;
    std::cout << "Обход слева направо: " << bst.inOrderTraversal() << std::endl;
    std::cout << "Обход снизу вверх: " << bst.postOrderTraversal() << std::endl << std::endl;

    // Тестирование повторной очистки
    std::cout << "5. Повторная очистка дерева:" << std::endl;
    bst.clear();
    std::cout << "Дерево пустое? " << (bst.isEmpty() ? "Да" : "Нет") << std::endl;

    return 0;
}