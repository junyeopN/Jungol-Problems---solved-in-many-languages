#include "DoublyLinkedList.hpp"
#include <iostream>

/*
 * Code defining the methods of the class CircularLinkedList.
 */

DoublyLinkedList::DoublyLinkedList(int input)
{
    /*
     * A constructor for initializing a node
     */
    
    this->value = input;
    this->next = NULL;
    this->prev = NULL;
}

int DoublyLinkedList::get_value()
{
    return value;
}

void DoublyLinkedList::set_value(int input)
{
    this->value = input;
}

DoublyLinkedList* DoublyLinkedList::get_prev()
{
    return this->prev;
}

void DoublyLinkedList::set_prev(DoublyLinkedList input)
{
    prev = &input;
}

DoublyLinkedList* DoublyLinkedList::get_next()
{
    return this->next;
}

void DoublyLinkedList::set_next(DoublyLinkedList input)
{
    next = &input;
}
