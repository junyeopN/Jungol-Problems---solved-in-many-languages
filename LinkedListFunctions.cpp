#include <iostream>
#include "LinkedListFunctions.hpp"

/*
 * The implementations of the functions that are defined
 * in LinkedListFunctions.hpp.
 * Explanation of the functions are in LinkedListFunctions.hpp
 */

void connect(DoublyLinkedList *tail, DoublyLinkedList *node)
{
    tail.next = node;
    node.prev = tail;
    return;
}

void disconnect(DoublyLinkedList *node)
{
    node.prev.next = node.next;
    node.next.prev = node.prev;
    
    node.next = NULL;
    node.prev = NULL;
    
    /*
     * Now all the connections the node had
     * is disconnected. We now have to delete the node.
     */
     
    free(node);
    return;
}
