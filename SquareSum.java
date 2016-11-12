/*
 * Program to solve minimum square sum problem in JAVA
 * Jun Yeop Na (2016.11.12)
 *
 * We use dynamic programming, using the equation
 * p(n) = min_{1<=i<=n}(p(i) + p(n - i)) to solve
 * the minimum square sum problem.
 */


public class SquareSum
{
    /*
     * We make a table to use for dynamic programming. 
     */ 
    static int table[]; 
    
    
    /*
     * We define a function that first looks up the table
     * to see whether the minimum square sum for the given input
     * integer is already solved.
     * if it is, we just use the value given in the table.
     * if it is not, we use the recursive function 
     * to find the value. Then we record it to the table
     * before returning the value.
     */
    int minimumSquareSum(int n)
    {
        if(table[n] != 0)
        {
            /*
             * This is the case where the problem for the given
             * input integer is already solved.
             * Since the table values will be initialized to 0,
             * and no number can be expressed as sums of 0 square values,
             * if the table has non-zero values, we know that the
             * value has already been calculated.
             */
             
             /*
              * So we just return the value in the table.
              */
             
             return table[n];
        }
        
    }
}
