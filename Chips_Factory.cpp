// Chips Factory

/*
A chips factory is packing chips in packets. The packets of chips are represented as an array A.
Find the packet of chips which are empty (Ai = 0) and move them to the end of the array. Return the resultant array.

Problem Constraints
1 <= |A| <= 105
0 <= Ai <= 109

Input Format
Given an integer array A.

Output Format
Return an integer array.

Example Input
Input 1:
A = [0, 1, 2, 3]
Input 2:
A = [1, 0, 0, 0]

Example Output
Output 1:
[1, 2, 3, 0]
Output 2:
[1, 0, 0, 0]

*/
//Solution in CPP

vector<int> Solution::solve(vector<int> &A) {
    vector<int> v;
    for(auto &i:A){
        if(i!=0){
            v.push_back(i);
            // A.erase(i);
        }
    }
    for(auto &i:A){
        if(i==0)
        v.push_back(i);
    }
    return v;
}
