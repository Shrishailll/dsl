#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertBeg(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->next = head;
    head = temp;
}

void insertEnd(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        return;
    }
    Node* t = head;
    while (t->next != NULL)
        t = t->next;
    t->next = temp;
}

void insertPos(int val, int pos) {
    Node* temp = new Node;
    temp->data = val;
    if (pos == 1) {
        temp->next = head;
        head = temp;
        return;
    }
    Node* t = head;
    for (int i = 1; i < pos - 1 && t != NULL; i++)
        t = t->next;
    if (t == NULL) return;
    temp->next = t->next;
    t->next = temp;
}

void deleteBeg() {
    if (head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd() {
    if (head == NULL) return;
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* t = head;
    while (t->next->next != NULL)
        t = t->next;
    delete t->next;
    t->next = NULL;
}

void deletePos(int pos) {
    if (head == NULL) return;
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* t = head;
    for (int i = 1; i < pos - 1 && t->next != NULL; i++)
        t = t->next;
    if (t->next == NULL) return;
    Node* temp = t->next;
    t->next = temp->next;
    delete temp;
}

void display() {
    Node* t = head;
    while (t != NULL) {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

void search(int key) {
    Node* t = head;
    int pos = 1;
    while (t != NULL) {
        if (t->data == key) {
            cout << "Found at position " << pos << endl;
            return;
        }
        t = t->next;
        pos++;
    }
    cout << "Not Found" << endl;
}

int main() {
    int ch, val, pos;
    while (1) {
        cout << "1.InsertBeg \n 2.InsertEnd \n3.InsertPos \n4.DeleteBeg\n 5.DeleteEnd \n6.DeletePos \n7.Display\n 8.Search \n9.Exit\n";
        cout<<"Enter choice:"<<endl;
        cin >> ch;
        switch (ch) {
            case 1: cout<<"Enter the value :";
            cin >> val; insertBeg(val); 
            break;
            case 2:  cout<<"Enter the value :";
            cin >> val; insertEnd(val); 
            break;
            case 3:
            cout<<"Enter the value you want to inseart:"; cin >> val ;
            cout<<"enter the position where you want ass inseart element:";
             cin>>pos; 
             insertPos(val, pos);
             break;
            case 4: deleteBeg(); 
            break;
            case 5: deleteEnd();
             break;
            case 6: 
            cout<<"enter position which you want to delete element....:"<<endl;
            cin >> pos; deletePos(pos); 
            break;
            case 7: 
            cout<<"Linkedlist is:"<<endl;
            display(); 
            break;
            case 8:
             cout<<"enter the value you want to search...:"<<endl;
             cin >> val; 
           
            search(val);
             break;
            case 9: 
            return 0;
        }
    }
}