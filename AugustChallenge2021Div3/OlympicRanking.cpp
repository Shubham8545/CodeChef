#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        int medals[6];
        for(int i=0;i<6;i++)
            cin>>medals[i];
        
        int c1Tot=0, c2Tot=0;
        for(int i=0;i<3;i++)
            c1Tot+=medals[i];

        for(int i=3;i<6;i++)
            c2Tot+=medals[i];  

        if(c1Tot>c2Tot)
            cout<<"1"<<"\n";
        else
            cout<<"2"<<"\n";
    }
    
    return 0;
}