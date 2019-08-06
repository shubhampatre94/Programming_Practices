#include <bits/stdc++.h>
using namespace std;
void smallest_and_second_smallest(int a[], int n){
    int i;
    sort(a, a+n);
    int min = INT_MAX, c = 0;
    //if(n < 2)
     //   cout<<"-1";
    
    //if((a[0] == a[1]) && n == 2)
      //  cout<<"-1";
        
    for(i =0; i+1 < n; i++) {
        if(a[i] < min && a[i+1] > a[i]){
            cout<<a[i]<<" "<<a[i+1];
            c++;
            break;
        }
    } 
    
    if(c == 0)
        cout<<"-1";
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

                smallest_and_second_smallest(a, n);
                cout<<endl;
        }

       
}
