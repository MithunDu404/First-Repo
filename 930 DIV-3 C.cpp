#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string solve(){
    int n;cin>>n;
    vector<int> a(n);for(int i=0;i<n;i++) cin>>a[i];
      
    vector<int> b(n);unordered_map<int,int> mb;
    for(int i=0;i<n;i++){
        cin>>b[i];
        mb[b[i]]++;
    }
    
    int m;cin>>m;
    vector<int> d(m);for(int i=0;i<m;i++)cin>>d[i];
    
    int ok = -1;
    for(int i=0;i<m;i++){
        if(mb.find(d[i]) == mb.end()) continue;
        
        if(mb[d[i]] != 0) mb[d[i]]--;
        ok = i; 
    }
    
    for(int i=ok+1;i<m;i++){
        if(mb.find(d[i]) == mb.end()) return "NO";
    }
    
    for(int i=0;i<n;i++){
        if(a[i] != b[i]){
            if(mb[b[i]] != 0) return "NO";
        }
    }
    
    return "YES";
}

int main(){
    int T;cin>>T;
    while(T--){
        cout<<solve()<<'\n';
    }
    return 0;
}