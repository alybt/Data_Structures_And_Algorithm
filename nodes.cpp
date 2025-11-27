#include <iostream>


using namespace std;

struct Node *head = NULL;

struct Node {
    int num;
    Node *prev;
    Node *next;
};

void insertNode(int n){
    struct Node *new_node = new Node;
    new_node->num=n;
    new_node->prev =nullptr;
    new_node->next=head;
    head = new_node;
}


void insertAtTheEnd(int n){
    struct Node *new_node = new Node;
    struct Node *prev_node = new Node;
    Node* temp = head;

    while (temp->next != NULL){
        temp = temp->next;
    }
    
    new_node = temp->next;
    prev_node = temp->prev;

    // while (temp->next != NULL){
    //     temp=temp->next;
    // }
    
    // temp->next=new_node;
    // new_node->num=n;
    // new_node->next = NULL;

}

void insertAtAnyPoint(int n, int position){
    struct Node *new_node = new Node;
    Node* temp = head;

    for (int i= 0; i < position - 1; i++){
        temp = temp-> next;
    }

    new_node->next=temp->next;
    new_node->num=n;
    temp->next=new_node;

}

void deleteNode(int value){
    Node* del =nullptr;
    Node* temp = head;
    while (temp->num != value){
        temp = temp->next;
    }
    del = temp->next;
    temp->next = temp->next->next;

}



void findTheMiddle(int counter){
    int count = 0;
    struct Node *temp = head;
    if (counter % 2 == 0){
        for (int i = 0; i < counter/2; i++) {
            count++;
        }
        count = count;
        for(int i = 0; i < count; i++){
            temp->num;
            temp = temp-> next;
        }

        cout << endl;
        cout << temp->num;

    } else if (counter % 2 != 0){
        for (int i = 0; i < counter/2; i++) {
            count++;
        }
        count = count;
        for(int i = 0; i < count; i++){
            temp->num;
            temp = temp-> next;
        }

        cout << endl;
        cout << temp->num;
    }


}

void display_all_node(){
    cout << "The list contains the data entered: " << endl;
    struct Node *temp = head;

    while (temp!=NULL){
        if (temp!=NULL){
            cout << temp -> num << " ";
            temp = temp->next;
        } else {
            cout << endl;
        }

    }

}

void reverse(){
    Node* current=head;
    Node *prev=NULL, *next=NULL;
    while (current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
        head=prev;
}

int counter(){

    int count;
    struct Node *temp = head;
    while (temp!=NULL){
        if (temp!=NULL){
            count++;
            temp= temp->next;
        } else {
            cout << endl;
        }

    }

    return count;
}

int main(){
    insertNode(9);
    insertNode(11);
    display_all_node();
    reverse();
    display_all_node();
    cout << "\n" << counter();
    cout << endl;
    insertAtTheEnd(23);
    insertAtTheEnd(25);
    insertAtTheEnd(27);
    display_all_node();
    cout << endl;
    int objCounter = counter();
    findTheMiddle(objCounter);
    cout << endl;
    insertAtAnyPoint(15,3);
    cout << endl;
    display_all_node();
    deleteNode(15);
    cout << endl;
    display_all_node();
}
