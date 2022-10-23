

/*program to print and adjacenct mautrix to represent the complete graph*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the number of vertices of graph:"<<endl;
	cout<<"vertices= ";
	cin>>n;

	int array[n][n];
	int flag=1;

	cout<<"enter the number of edges associated with vertices:"<<endl;

char ch;
int h;
int d=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<(i+1)<<" and "<<(j+1)<< " are adjacent ?  (y/n)"<<endl;
			cin>>ch;

			if(ch=='Y'||ch=='y')
			{   cout<<"enter the number of edges between the vertices:"<<endl;
				cin>>h;
				array[i][j]=h;
			}
			else array[i][j]=0;
		}
	}

	cout<<"adjacency matrix:"<<endl;
	for(int i=0;i<n;i++)
	{d=1;
		for(int j=0;j<n;j++)
		{
			cout<<array[i][j]<<"\t";
			if(i!=j)
			{d*=array[i][j];}
		}
		if(d==0)
			flag=0;
		cout<<endl;
	}

	if(flag==1)
	{
		cout<<"it is complete graph:"<<endl;
	}
	else cout<<"it is not complete graph:"<<endl;
}
