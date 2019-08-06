//Given an integer array A of N elements. You need to find the sum of two elements such that sum is closest to zero.



#include <bits/stdc++.h>
using namespace std;
int sum_closest_to_zero(int a[], int n){
    int i, sum = 0, min = INT_MAX;
    int l = 0, r = n-1;
    int min_l = l, min_r = n-1;
    sort(a, a+n);
    while(l < r) 
  { 
    sum = a[l] + a[r]; 
  
    if(abs(sum) < abs(min)) 
    { 
      min = sum; 
      min_l = l; 
      min_r = r; 
    } 
    if(sum < 0) 
      l++; 
    else
      r--; 
  } 
    
    return a[min_l]+ a[min_r];
}
int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i;
                scanf("%d", &n);
                int a[n];

                for(i = 0; i < n; i++)
                        scanf("%d", &a[i]);

                printf("%d\n",sum_closest_to_zero(a, n));
        }

       
}
