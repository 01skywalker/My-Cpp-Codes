#include <iostream>
using namespace std;
typedef struct node {
  int data;
  struct node *next;
} Node;
Node *createNode(int input) {
  Node *newNode = new Node;
  newNode->data = input;
  newNode->next = NULL;
  return newNode;
}
void insertBeginning(
    Node *&head, int val) { // inserts a node at the beginning of linked list
  Node *newNode = createNode(val);
  newNode->next = head;
  head = newNode;
}
void printList(Node *head) { // to print the whole linked list
  Node *temp = head;
  if (head == NULL) {
    cout << "List is Empty" << endl;
    return;
  }
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
void insertEnd(Node *&head,
               int val) { // inserts a node at the end of the linked list
  if (head == NULL) {
    Node *newNode = createNode(val);
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = createNode(val);
  return;
}
void deleteFirst(Node *&head) { // deletes first node of the linked list
  if (head == NULL) {
    cout << "List is Empty" << endl;
    return;
  }
  cout << "Deleting : " << head->data << endl;
  Node *deleted = head;
  head = head->next;
  delete deleted;
}
void deleteLast(Node *&head) { // deletes the last element of the linked list
  if (head == NULL) {
    cout << "List is Empty" << endl;
    return;
  }
  if (head->next == NULL) {
    Node *deleted = head;
    cout << "deleting : " << head->data << endl;
    head = NULL;
    delete deleted;
    return;
  }
  Node *temp = head;
  while (temp->next->next != NULL) {
    temp = temp->next;
  }
  Node *deleted = temp->next;
  cout << "Deleting : " << temp->next->data << endl;
  temp->next = NULL;
  delete deleted;
}
void insertAtPos(
    Node *&head, int val,
    int pos) { // inserts a node at any given position within the list
  if (pos < 1) {
    cout << "Invalid Position : Position too low within the linked list"
         << endl;
    return;
  }
  if (pos == 1) {
    insertBeginning(head, val);
    return;
  }
  Node *temp = head;
  for (int counter = 1; counter != pos - 1 && temp != NULL; counter++ ) {
    temp = temp->next;
  }
  if (temp == NULL) {
    cout << "Invalid Position : Position too high within the linked list"
         << endl;
    return;
  }
  Node *oldNode = temp->next;
  temp->next = createNode(val);
  temp->next->next = oldNode;
}
void deleteAtPos(
    Node *&head,
    int pos) { // deletes a node at any given position within the list
  if (pos < 1) {
    cout << "Invalid Position : Position does not exist" << endl;
    return;
  } else if (pos == 1) {
    deleteFirst(head);
    return;
  }
  int counter = 1;
  Node *temp = head;
  while (counter != pos - 1 && temp != NULL) {
    temp = temp->next;
    counter++;
  }
  if (temp == NULL || temp->next == NULL) {
    cout << "Invalid Position : Position does not exist" << endl;
    return;
  }
  Node *deleted = temp->next;
  cout << "Deleting : " << temp->next->data << endl;
  temp->next = temp->next->next;
  delete deleted;
}
void search(Node *head,
            int val) { // searches the data within the linked list and return
                       // the position of node that has the data
  int counter = 1;
  Node *temp = head;
  while (temp != NULL) {
    if (temp->data == val) {
      cout << val << " found at position : " << counter << endl;
      return;
    }
    temp = temp->next;
    counter++;
  }
  cout << val << " not found within the linked list" << endl;
}
void deleteList(Node *&head) { // deletes the whole linked list
  if (head == NULL) {
    cout << "List is Empty" << endl;
    return;
  }
  while (head != NULL) {
    Node *deleted = head;
    head = head->next;
    cout << "deleting : " << deleted->data << endl;
    delete deleted;
  }
}
void reverseList(Node *&head) { // reverses the linked list, first node becomes
                                // last and last becomes first
  Node *prev;
  Node *current = head;
  prev = NULL;
  while (current != NULL) {
    Node *nextNode = current->next;
    current->next = prev;
    prev = current;
    current = nextNode;
  }
  head = prev;
}

int main() {
  Node *head = NULL;
  // Tasks : Create a menu driven program using switch
  insertBeginning(head, 10);
  insertBeginning(head, 20);
  insertBeginning(head, 30);
  insertBeginning(head, 40);
  insertBeginning(head, 50);
  insertBeginning(head, 60);
  insertBeginning(head, 70);
  printList(head);
  search(head, 30);
  insertAtPos(head, 23, 4);
  printList(head);
  deleteAtPos(head, 2);
  insertEnd(head, 25);
  printList(head);
  deleteFirst(head);
  deleteLast(head);
  printList(head);
  reverseList(head);
  printList(head);
  deleteList(head);
  printList(head);
  cout << "\n<-------------------------------Code "
          "Complete------------------------------->\n";
  return 0;
}
