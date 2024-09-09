#include <iostream>
//#include <string>
//#include <cmath>


using std::cout;
using std::endl;
struct Node {
    int key = 0;
    Node* next = nullptr;
};
void push_back(Node*& head_ref, int new_key) {
  Node* new_el = new Node;
  Node* curr = head_ref;
  new_el -> key = new_key;
    if (head_ref == nullptr) {
      new_el -> next = nullptr;
      head_ref  = new_el ;
      //head_ref -> key = new_el -> key;
    }
    else {
     new_el -> next = nullptr ;
    while (curr -> next != nullptr) {
      curr = curr -> next;
    }
    curr -> next = new_el;

    }
}

void remove_key(Node*& head_ptr, int key) {
  Node* curr = new Node;
  if (head_ptr != nullptr) {
    if(head_ptr->key == key) {
      head_ptr = head_ptr->next;
      }
    else {
      while(curr->next->key != key) {
        curr = curr->next;
        if(curr == nullptr) {
          break;
        }
      }
      if (curr != nullptr) {
        
        curr->next = curr->next->next;
      }

    }
}
}


int main() {
  Node* HEAD = nullptr;
  push_back(HEAD, 0);
  push_back(HEAD, 1);
  push_back(HEAD, 2);
  remove_key(HEAD, 0);
  remove_key(HEAD, 1);
  remove_key(HEAD, 2);
  remove_key(HEAD, 3);
  if (HEAD == nullptr) {
    cout << "OK" << endl;
  }
  return 0;
}







