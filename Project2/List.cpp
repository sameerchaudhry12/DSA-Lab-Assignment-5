#include "list.h"
#include <iostream>
using namespace std;
List::List() {
    head = NULL;
    tail = NULL;
}

void List::append(int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void List::reverse() {
    Node* temp = NULL;
    Node* current = head;
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != NULL) {
        head = temp->prev;
    }
}

void List::display() {
    Node* current = head;
    while (current != NULL) {
       cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void List::displayAlternate() {
    bool alternate = true;
    Node* current = head;
    while (current != NULL) {
        if (alternate) {
            cout << current->data << " ";
        }
        alternate = !alternate;
        current = current->next;
    }
    cout << endl;
}
