/*Given an array A of size N. Print all the numbers less than K in the array. The numbers should be such that the difference between every adjacent digit should be 1.

Note: Print '-1' if no number if valid.*/


#include<bits/stdc++.h>
using namespace std;
void absolute_diff(int a[], int n, int k, int *flag) {
    int i, j;
    
    int count = 0;
    for(i = 0; i < n; i++) {
        if(a[i] < k && a[i] > 9) {
                j = a[i];
                vector<int> v;
                
            while(j != 0) {
                v.push_back(j%10);
                j = j/10;
            }
            count = 0;
            for(int l = 0; l < v.size(); l++){
                if(l == v.size()-1) {
                 
                if((v[l] == v[l-1]+1) || (v[l]+1 == v[l-1])) 
                    //cout<<v[l];
                    count++;
                }else
                    if((v[l] == v[l+1]+1) || (v[l+1] == v[l]+1))
                        count++;
                    //cout<<v[l];
            }
            //cout<<" ";
            
            if(count == v.size()) {
                cout<<a[i]<<" ";
            
                *flag = 1;
            }
        }
    }
    
    
}
int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, k, flag = 0;
                scanf("%d%d", &n, &k);
                int a[n];

                for(i = 0; i < n; i++)
                        scanf("%d", &a[i]);
                absolute_diff(a, n, k, &flag);
                if(flag == 0) cout<<"-1";
                cout<<endl;
        }
        return 0;
}
