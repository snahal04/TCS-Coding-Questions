/*
Given an integer A. Find the product of all of it's digits.

Problem Constraints
0 <= A <= 109

Input Format
Given an integer.

Output Format
Return an integer.

Example Input
Input 1:
A = 111
Input 2:
A = 123

Example Output
Output 1:
1
Output 2:
6
*/

// Solution in cpp;

int Solution::solve(int A) {
    int p = 1;
    int r=0;
    if(A==0)return 0;
    while(A>=1){
        r = A%10;
        A = A/10;
        p = p*r;
    }
    return p;
}
