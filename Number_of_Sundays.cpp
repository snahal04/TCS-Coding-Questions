// Number of Sundays

/*
Given the start day of the month A and number of days in the month B, find number of sundays in the month.

Problem Constraints
A = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}
1 <= B <= 109

Input Format
First argument is an string A.
Second argument is an integer B.

Output Format
Return an integer.

Example Input
Input 1:
A = "Sunday"
B = 1
Input 2:
A = "Monday"
B = 14

Example Output
Output 1:
1
Output 2:
2

Example Explanation
Explanation 1:
The only day in the month is sunday.
Explanation 2:

The 7th and 14th day of the month will be sunday
*/


//Solution in CPP

int Solution::solve(string A, int B) {
    int j =0;
    vector<string> v =  {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    for(int i=0;i<v.size();i++){
        if(A==v[i]){
            j = i;
        }
    }
    int D = B+j;
    int days = D/7;
    return days;
}
