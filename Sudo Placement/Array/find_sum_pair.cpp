//find if sum == a[i] + a[j]
#include<bits/stdc++.h>
using namespace std;

int find_pair(int a[], int n, int sum) {
    int i;
   
       sort(a, a+n);
    
    int l = 0, r = n-1;

        while(l < r) {
            if(a[l]+a[r] == sum) 
                return 1;
            else if(a[l]+a[r] < sum)
                l++;
            else 
                r--;
        }
        
        return 0;
    
}
int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, sum;
                scanf("%d%d", &n, &sum);
                int a[n];

                for(i = 0; i < n; i++)
                        scanf("%d", &a[i]);
                        
                if(find_pair(a, n, sum))
                    printf("Yes\n");
                else 
                    printf("No\n");
        }
        return 0;
}
