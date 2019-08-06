/*Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
*/

#include<bits/stdc++.h>
using namespace std;

int majority(int a[], int n) {
        int count = 0 ,i ,j;

        
        int *t = std::max_element(a, a+n);
        int b[*t+1] = {0};
        //cout<<*t;
                for(i = 0; i < n; i++){
                        b[a[i]]++;
                }

        for(i =  0; i <= *t ; i++) {
                if(b[i] > ceil(n/2))
                        return i;
                      //printf("%d ",b[i]);
        }

        return -1;
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

                printf("%d\n",majority(a, n));
        }

        return 0;
}

