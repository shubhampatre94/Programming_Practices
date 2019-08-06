#include<bits/stdc++.h>
using namespace std;

/*Given an integer, check whether it is Bleak or not.

A number ‘n’ is called Bleak if it cannot be represented as sum of a positive number x and set bit count in x, i.e., x + countSetBits(x) is not equal to n for any non-negative number x.
 * */
#include<bits/stdc++.h>
using namespace std;

int isBleak(int n){
     int i, flag = 1;
    for( i = 1; i < n; i++) {
       int  count = 0;
  int k = i;
        while (k) 
{ 
    count += k & 1; 
    k >>= 1; 
} 
        if(i + count == n) {
        //cout<<count<<" ";
            flag = 0;
            return 0;
        }
    }
    
    if(flag = 1)
        return 1;
}
int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i;
                scanf("%d", &n);
                cout<<isBleak(n)<<endl;
        }
        return 0;
}
