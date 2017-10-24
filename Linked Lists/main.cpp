#include "LinkedList.h"



int main(int argc, char* argv[]){
  LinkedList* list = new LinkedList();




  cout<<"Initial List\n";
  list->print();
  list->removeDups();
  cout<<"Final list\n";
  list->print();

  delete list;

  return EXIT_SUCCESS;
}
