#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
    this->root = nullptr;
}

BinaryTree::BinaryTree(Node* root)
{
    this->root = root;
}

BinaryTree::BinaryTree(int a, int b, int count)
{
    if(b - a + 1 < count)
        throw std::runtime_error("Incorrect values.");
    
    this->root = nullptr;
    
    srand(time(NULL));
    for(int i = 0; i < count; i++)
    {
        int value = a + rand() % (b - a + 1);
        addNode(value);
    }
}

bool BinaryTree::isEmpty()
{
    return this->root == nullptr;
}

void BinaryTree::addNode(int data)
{
    if(root == nullptr)
        root = new Node(data);
    else
        addNode(root, data);
}

void BinaryTree::addNode(Node* root, int data)
{
    if(data < root->getData())
    {
        if(root->leftExist())
        {
            addNode(root->getLeft(), data);
        }
        else
        {
            root->setLeft(new Node(data));
        }
    }
    else
    {
        if(root->rightExist())
        {
            addNode(root->getRight(), data);
        }
        else
        {
            root->setRight(new Node(data));
        }
    }
}

std::string BinaryTree::preOrder()
{
    return preOrder(root);
}

std::string BinaryTree::preOrder(Node* root)
{
    std::string str = "";
    if(root != nullptr)
    {
        str += std::to_string(root->getData()) + " ";
        str += preOrder(root->getLeft());
        str += preOrder(root->getRight());
    }
    return str;
}

std::string BinaryTree::inOrder()
{
    return inOrder(root);
}

std::string BinaryTree::inOrder(Node* root)
{
    std::string str = "";
    if(root != nullptr)
    {
        str += inOrder(root->getLeft());
        str += std::to_string(root->getData()) + " ";
        str += inOrder(root->getRight());
    }
    return str;
}

std::string BinaryTree::postOrder()
{
    return postOrder(root);
}

std::string BinaryTree::postOrder(Node* root)
{
    std::string str = "";
    if(root != nullptr)
    {
        str += postOrder(root->getLeft());
        str += postOrder(root->getRight());
        str += std::to_string(root->getData()) + " ";
    }
    return str;
}

std::string BinaryTree::bfs()
{
    if(root == nullptr) return "";

    std::string str = "";
    std::queue<Node*> queue;
    queue.push(root);

    while(!queue.empty())
    {
        Node* el = queue.front();
        str += std::to_string(el->getData()) + " ";
        queue.pop();

        if(el->leftExist())
        {
            queue.push(el->getLeft());
        }
        if(el->rightExist())
        {
            queue.push(el->getRight());
        }
    }
    
    return str;
}

void BinaryTree::deleteTree()
{
    deleteTree(root);
    root = nullptr;
}

void BinaryTree::deleteTree(Node* root)
{
    if(root != nullptr)
    {
        deleteTree(root->getLeft());
        root->setLeft(nullptr);
        deleteTree(root->getRight());
        root->setRight(nullptr);
        delete root;
    }
}

BinaryTree::~BinaryTree()
{
    deleteTree(root);
}

Node* BinaryTree::getRoot()
{
    return this->root;
}