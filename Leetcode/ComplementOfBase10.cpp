/*

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
Example 2:

Input: n = 7
Output: 0
Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
Example 3:

Input: n = 10
Output: 5
Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
 

*/

#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){

    int n;
    cin >> n;
    int m = n;
        int mask = 0;

        if(n == 0)
            return 1;

        while(m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        int ans = (~n) & mask;

        cout<< ans;
}