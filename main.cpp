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
    
    
    /*
     * Now the N - 1 nodes containing values
     * 2 ~ N are linked together in increasing order of their value.
     * We now simulate the Erathosthene's algorithm of finding
     * prime numbers to find out the kth deleted number.
     */
     
     int prime_number;
     int erase_cnt = 0;
     
     /*
      * We store the number that is becoming the axis of the deleting
      * process in prime_number.
      */
     
     DoublyLinkedList temp_head = head;
     

     

     

     
     
     while(temp != NULL)
     {
        prime_number = head.value;
        temp = head.next; 
        
       /*
        * We picked the head node as the first prime number,
        * so we need to remove the current head node
        * and make the next node the new head.
        */ 
         
        head = head.next;
        disconnect(temp_head);
         
        
        while(temp != NULL)
        {
            if(temp.value % prime_number == 0)
            {
                /*
                 * Numbers that are divisible by the current prime number.
                 * we erase this node from the table and then raise the value
                 * of erase_cnt by 1.
                 */
                 
                 disconnect(temp);
                 erase_cnt++;
            }
        }
        
        /*
         * The inner while loop ends when temp reaches the end of the
         * list. So if the inner while loop ends, it means we need to
         * find the next 
         */
         

         
     }
    
    return 0;
}

