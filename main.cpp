#include <iostream>
#include "DoublyLinkedList.hpp"

using namespace std;

/*
 * A C++ program that solves the Erathosthenes problem.
 * - Jun Yeop Na (2016-11-14)
 *
 * We use a doubly linked list to make a Erathosthenes table;
 * We make a doubly linked list containing values 1(start) - N(end)
 * Then we simulate the Erathosthenes method by deleting the node
 * containing the erased value from the chain of doubly linked nodes
 * we keep count of the number of composite numbers erased in a variable
 * and when the counting number equals the given k, we print out the value
 * that was most recently erased.
 */


int main()
{
    int N, k;
    
    /*
     * Receive the inputs.
     */
     
    cin >> N;
    cin >> k;
    
    
    /*
     * Define a table of numbers including values 2 ~ N using
     * N - 1 doubly linked lists.
     * the nodes are connected by increasing order of the value that they contain.
     */
     
    DoublyLinkedList *start = new DoublyLinkedList(2);
    DoublyLinkedList *end = start;
    DoublyLinkedList *temp;
    
    for(int i = 2; i <= N; i++)
    {
        /*
         * make nodes containing value i(2 <= i <= n),
         * store it to the temp node, and then connect the temp node
         * to the tail of the linked lists, since it contains the
         * largest value in the current iteration.
         */
         
         temp = new DoublyLinkedList(i);
         
         temp->set_prev(end);
         end->set_next(temp);
         
         /*
          * temp is now the new tail, so 
          * update end
          */
         
         end = temp;
    }
    
    cout<< end->get_value() << endl;
    
    return 0;
}

