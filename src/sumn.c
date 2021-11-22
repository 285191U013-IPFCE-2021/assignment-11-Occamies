#include "sumn.h"

#include<stdio.h>

#include<assert.h>

int sumn (int n)
{
    //pre-condition
    assert(n>=1);

    //post-conditions
    if (n==1)
        return 1;
    else
        return (2*n-1)+sumn(n-1);
}