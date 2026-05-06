#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* front = NULL;
node* rear = NULL;

void enqueue(int x) {
    node* newnode = new node();
    newnode->data = x;
    newnode->next = NULL;

    if(front == NULL && rear == NULL) {
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue() {
    if(front == NULL) {
        cout << "Underflow\n";
        return;
    }
    node* temp = front;
    front = front->next;
    delete temp;
    if(front == NULL) {
        rear = NULL;
    }
}

void display() {
    node* temp = front;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}