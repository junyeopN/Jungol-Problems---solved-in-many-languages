/*
 * Program to solve minimum square sum problem in JAVA
 * Jun Yeop Na (2016.11.12)
 *
 * We use dynamic programming, using the equation
 * p(n) = min_{1<=i<=n}(p(i) + p(n - i)) to solve
 * the minimum square sum problem.
 *
 * Version 2: We make a bottom-up approach dynamic
 * programming solution to this problem.
 * This bottom-up version helps us see clearly the time-complexity
 * of this dynamic programming solution, which is the complexity of
 * running the two nested for loops in line 50-87.
 * the complexity is sum{i=1 to n} i = O(n^2).
 */

import java.util.Scanner;

public class SquareSumBottomUp
{
    public static void main(String args[])
    {
        Scanner s = new Scanner(System.in);
        int input;
        
        input = s.nextInt();
        
        /*
         * First we define a table to use for dynamic programming.
         * We give the table n + 1 entries,
         * because we need to use entries upto table[n].
         */
         
        int[] table = new int[input + 1];
        
        
        /*
         * We initialize the table by making
         * all the square number's entries' value 1
         */
         
        for(int i = 1; i*i <= input; i++)
        {
            table[i*i] = 1;
        }
        
        
        int min;
        
        
        for(int i = 1; i <= input; i++)
        {
            /*
             * We use the bottom-up solution
             * to the problem in this for loop
             */
             
             /*
              * We first initialize min to the biggest possible
              * value, so that it can be updated by any possible
              * square sum of the number.
              * i is the maximum value for p(i), since the max number of
              * square sums a number can be represented by is by the sum
              * of 1's as many as the value of the number itself.
              */
             if(table[i] != 1)
             {
                 /*
                  * if i is not a square number
                  */
                 min = i;
    
                 for(int j = 1; j < i; j++)
                 {
                     /*
                      * we determine the value of table[i]
                      * inside this for loop.
                      */
                    if((table[j] + table[i - j]) < min)
                    {
                        min = table[j] + table[i - j];
                    }
                 }
                 
                 /*
                  * After the second for loop ends, the number of
                  * minimum square sum for p(i) will be stored in
                  * min. So we store this value to table[i].
                  */
                 
                 table[i] = min;
            
             }
        }
        
        System.out.println(table[input]);
    }
}
