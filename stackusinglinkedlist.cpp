#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* top = NULL;

void push(int x) {
    node* newnode = new node();
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void pop() {
    if(top == NULL) {
        cout << "Underflow\n";
        return;
    }
    node* temp = top;
    top = top->next;
    delete temp;
}

void display() {
    node* temp = top;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}