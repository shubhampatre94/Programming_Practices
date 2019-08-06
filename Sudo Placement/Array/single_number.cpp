#include<bits/stdc++.h>
using namespace std;


int getOddOccurrence(int ar[], int ar_size) 
{ 
    int res = 0;  
    for (int i = 0; i < ar_size; i++)      
        res = res ^ ar[i]; 
      
    return res; 
} 


int main() {
        int t;
        scanf("%d",&t);

        while(t--) {
            int n;
            scanf("%d",&n);
            int a[n];

            for(int i = 0; i < n ; i++)
            scanf("%d",&a[i]);

            printf("%d\n",getOddOccurrence(a, n));

        }

        return 0;
}

