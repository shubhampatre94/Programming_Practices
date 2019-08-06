#include<bits/stdc++.h>
using namespace std;
unsigned int swap_bits(unsigned int n){
    vector<int> v;
    while(n != 0) {
        v.push_back(n%2);
        n = n/2;
    }
    
    
    for(int i = v.size(); i < 8; i++) {
        v.push_back(0);    
        
    }
    
    //cout<<endl;
    reverse(v.begin(), v.end());
    for(int i = 0; i+1 <= v.size(); i = i+2) {
        int t = v[i];
        v[i] = v[i+1];
        v[i+1] = t;
    }
    //for(int i = 0; i < v.size(); i++) {
      //  cout<<v[i];    
        
//    }
  //  cout<<endl;
    int dec = 0;
    int base = 1;
    for(int i = v.size()-1 ; i >= 0; i--) {
        if(v[i] == 1)
        dec += base;
        base = base*2;
        
    }
    
        return dec;
}
int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                unsigned int n, i;
                scanf("%u", &n);
        
            cout<<swap_bits(n)<<endl;
        }
        return 0;
}
