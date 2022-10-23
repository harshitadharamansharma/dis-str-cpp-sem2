#include<iostream>
using namespace std;
int main()
{
	int n,r1,r2,r3,r,s;
	int fact(int);
	cout<<"Enter Value of n : ";cin>>n;
	r1=fact(n);
	cout<<"Enter Value of r : ";cin>>r;
	s=n-r;
	r2=fact(s);
	r3=fact(r);
	cout<<endl;
	cout<<"The Combination of r1 & r2 : "<<r1/(r2*r3);
}
int fact(int m)
 {
int result;
if(m==0) return 1;
result = fact(m-1) * m;
return result;
}
