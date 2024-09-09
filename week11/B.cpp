#include <iostream>
using std::cout;
using std::endl;
using namespace std;
enum TraverseType { INORDER, PREORDER, POSTORDER };
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
       // delete ntree;
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

void destroy_tree(Node*& tree) {
  if (tree != nullptr) {
    Node* left_tree = tree->left;
    Node* right_tree = tree->right;
    delete tree;
  	tree = nullptr;
    destroy_tree(left_tree);
    destroy_tree(right_tree);
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

void print(Node*& tree, const TraverseType type) {
  if (tree == nullptr) {
    cout << endl;
  }
  else {
   switch(TraverseType ()){
    case  INORDER: 
    *Node curr = tree;
    print(curr->left, TraverseType(INORDER));
    cout << curr-> key << ' ';
    print(curr->right, TraverseType(INORDER));
    cout << endl;
    break;
    case PREORDER:      ;
    case POSTORDER:     ;
     
    default: 
    cout << endl;
    break;
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