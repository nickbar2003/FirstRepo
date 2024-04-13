#include "node.h"

class BinarySearchTree {
protected:
  Node *root;

public:
  void insertValPub(int newVal) { root = insertValPriv(root, newVal); }

  int deleteVal();
  void prePrint();
  void postPrint();
  void inPrint();
  void print();

  BinarySearchTree() { root = nullptr; }

private:
  Node *insertValPriv(Node *node, int newVal) {
    if (node == nullptr) {
      node = new Node(newVal);
      return node;
    } else {
      if (newVal < node->value) {
        node->leftChild = insertValPriv(node->leftChild, newVal);
      } else if (newVal > node->value) {
        node->rightChild = insertValPriv(node->rightChild, newVal);
      }
    }
    return node;
  }
};
