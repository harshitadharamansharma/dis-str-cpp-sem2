/*program to find the total number of leaves*/

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int n,m,i;
	int l;
    char ch='y';

    while(true){
        if(ch=='Y'||ch=='y'){
	cout<<"enter the total internal vertices of tree:"<<endl;
	cout<<"Internal vertices = ";
	cin>>i;

	cout<<"\nenter the value of m-ary tree:"<<endl;
	cout<<"m-ary of tree is: ";
	cin>>m;

	cout<<"\ntotal number of vertices in the tree :"<<endl;
	n=(m*i)+1;
	cout<<"total verties are:"<<n<<endl<<endl;

	cout<<"number of leaf nodes of tree :"<<endl;
	l=n-i;
	cout<<l<<endl;
        }
    else
        exit(0);
    cout<<"enter 'y' or 'n' for further processes:"<<endl;
    cin>>ch;
    }
	return 0;
}
