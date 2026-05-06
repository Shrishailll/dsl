#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void createList() {
    int n, value;
    cout << "Enter size of linked list: ";
    cin >> n;

    Node *temp, *newNode;

    for(int i = 1; i <= n; i++) {
        cout << "Enter value: ";
        cin >> value;

        newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
}

void insertBegin() {
    int value;
    cout << "Enter value: ";
    cin >> value;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertEnd() {
    int value;
    cout << "Enter value: ";
    cin >> value;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteBegin() {
    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd() {
    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    if(prev == NULL)
        head = NULL;
    else
        prev->next = NULL;

    delete temp;
}


void display() {
    Node* temp = head;

    if(temp == NULL) {
        cout << "List is empty\n";
        return;
    }

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int choice;

    while(true) {
        cout << "\n1.Create Linked List";
        cout << "\n2.Insert at Beginning";
    cout << "\n3.Insert at End";
        cout << "\n4.Delete from Beginning";
        cout << "\n5.Delete from End";
        cout << "\n6.Display";
        cout << "\n7.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: createList();
             break;
            case 2: insertBegin(); 
            break;
            case 3: insertEnd();
             break;
            case 4: deleteBegin(); 
            break;
            case 5: deleteEnd(); 
            break;
            case 6: display(); 
            break;
            case 7: 
            return 0;
            default: cout << "Invalid choice";
        }
    }
}