#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	double ans=m/(n*1.0);
	ans*=100.0;
	cout<<fixed<<setprecision(3)<<ans<<"%"; 
}
