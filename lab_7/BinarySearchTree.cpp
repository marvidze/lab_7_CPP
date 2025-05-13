#include "BinarySearchTree.h"
#include <cstdlib>
#include <ctime>

BinarySearchTree::BinarySearchTree() : root(nullptr) {
    std::srand(std::time(0));
}

BinarySearchTree::~BinarySearchTree() {
    destroyTree(root);
}

bool BinarySearchTree::isEmpty() const {
    return root == nullptr;
}

void BinarySearchTree::insertHelper(Node*& node, int value) {
    if (node == nullptr) {
        node = new Node(value);
    }
    else if (value < node->data) {
        insertHelper(node->left, value);
    }
    else if (value > node->data) {
        insertHelper(node->right, value);
    }
    // ≈сли значение уже существует, ничего не делаем
}

void BinarySearchTree::insert(int value) {
    insertHelper(root, value);
}

void BinarySearchTree::createTree(int min, int max, int count) {
    clear(); // ќчищаем существующее дерево

    if (min > max || count <= 0) return;

    int range = max - min + 1;
    for (int i = 0; i < count; i++) {
        int value = min + (std::rand() % range);
        insert(value);
    }
}

void BinarySearchTree::destroyTree(Node* node) {
    if (node != nullptr) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}

void BinarySearchTree::clear() {
    destroyTree(root);
    root = nullptr;
}

void BinarySearchTree::preOrderHelper(Node* node, std::string& result) {
    if (node != nullptr) {
        if (!result.empty()) result += " ";
        result += std::to_string(node->data);
        preOrderHelper(node->left, result);
        preOrderHelper(node->right, result);
    }
}

std::string BinarySearchTree::preOrderTraversal() {
    std::string result;
    preOrderHelper(root, result);
    return result;
}

void BinarySearchTree::inOrderHelper(Node* node, std::string& result) {
    if (node != nullptr) {
        inOrderHelper(node->left, result);
        if (!result.empty()) result += " ";
        result += std::to_string(node->data);
        inOrderHelper(node->right, result);
    }
}

std::string BinarySearchTree::inOrderTraversal() {
    std::string result;
    inOrderHelper(root, result);
    return result;
}

void BinarySearchTree::postOrderHelper(Node* node, std::string& result) {
    if (node != nullptr) {
        postOrderHelper(node->left, result);
        postOrderHelper(node->right, result);
        if (!result.empty()) result += " ";
        result += std::to_string(node->data);
    }
}

std::string BinarySearchTree::postOrderTraversal() {
    std::string result;
    postOrderHelper(root, result);
    return result;
}