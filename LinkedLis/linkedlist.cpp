#include "../node.cpp"

template<typename T>
void insertAtTheBeginningOfNode(int x, Node<T>** head){
    Node<T>* temp = new Node<T>(x);
    temp->next = *head;
    *head = temp;
}

template<typename T>
void insertAtTheEndOfNode(int x, Node<T>** head){
    Node<T>* temp = new Node<T>(x);

    if(*head == nullptr){
        *head = temp;
        return;
    }

    Node<T>* current = *head;

    while (current->next != nullptr){
        current = current->next;
    }

    current->next = temp;
    return;
}

template<typename T>
void deleteNodeOfNode(Node<T> **head, int key){
    Node<T>* temp = *head;
    Node<T>* prev = nullptr;

    if(temp != nullptr && temp->data == key){
        *head = temp->next;
        delete temp;
        return;
    }

    else{
        while (temp != nullptr && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if(temp == nullptr){
            // cout << "Element not present in the list" << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
    }
}

template<typename T>
int getIndexOfValuOfNode(int x, Node<T>** head){

    int index=0;
    Node<T>* current = *head;
    
    while (current->next != nullptr){
        if(current->data==x){
            return index;
        }
        index++;
        current = current->next;
    }

    //not found
    return -1;
}