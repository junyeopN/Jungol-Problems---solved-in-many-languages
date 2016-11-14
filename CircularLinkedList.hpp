/*
 * A header file that defines a circular linked list
 * that will be used in our solution for the Erathosthenes problem.
 * A circular linked list is a node with a value and two pointers,
 * which are the node that follows this node and the node that
 * comes before this node. This makes it more easy to erase nodes
 * from a list, since we simply need to connect the previous node (which is 
 * easier to find than a singly linked list, since we have to go all the way
 * back to the start to find the previous node)
 * and the next node together, then free the erased node's space.
 */


#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

class CircularLinkedList
{

    public:
    
        int get_value();
    
        void set_value(int input);

        CircularLinkedList get_prev();
        
        void set_prev(CircularLinkedList input);
        
        CircularLinkedList get_next();
        
        void set_next(CircularLinkedList input);
        
        
    private:
        int value;
        CircularLinkedList *prev;
        CircularLinkedList *next;
}
#endif
