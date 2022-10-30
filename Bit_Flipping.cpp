// Bit Flipping
/*
Given an integer A.
Write binary representation of the integer without leading zeros.Flip all bits then return the integer value of the binary number formed.
Flipping means 0 -> 1 and 1 -> 0.

Problem Constraints
1 <= A <= 109

Example Input
Input 1:
A = 7
Input 2:
A = 5

Example Output
Output 1:
0
Output 2:
2

Example Explanation
Explanation 1:
7 -> 111 -> 000 ->0
Explanation 2:
5 -> 101 -> 010 ->2
*/

//Solution in CPP
int Solution::solve(int A)
{
    int i = 0;
    while ((A >> i) > 0)
    {
        A = A ^ (1 << i);
        i++;
    }
    return A;
}


/*
    Bonous Tips
    Binary to Decimal
    string binaryNumber = "100101";
    int a = stoi(binaryNumber, 0, 2);
    
    Decimal To Binary
    string binary = bitset<8>(a).to_string();
*/
