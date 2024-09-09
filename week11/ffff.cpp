#include <iostream>
#include <string>
#include <cmath>

using namespace std;


struct Node {
    int key = 0;
    Node* left = nullptr;
    Node* right = nullptr;
    Node* parent = nullptr;
};

 void insert_node(Node*& tree, int new_key) {
    if (tree == nullptr) {
        Node* ntree = new Node;
        ntree->key = new_key;
        tree = ntree;
    }
    else {
        Node* curr = tree;
        Node* nNode = new Node;
        nNode->key = new_key;
        while (1 == 1) {
          if (curr->key > new_key) {
            if (curr->left == nullptr) {
              curr->left = nNode;
              nNode->parent = curr;
              break;
            }
            else
            {curr = curr->left;}
          }
          
          else {
            if(curr->right == nullptr) {
              curr->right = nNode;
              nNode->parent = curr;
              break;
            }
            else {
            curr = curr->right; }
          }
        }
        }
    }

       Node* find(Node*& tree, int key) {
    Node* finder = nullptr;
    Node* curr = tree;
    if (tree == nullptr) {
        finder  = tree;
    }
    else {
        while (1==1) {
            if(curr != nullptr) {
                if (curr->key == key) {
                    finder = curr;
                    break;
                }
                else {
                    if (curr->key > key) {
                        if (curr->left == nullptr) {
                            break;
                        }
                        else {
                            curr = curr->left;
                        }
                    }
                    else {
                       if (curr->right == nullptr) {
                            break;
                        }
                        else {
                            curr = curr->right;
                        } 
                    }
                }
            }
        }
    }
     return finder;
}

Node* max(Node*& tree) {
    Node* maxNode = tree;
    Node* curr = tree;
    if (tree != nullptr) {
        while (curr->right != nullptr) {
            curr = curr->right;
        }
        maxNode = curr;
    }
    return maxNode;
  }



void delete_node(Node*& tree, int key) {
  if (tree != nullptr ) {
    Node* finder = find(tree,key);
    if (tree->left == nullptr and tree->right == nullptr) {
      if (tree->key == key) {
        delete tree;
        tree = nullptr;
        return;
      }
      else {
        return;
      }
    }
    if (finder != nullptr) {
      if (finder->left == nullptr and finder->right == nullptr) {
        delete finder;
        finder = nullptr;
      }
      else if (finder->left != nullptr and finder->right == nullptr) {
        Node* curr1 = finder;
        finder = finder->left;
        delete curr1;
        curr1 = nullptr;
      }
      else if (finder->right != nullptr and finder->left == nullptr) {
        Node* curr2 = finder;
        finder = finder->right;
        delete curr2;
        curr2 = nullptr;
      }
      else{
        if (finder == tree) {
          Node* maxNode = tree->left;
          Node* curr000 = tree->left;
          if (tree->left != nullptr) {
          while (curr000->right != nullptr) {
            curr000 = curr000->right;
          }
          maxNode = curr000;
          tree->key = maxNode->key;
          delete maxNode;
          maxNode = nullptr;
    }
        }
        if (finder->left != nullptr and finder != tree){
          Node* curr = finder->left;
          while (curr->right != nullptr) {
            if (curr->right != nullptr) {
            curr = curr->right;
            }
            else{
              break;
            }
          }
          cout << 4;
          int k = finder->key;
          finder->key = curr->key;
          curr->key = k;
          delete_node(tree,k);

        }

      }
      


    }
  }
}





int main() {
  Node* tree = nullptr;
  insert_node(tree, 4);
  insert_node(tree, 2);
  insert_node(tree, 6);
  delete_node(tree, 3);
  delete_node(tree, 2);
  delete_node(tree, 6);
  if (!(tree->left) and !(tree->right)) {
    cout << "OK" << endl;
  }
  delete_node(tree, 4);
  return 0;
}