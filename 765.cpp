#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,m=0;
	cin>>n;
	while(n!=0){
		m=m+n%10;
		 n=n/10;
	}
	cout<<m<<endl;
	return 0;
}
