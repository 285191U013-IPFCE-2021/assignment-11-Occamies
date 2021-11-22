/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    //precon
    assert (n>0);

    //post con
    if (n==0){
        return p;
    }    
    else if (n==1){
        return pp;
    }
    else{
        return fib((n-1), pp, p+pp);
    }
}
