DAY 3:arrays and operations ,UNSTOP BOOTCAMP 
QUESTION:
Problem Statement
Given an array of integers arr[] of size N, find the two smallest integers in the array and form the largest possible number using them. Output this largest number

Input Format
The first line contains an integer, where N denotes the number of elements in the array in the array.
The second line contains N space-separated integers.

Output Format
Print the largest number that can be formed.

Constraints
1 ≤ N ≤ 10^2
0 ≤ arr[i] ≤9

Sample Testcase 0
Testcase Input
7
1 2 3 4 5 6 7
Testcase Output
21

CODE:
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// Placeholder function for user logic
int findLargestNumber(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    int min1=arr[0];
    int min2=arr[1];
    int result=max(min1*10+min2,min2*10+min1);
    return result; // Placeholder return value
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    // Call user logic function and print the output
    int result = findLargestNumber(arr);
    cout << result << endl;
    return 0;
}
