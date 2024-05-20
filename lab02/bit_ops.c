#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    x = x << (31 - n);
    x = x >> 31;
    return x;
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns 
    // 0 or 1)
    return -1;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    // YOUR CODE HERE
    unsigned temp = *x;
    if(v == 1) {
      unsigned u = (1 << n);
      temp = temp | u;
      *x = temp;
    }
    else if(v == 0){
	temp = ~temp;    
	unsigned k = (1 << n);
	temp = temp | k;
	temp = ~temp;
	*x = temp;
    }
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    // YOUR CODE HERE
    unsigned temp = *x;
    unsigned a = get_bit(temp, n);
    if(a == 1){
      set_bit(x, n, 0);
    }
    else{
      set_bit(x, n, 1);
    }
}

