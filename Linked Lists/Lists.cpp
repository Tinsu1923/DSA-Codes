#include<iostream>
using namespace std;
class Node{
    public:
    int key, data;
    Node* nextAddress;
    Node(int key,int data){
        this->key = key;
        this->data = data;
        nextAddress = nullptr;
    }
    Node(){
        key = 0;
        data = 0;
        nextAddress = nullptr;
    }
};
class singlyLinkedList{
    public:
    Node* firstAddress;
    singlyLinkedList(Node* node){
        firstAddress = node;
    }
    singlyLinkedList(){
        firstAddress = nullptr;
    }
    bool checkIfExists(int key){
        Node* ptr = firstAddress;
        Node* temp = nullptr;
        while(ptr != nullptr){
            if (ptr->key == key) temp = ptr;
            ptr = ptr->nextAddress;
        }
        if (temp != nullptr){
            return true;
        }
    }
    void appendNode(Node* n){
        if (checkIfExists(n->key) == true){
           cout << "There is another node with key: " << n->key << ". Can't append." <<endl;
        }
        else {
            Node* h = firstAddress;
            if (h == nullptr){
                h = n;
            }
            else{
                while(h != nullptr){
                    h = h->nextAddress;
                }
                h = n; // append the element at the last.
                cout << "Node appended. "<<endl;
            }
        }
    }
    void prependNode(Node *n){
        if (checkIfExists(n->key)){
            cout << "There is another node with key: " << n->key << ". Can't append." <<endl;
        }
        else{
            Node* h = firstAddress;
            h->nextAddress = firstAddress;
            firstAddress = h;
            cout << "Node prepended."<<endl;
        }
    }
    void insertNodeAfter(int key, Node*h){
        

    }
};
int main(){

}