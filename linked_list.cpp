#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;


class  Node
{
public:
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
     }
    
};


class LinkedList
{
public:

    Node *head;
    LinkedList(){
        head = NULL;
    }


    void append(int data){

        Node *new_node = new Node(data);
        new_node->next = NULL;

        if(head == NULL){
            head = new_node;
        }
        else
        {
            Node *last_node = head;

            while (last_node->next)
            { 
                last_node = last_node->next;  
            }

            last_node->next = new_node;
            
        }
        
        
    }

    bool search(int data){

        Node *current_node = head;

        while (current_node != NULL)
        {
            if(current_node->data == data){
                return true;
            }
            current_node = current_node->next;
        }

        return false;
    }

    void printList(){
        Node *current_node = head;

        while (current_node)
        {
            cout<<current_node->data<<" ";
            current_node = current_node->next;
        }
        
    }


   

};

