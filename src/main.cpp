#include <iostream>
#include "Node.h"
#include "BinaryTree.h"

int main(int, char**)
{
    BinaryTree* tree1 = new BinaryTree();

    std::cout << "Tree is empty? - " << tree1->isEmpty() << std::endl;
    std::cout << "Add any elements in tree" << std::endl;

    tree1->addNode(10);
    tree1->addNode(6);
    tree1->addNode(15);
    
    std::cout << "Tree is empty? - " << tree1->isEmpty() << std::endl;
    std::cout << "Delete tree" << std::endl;
    tree1->deleteTree();
    std::cout << "Tree is empty? - " << tree1->isEmpty() << std::endl;

    std::cout << "\n-------------------------------------------------------\n" << std::endl;

    std::cout << "Create tree with 10 element. Each element is in range [1; 20]\n" << std::endl;
    BinaryTree* tree = new BinaryTree(1, 20, 10);

    std::cout << "DFS (Pre-order) (top -> down)" << std::endl;
    std::cout << tree->preOrder() << std::endl;
    std::cout << std::endl;

    std::cout << "DFS (In-order) (down -> top)" << std::endl;
    std::cout << tree->inOrder() << std::endl;
    std::cout << std::endl;

    std::cout << "DFS (Post-order) (down -> top)" << std::endl;
    std::cout << tree->postOrder() << std::endl;
    std::cout << std::endl;

    std::cout << "BFS (left -> right)" << std::endl;
    std::cout << tree->bfs() << std::endl;
    std::cout << std::endl;
}
