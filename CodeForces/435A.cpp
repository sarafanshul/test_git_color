#include <bits/stdc++.h>
 
using namespace std;
 
int co[105];
 
int main(){
    int n,x;
    cin >> n >> x;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        co[a]++;
    }
    int ans=0;
    for(int i=0;i<x;i++)
        ans+=(co[i]==0);
    ans+=(co[x]!=0);
    cout << ans << "\n";
}
