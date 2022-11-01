/*
Given an integer array A. Find the count of elements whose value is greater than all of its previous elements.
Note: Since there are no elements before first element so it should be considered in our answer.

Problem Constraints
1 <= |A| <= 105
1 <= Ai <= 109

Input Format
Given an integer array A.

Output Format
Return an integer.

Example Input
Input 1:
A = [1, 2, 3, 4]
Input 2:
A = [1, 1, 2, 2]

Example Output
Output 1:
4
Output 2:
2
*/

// Solution in CPP

int Solution::solve(vector<int> &a) {
    int count = 1;
    int max = a[0];
    for(int i=1;i<a.size();i++){
        if(a[i]>max){
            max = a[i];
            count++;
        }
        else{
            continue;
        }
    }
    return count;
}
