#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        unordered_map<int,int> mp;
        int a[4];
        for(int i=0;i<4;i++) {
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<int> res;
        for(auto x:mp) {
            res.push_back(x.second);
        }
        sort(res.begin(), res.end(), greater<>());

        if(res[0]>3)
            cout<<"0"<<"\n";
        else if(res[0]>2)
            cout<<"1"<<"\n";
        else
            cout<<"2"<<"\n";
    }
    return 0;
}