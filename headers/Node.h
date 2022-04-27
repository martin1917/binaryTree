#pragma once

class Node
{
private:
    Node* left;
    Node* right;
    int data;

public:
    /// Создать элемент для дерева
    Node(int data);
    
    ~Node();

public:
    /// Проверка на существование левого узла
    bool leftExist();

    /// Проверка на существование правого узла
    bool rightExist();

    Node* getLeft();
    void setLeft(Node* node);
    Node* getRight();
    void setRight(Node* node);
    int getData();
    void setData(int data);
};