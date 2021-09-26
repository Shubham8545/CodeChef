#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b, c;
	    int s1,s2,s3;
	    cin>>a>>b>>c;
	    s1=a+b;
	    s2=b+c;
	    s3=c+a;
	    if(s1>s2){
	        if(s1>s3){
	            cout<<s1<<endl;
	        }
	        else{
	            cout<<s3<<endl;
	        }
	    }
	    else{
	        if(s2>s3){
	            cout<<s2<<endl;
	        }
	        else{
	            cout<<s3<<endl;
	        }
	    }
	}
	return 0;
}
