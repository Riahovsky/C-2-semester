#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Node {
    int key = 0;
    Node*next = nullptr;
};

Node* find_chain (Node*& head, int N) {
    Node* curr = head; // Начало списка
    //int count = 1;
    int i = 0; int j = 0;
    int flag = 0; // Метка наличия
    Node* result = head; // Здесь хранится результат, либо начало
    if (head == nullptr) { // проверка корректности вводимых данных
        flag = 1;
        result = head;
    }
    else {
        Node* runner = head;
       for (int i = 0; i < N; ++i) { // Проверяем, что петля существует
        if (runner->next != nullptr) {
            runner = runner -> next; 
        }
        else {
            result = head;
            flag = 1;
            break;
            
        }
       }
     
    }
    if (flag == 0) { // Находим петлю полным перебором всех элементов
        for (i = 0; i < N; ++i) {
            if (flag == 1) {
                break;
            }
            for (j = 0; j < N; ++j) {
                Node* finder = curr;
                if (finder->next == curr) {
                    result = curr;
                    flag = 1;
                }
                else {finder = finder->next;}
                break;
            }
            curr = curr->next;
        }
    }
    return result;
}

main() {
    Node* HEAD = nullptr;
// Начальные данные    
    Node* begin_of_chain = new Node;
    begin_of_chain->key = 0;
// Идём по петле

    Node* curr = begin_of_chain;
    int lengh = 1;
    if (HEAD != nullptr and begin_of_chain != nullptr) {
    while (curr->next != begin_of_chain) {
        ++lengh;
        curr = curr->next;
    }
    }

delete begin_of_chain;
    return 0;
}