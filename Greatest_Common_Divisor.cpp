//Greatest Common Divisor

/*
Given 2 non negative integers m and n, find gcd(m, n)
GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both m and n fit in a 32 bit signed integer.

Example
m : 6
n : 9

GCD(m, n) : 3 
NOTE : DO NOT USE LIBRARY FUNCTIONS
*/

//Solution in CPP

int Solution::gcd(int A, int B) {
    if(A==0||B==0) return max(A,B);
    while(A!=B){
      //We start subtracting smaller number from the greater number and once when both 
      //number becomes equal will be the _gcd(A,B)
        if( A>B) A=A-B; 
        else B=B-A;
    }
    return A;
}
