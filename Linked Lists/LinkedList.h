#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <map>
using namespace std;

class LinkedList{


public:
  LinkedList(){
    head = NULL;
  }

  void addValue(int i){
    Node* new_node = new Node();
    new_node->val = i;
    new_node->next = head;

    head = new_node;
  }

  void popValue(){
    Node* old_node = head;
    head = head->next;
    delete old_node;
  }

  void removeDups();

  void print(){
    Node* temp = head;
    while(temp != NULL){
      cout<< temp->val <<'\n';
      temp = temp->next;
    }
  }

  void freeList(){
    while(head != NULL){
      Node* deleted = head;
      head = head->next;
      delete deleted;
    }
  }

private:
  typedef struct _Node {
    int val;
    struct _Node *next;
  }Node;
  Node* head;

};

#endif /* LINKEDLIST_H */
