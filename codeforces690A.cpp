#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t,n,i,j,arr[10000],brr[10000],k,d;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        
        k=n-1;
        long long int l=0;
        for(j=0;l<=k;j++){
            if(j%2==0){
                brr[j]=arr[l];
                l++;
            }
            else if(j%2==1){
                brr[j]=arr[k];
                k--;
            }
        }
        for(d=0;d<n;d++){
            cout<<brr[d]<<" ";
        }
        cout<<endl;
    }
}
