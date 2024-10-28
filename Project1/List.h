#pragma once
#include "node.h"
using namespace std;
class DList {
private:
    Node* head;
public:
    DList();
    bool emptyList();
    void insert_after(int oldV, int newV);
    void deleteNode(int value);
    void insert_begin(int value);
    void insert_end(int value);
    void traverse();
};



