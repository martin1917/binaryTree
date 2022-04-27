#include "Node.h"

Node::Node(int data)
{
    this->left = nullptr;
    this->right = nullptr;
    this->data = data;
}

Node* Node::getLeft()
{
    return this->left;
}
void Node::setLeft(Node* node)
{
    this->left = node;
}

Node* Node::getRight()
{
    return this->right;
}
void Node::setRight(Node* node)
{
    this->right = node;
}

int Node::getData()
{
    return this->data;
}
void Node::setData(int data)
{
    this->data = data;
}

bool Node::leftExist()
{
    return this->left != nullptr;
}

bool Node::rightExist()
{
    return this->right != nullptr;
}

Node::~Node()
{}