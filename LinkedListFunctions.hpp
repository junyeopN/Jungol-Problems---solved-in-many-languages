#ifndef LINKEDLISTFUNCTIONS_H
#define LINKEDLISTFUNCTIONS_H

#define "DoublyLinkedList.hpp"
/*
 * a header file that defines some simple linked list functions
 * that are needed for the program, such as connecting and disconnecting nodes.
 */


/*
 * A function that connects a new node into the tail of an already existing
 * linked set of nodes.
 */
void connect(DoublyLinkedList *table, DoublyLinkedList *node);


/*
 * A function that disconnects a given node inside a linked set of nodes.
 */
void disconnect(DoublyLinkedList *node);
