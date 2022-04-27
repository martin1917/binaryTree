#pragma once

#include "Node.h"
#include <string>
#include <random>
#include <stdexcept>
#include <queue>
#include <time.h>

class BinaryTree
{
private:
    Node* root;

public:
    /// Создать пустое дерево
    BinaryTree();
    /// Создать дерево с корнем
    BinaryTree(Node* root);
    /// Создать дерево с count элементами. Каждый элемент находится в диапозоне [1;20]
    BinaryTree(int a, int b, int count);
    ~BinaryTree();

public:
    /// проверить на пустоту дерево
    bool isEmpty();

    /// добавить новый элемент в дерево
    void addNode(int data);
    
    /// Обойти дерево в глубину (Прямой обход)
    std::string preOrder();

    /// Обойти дерево в глубину (Симметричный/поперечный обход)
    std::string inOrder();

    /// Обойти дерево в глубину (В обратном порядке)
    std::string postOrder();

    /// Обойти дерево в ширину
    std::string bfs();

    /// удалить дерево
    void deleteTree();

    /// удалить поддерево
    void deleteTree(Node* root);

    /// Получить корень дерева
    Node* getRoot();

private:
    void addNode(Node* root, int data);
    std::string preOrder(Node* root);
    std::string inOrder(Node* root);
    std::string postOrder(Node* root);
};