#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k,ans=0;
    cin>>n>>k;
    int* arr = new int(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]>=arr[k-1]) ans++;
    }
    cout<<ans<<endl;
    return 0;
}