#include<bits/stdc++.h>
using namespace std;
void relative_sorting(vector<int> a, vector<int> b){
    int max = *max_element(a.begin(), a.end());
    max = (a.size() > max ? a.size() : max);
    //cout<<max<<endl;
    
    int arr[max+1];
    memset(arr, 0, sizeof(arr));
    for(int i =0; i < a.size(); i++) {
        arr[a[i]]++;
    }
    for(int i = 0; i < max+1; i++) {
        
        if(i < b.size() && arr[b[i]] != 0) {
            while(arr[b[i]]){
                cout<<b[i]<<" ";
                arr[b[i]]--;
            }
    //        arr[b[i]] = 0;
        }
        if(i == b.size())
            break;
    }
    
    for(int i = 0; i < max+1; i++) {
        if(arr[i] != 0) {
            while(arr[i]){
                cout<<i<<" ";
                arr[i]--;
            }
        }
        
    }
    //cout<<endl;
    //for(int i =0; i < max+1; i++) {
    //cout<<arr[i]<<" ";
        
    //}
    
}
int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, m, i, x;
                scanf("%d%d", &n, &m);
                vector<int> a, b;
                
                for(i = 0; i < n; i++){
                    scanf("%d",&x);
                    a.push_back(x);
                }
                for(i = 0; i < m; i++){
                    scanf("%d",&x);
                    b.push_back(x);
                }
            relative_sorting(a, b);
            cout<<endl;
        }
        return 0;
}
