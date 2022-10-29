/*
Given a number N, verify if N is prime or not.
Return 1 if N is prime, else return 0.

Example :
Input : 7
Output : True
*/

//Solution in cpp
int Solution::isPrime(int A) {
    if(A==0||A==1){
        return 0;
    }
    for(int i=2;i<A/2;i++){
        if(A%i==0){
            return 0;
        }
    }
    return 1;
}
