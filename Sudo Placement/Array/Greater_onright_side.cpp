
/**
* to find all the marks that are not smaller than those on its right side in the array.

Input Format
The first line of input will contain a single integer n denoting the number of students.
The next line will contain n space separated integers representing the marks of students.

Output Format
Output all the integers separated in the array from left to right that are not smaller than those on its right side.

Constraints
1 <= n <= 1000000
0 <= arr[i] <= 10000

Input:- 
6
16 17 4 3 5 2
output:- 17 5 2
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int num;
	cin >> num;										// Reading input from STDIN

    long long int a[num];
    long long int i;
    for(i = 0; i < num; i++)
        cin>>a[i];
    stack<int> s;
    
    long long int  small = a[num-1];
    s.push(small);
    
    for(i = num-2; i >= 0; i--){
        if(a[i] >= small){
            s.push(a[i]);
            small = a[i];
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

