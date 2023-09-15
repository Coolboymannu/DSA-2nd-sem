/*12. WAP in C++ to create a binary search tree and implement inorder, preorder, postorder traversal algorithms.
*/
#include<iostream>
using namespace std;
#include <iostream>

using namespace std;

// Define a node class for the binary search tree.
class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

// Define a binary search tree class.
class BinarySearchTree {
public:
  Node *root;
  int size;

  BinarySearchTree() {
    this->root = NULL;
    this->size = 0;
  }

  // Insert a new node into the binary search tree.
  void Insert(int data) {
    Node *newNode = new Node(data);

    if (this->root == NULL) {
      this->root = newNode;
    } else {
      Node *currentNode = this->root;

      while (currentNode != NULL) {
        if (data < currentNode->data) {
          if (currentNode->left == NULL) {
            currentNode->left = newNode;
            break;
          } else {
            currentNode = currentNode->left;
          }
        } else {
          if (currentNode->right == NULL) {
            currentNode->right = newNode; 

            break;
          } else {
            currentNode = currentNode->right;
          }
        }
      }
    }

    this->size++;
  }

  // Perform inorder traversal of the binary search tree.
  void Inorder(Node*root) {
    if (this->root == NULL) {
      return;
    } else {
      Inorder(this->root);
    }
    
  }

  // Perform preorder traversal of the binary search tree.
  void Preorder(Node*root) {
    if (this->root == NULL) {
      return;
    } else {
      Preorder(this->root);
    }
}};
int main(){
  BinarySearchTree t;
  t.Insert(10);
  t.Insert(7);
  t.Insert(5);
  t.Insert(2);
  t.Insert(20);
  t.Insert(34);
  t.Inorder(t.root);
return 0;}