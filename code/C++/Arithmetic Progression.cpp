#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
sort(a,a+n);
if(n==1){
	cout<<-1;
	return 0;
}
int d;
if(n==2){
	d=a[1]-a[0];
	if(d==0){
		cout<<1<<"\n"<<a[0];
		return 0;
	}
	if((a[0]+a[1])%2==0){
		cout<<3<<"\n";
		cout<<a[0]-d<<" "<<(a[0]+a[1])/2<<" "<<a[1]+d;
		
	}
	else{
		cout<<2<<"\n";
		cout<<a[0]-d<<" "<<a[1]+d;
	}
	return 0;
}
int d1=a[1]-a[0],d2=a[2]-a[1];
if(abs(d1)<abs(d2)){
	d=d1;
}
else{
	d=d2;
}
int i,x=a[0];
vector<int> v;
for(i=0;i<n;i++){
	if(a[i]!=x){
		if(a[i]==x+d&&v.size()==0){
			v.push_back(x);
			x+=d;
		}
		else{
			break;
		}
	}
	x+=d;
}
if(i<n){
	cout<<0;
	return 0;
}
if(d==0){
	cout<<1<<"\n"<<a[0];
	return 0;
}
if(v.size()!=0){
	cout<<1<<"\n";
	cout<<v[0];
}
else{
	cout<<2<<"\n";
	cout<<a[0]-d<<" "<<a[n-1]+d;
}



return 0;
}

