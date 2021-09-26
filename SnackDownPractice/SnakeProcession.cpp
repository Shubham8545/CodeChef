#include<bits/stdc++.h>
using namespace std;

int main() {
    int R;
    cin>>R;
    while(R--) {
        int L, count=0;
        cin>>L;
        char str[L];
        for(int i=0;i<L;i++)
            cin>>str[i];
        
        char temp;
        if(str[0]=='H' || str[0]=='.') {
            for(int i=0;i<L;i++) {
                if(str[i]=='H' && temp!='H') {
                    temp='H';
                    count++;
                }
                else if(str[i]=='T' && temp=='H') {
                    count++;
                    temp='T';
                }
                else if(str[i]=='.')
                    count++;
            }
        }
        if(count==L && temp!='H')
            cout<<"Valid"<<endl;
        else
            cout<<"Invalid"<<endl;
    }
    return 0;
}