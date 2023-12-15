// A linked list is a linear data structure, but its elements are not stored in contiguous memory locations.
// The elements of the linked list are linked using pointers.
// Linked lists have two parts: The data part and the reference that holds the address of the next element in the linked list.
// Advantages of linked lists over arrays: 
// 1. Ease of insertion / deletion of elements in the linked list.
// 2. Dynamic size.
// Disadvantages:
// 1. Random access is not allowed. (Only sequential access)
// 2. Extra memory is required for the pointer.
/* 6 operations to perform on the linked list.
1. Traversal.
2. Append a new node to the end of the linkedlist.
3. Append a new element to the start of the linked list.
4. Insert a new element in a specific position in the linked list.
5. Delete a node from the linked list.
6. Update a node in the linked list
*/
// Types of linked lists: 1. Singly linked lists, 2. Doubly linked lists, 3. Circular linked lists
// Let's see singly linked lists.
#include<iostream>
using namespace std;
class node{ // We are creating the nodes.
    public:
        int key;
        int data; 
        node* next;
    node(){
        key = 0;
        data = 0; 
        next = NULL;
    }
    node(int key, int data){
        this->key = key;
        this->data = data;
    }
};
class singlyLinkedList{
public:
node* head;
singlyLinkedList(){ // a default constructor that sets the value of the head pointer to null.
    head = NULL;
}
singlyLinkedList(node* first){ //  a parameterized constructor to set the value of the head pointer to the first node's address.
    head = first;
}
node* nodeExists(int key){ // check if a node exists in the linked list using it's key.
    node* ptr = head;
    node* temp = NULL;
    while (ptr != NULL)
    {
        if (ptr->key == key)
            temp = ptr;
        ptr = ptr->next;
    }
    return temp;
}
void appendNode(node* a){ // add a node to the end of the LL.
    if (nodeExists(a->key) != NULL){ // check if the node we are going to add has the same key as any of the nodes in the LL.
        cout << "Node already exists with the same key. Try again. "<<endl;
    }
    else{ 
        if (head == NULL){ // we are appending the first node to the list.
            head = a;
            cout << "Node appended. "<<endl;
        }
        else {
            node* ptr = head;
            while(ptr->next != NULL){ // We traverse the LL all the way to the end.
                ptr = ptr->next;
        }
        ptr->next = a; 
        cout << "Node appended."<<endl; // We make the last pointer (whose value was null) point to the new node to be appended.
    }
    }
}
void prependNode(node* n){
    if (nodeExists(n->key) != NULL){
        cout << "Node already exists, try another node." << endl;
    }
    else {
        n->next = head;
        // What's left is to change the head pointer to point to the node we are prepending.
        head = n;
        cout << "Node prepended to the start of the list. "<<endl;
    }
}
void x(){

}
void insertNodeAtPosition(int index, node* n){ // Assuming the head(Start position is at index 0)
    node* ptr = head;
    for(int i = 1; i < index-1;i++){
        ptr = ptr->next;
    }
    node* Lela = ptr->next;
    n->next = Lela;
    ptr->next = n;
}
void DeleteNodeAtEnd(){
    node* ptr = head;
    node* ptr2 = head->next;
    while(ptr2->next != NULL){
        ptr2 = ptr2->next;
        ptr = ptr->next;
}
delete ptr2;
ptr->next = NULL;
cout<<"Node deleted."<<endl;
}
void deleteFirstNode(){
    node* ptr = head;
    head = head->next;
    delete ptr;
    cout<<"Node deleted successfully.";
}
void deleteNodeAtPosition(int index){ // Essentially, to delete a node and still keep the link, we have to do a series of operations.
// The main point is, let's imagine there is a node to remove.
// When we remove the node, since the node contains info about the next element, we would lose all information after that node.
// To not lose our info, we do this. The technical part is elaborated in the code below, but theoretically, it looks something like this.
// We have to somehow link the node before the node we want to delete, and the node after it.
// If there are nodes named x,y,z and we want to delete node y, we have to link x and z first before we can safely delete y.
// To do this, we need the information in node y to find the node that is next to y. (by doing y->next)
// We then make x->next point to y->next.(Essentially creating the bond between x and z.)
// Now we do this, we are clear to delete the node.
    node* ptr = head;
    if(ptr->next == NULL){
        delete ptr;
    }
    if(ptr == NULL){
        cout<<"Error: Empty linked list.";
    }
    for(int i = 1; i < index-1; i++){ // Linked list counting starts from 1.
        ptr = ptr->next;
}
// The ptr pointer is one position less than the node to be deleted.
node* del = ptr->next; // This is the node to be deleted.
node* next_to_del = del->next; // This is the node to be linked to the ptr pointer.
ptr->next = del->next;
delete del;
}
void updateNode(int key, int value){ // Straightforward
    node* ptr = head;
    if (ptr->key == key){
        ptr->data = value;
    }
    else{
        while(ptr!=NULL){
            ptr = ptr->next;
            if (ptr->key == key){
                ptr->data = value;
                break;
        }
    }
    if (ptr == NULL){
        cout << "No element found with key "<< key << endl;
    }
    }
}
void printList(){
    node* ptr = head;
    while (ptr != NULL){
        cout << "(" << ptr->key << "," << ptr->data <<") --> ";
        ptr = ptr->next;
    }
}
};
int main(){
    singlyLinkedList s;
    int option,index,key,data1;
    do{
        cout<<endl;
        cout << "1. Append Node"<<endl;
        cout << "2. Prepend Node"<<endl;
        cout << "3. Insert Node at a position."<<endl;
        cout << "4. Delete Node"<<endl;
        cout << "5. Update Node"<<endl;
        cout << "6. Display Linked List"<<endl;
        cout << "7. Delete Head Node"<<endl;
        cout << "8. Delete Node at End "<<endl;
        cout << "0. Exit"<<endl;
        cin >> option;
        node* n1 = new node();
        switch(option){
            case 1: 
            cout << "Enter the key and the data to append, respectively"<<endl;
            cin >> n1->key >> n1->data;
            s.appendNode(n1);
            break;
            case 2: 
            cout << "Enter the key and the data to prepend, respectively"<<endl;
            cin >> n1->key >> n1->data;
            s.prependNode(n1);
            break;
            case 3:
            cout << "Enter the key and the data respectively"<<endl;
            cin >> n1->key >> n1->data;
            cout << "Enter the index u want to insert the node at: " <<endl;
            cin >> index;
            s.insertNodeAtPosition(index, n1);
            break;
            case 4:
            cout << "Enter the position of the node to delete."<<endl;
            cin >> key;
            s.deleteNodeAtPosition(key);
            break;
            case 5:
            cout << "Enter the key of the node, and the value to update inside that node. "<<endl;
            cin >> key >> data1;
            s.updateNode(key, data1);
            break;
            case 6:
            s.printList();
            break;
            case 7:
            s.deleteFirstNode();
            break;
            case 8:
            s.DeleteNodeAtEnd();
            break;
            default:
            cout << "Error, enter a valid input. ";
        }
    }while(option != 0);


}