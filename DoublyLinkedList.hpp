/*
 * A header file that defines a circular linked list
 * that will be used in our solution for the Erathosthenes problem.
 * A doubly linked list is a node with a value and two pointers,
 * which are the node that follows this node and the node that
 * comes before this node. This makes it more easy to erase nodes
 * from a list, since we simply need to connect the previous node (which is 
 * easier to find than a singly linked list, since we have to go all the way
 * back to the start to find the previous node)
 * and the next node together, then free the erased node's space.
 */


#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

class DoublyLinkedList
{

    public:
        DoublyLinkedList(int input);
    
        int get_value();
    
        void set_value(int input);

        DoublyLinkedList* get_prev();
        
        void set_prev(DoublyLinkedList *input);
        
        DoublyLinkedList* get_next();
        
        void set_next(DoublyLinkedList *input);
        
        
    private:
        int value;
        DoublyLinkedList *prev;
        DoublyLinkedList *next;
};
#endif
