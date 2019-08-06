#include <bits/stdc++.h>
using namespace std;
void max_difference(int arr[], int n){
    int max_diff = arr[1] - arr[0]; 
       
     int min_element = arr[0]; 
     for(int i = 1; i < n; i++) 
     {      
       if (arr[i] - min_element > max_diff)                              
       max_diff = arr[i] - min_element; 
         
       if (arr[i] < min_element) 
       min_element = arr[i];                      
     } 
    printf("%d\n",max_diff);
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

                max_difference(a, n);
                //cout<<endl;
        }
return 0;
}
