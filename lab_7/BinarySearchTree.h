#ifndef TREE_LAB7_H
#define TREE_LAB7_H

#include <iostream>
#include <string>

class BinarySearchTree {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;
        Node(int val) : data(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

    // Вспомогательные методы
    void insertHelper(Node*& node, int value);
    void destroyTree(Node* node);
    void preOrderHelper(Node* node, std::string& result);
    void inOrderHelper(Node* node, std::string& result);
    void postOrderHelper(Node* node, std::string& result);

public:
    // Конструкторы и деструктор
    BinarySearchTree();
    ~BinarySearchTree();

    // Основные методы
    bool isEmpty() const;
    void insert(int value);
    void createTree(int min, int max, int count);
    std::string preOrderTraversal();
    std::string inOrderTraversal();
    std::string postOrderTraversal();
    void clear();
};

#endif // TREE_LAB7_H

