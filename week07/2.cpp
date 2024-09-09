#include <iostream>
//#include <string>
//#include <cmath>


using std::cout;
using std::endl;
struct Node {
    Node* prev = nullptr;
    Node* next = nullptr;
    int key = 0;
};
struct List {
    Node* HEAD=nullptr;
    Node* TAIL=nullptr;
    Node* NIL=nullptr;
    size_t size = 0;
};

List* create_empty_list() {
    List* new_list = new List;
    Node* nill = new Node;
    new_list->NIL = nill;
    new_list->HEAD = nill;
    new_list->TAIL = nill;
	return new_list;
}


List* push_back(List* list_ptr, int new_key) {
  Node* new_end = new Node;
  new_end->key = new_key;
  if (list_ptr != nullptr) {
    if(list_ptr->TAIL == list_ptr->NIL) {
      list_ptr->TAIL = new_end;
      list_ptr->HEAD = new_end;
      new_end->next = list_ptr->NIL;
      new_end->prev = list_ptr->NIL;
      list_ptr->size = list_ptr->size + 1;
    }
    else if (list_ptr->TAIL != list_ptr->NIL and list_ptr->HEAD  == list_ptr->TAIL) {
      list_ptr->TAIL->next = new_end;
      new_end->next = list_ptr->NIL;
    	new_end->prev = list_ptr->TAIL;
      list_ptr->TAIL = new_end;
      list_ptr->HEAD = new_end->prev;
      list_ptr->size = list_ptr->size + 1;
    }
    else{
      list_ptr->TAIL->next = new_end;
      new_end->prev = list_ptr->TAIL;
      new_end->next = list_ptr->NIL;
      list_ptr->TAIL = new_end;
      
    delete list_ptr->HEAD;
      delete list_ptr->TAIL;
      list_ptr->HEAD = nullptr;
      list_ptr->HEAD = nullptr;
    }
  }
  return list_ptr;
}

List* insert_after(List* list_ptr, Node* prev_ptr, int new_key) {
    if (list_ptr != nullptr) {
      Node* new_el = new Node;
      new_el->key = new_key;
      if (list_ptr->HEAD == list_ptr->NIL) {
        if (prev_ptr == list_ptr->HEAD) {
        list_ptr->HEAD = new_el;
        new_el->prev = list_ptr->NIL;
        new_el->next = list_ptr->NIL;
        }
      }
      else if (list_ptr->HEAD != list_ptr->NIL and list_ptr->HEAD == list_ptr->TAIL) {
         if (prev_ptr == list_ptr->HEAD)  {
          list_ptr->HEAD->next = new_el;
          new_el->prev = list_ptr->HEAD;
          new_el->next = list_ptr->NIL;
          list_ptr->TAIL = new_el;
         }
      }
      else {
        if (prev_ptr == list_ptr->TAIL) {
          prev_ptr->next = new_el;
          new_el->next = list_ptr->NIL;
          new_el->prev = list_ptr->TAIL;
          list_ptr->TAIL = new_el;
        }
        else {
          new_el->prev = prev_ptr;
          new_el->next = prev_ptr->next->next;
          prev_ptr->next = new_el;
          prev_ptr->next->next->prev = new_el;

        }
      }
    }
}


int main() {
  List* list = create_empty_list();
  list = push_back(list, 0);
  list = insert_after(list, list->HEAD, 1);
  if ((list->HEAD->key == 0) and (list->TAIL->key == 1)) {
    cout << "OK" << endl;
  }
  delete list->HEAD;
  delete list->TAIL;
  delete list->NIL;
  delete list;
  return 0;
}
