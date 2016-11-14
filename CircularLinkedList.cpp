#include "CircularLinkedList.hpp"
#include <iostream>

/*
 * Code defining the methods of the class CircularLinkedList.
 */

CircularLInkedList::CircularLinkedList(int input)
{
    /*
     * A constructor for initializing a node
     */
    
    this.value = input;
    this.next = NULL;
    this.prev = NULL;
}

int CircularLinkedList::get_value()
{
    return value;
}

void CircularLinkedList::set_value(int input)
{
    this.value = input;
}

CircularLinkedList* CircularLinkedList::get_prev()
{
    return this.prev;
}

void CircularLinkedList::set_prev(CircularLinkedList input)
{
    prev = &input;
}

CircularLinkedList* CircularLinkedList::get_next()
{
    return this.next;
}

void CircularLinkedList::set_next(CircularLinkedList input)
{
    next = &input;
}
