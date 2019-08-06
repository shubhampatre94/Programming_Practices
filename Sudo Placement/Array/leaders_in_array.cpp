#include<iostream>
using namespace std;

void leaders(int a[], int n) {
        int right_max = a[n-1];
        int b[n];
        //printf("%d ",right_max);
        int count = 0;
        b[count++] = right_max;
        for(int i = n-2; i >= 0; --i) {
                if(a[i] >= right_max){
                        right_max = a[i];
                //printf("%d ",right_max);
                b[count++] = right_max;
                }
        }
        
        for(int j = count-1; j >= 0 ; j--)
            printf("%d ",b[j]);
}

int main() {
        int t;

        scanf("%d",&t);

        while(t--) {
                int n;
                scanf("%d",&n);
                int a[n];

                for(int i = 0; i < n; i++)
                        scanf("%d",&a[i]);

                leaders(a, n);
                cout<<endl;
        }

        return 0;
}

