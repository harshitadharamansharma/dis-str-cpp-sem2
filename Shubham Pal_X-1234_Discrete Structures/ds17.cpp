/*program to find the in-degree and out-degree of directed and degree of undirected*/

#include<iostream>
#include<cstdlib>
using namespace std;

/////////////////////////////////////////////
int fun(int array[50][50],int n)
{char c;
int h;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{

			cout<<"\n"<<(i+1)<<" and "<<(j+1)<<" are adjacent ? (y/n)"<<endl;

			cin>>c;

			if(c=='y'|| c=='Y')
			{
				cout<<"enter the total number of adjacency of "<<i+1<<" with "<<j+1<<endl;
				cin>>h;
				array[i+1][j+1]=h;
			}
			else
				array[i+1][j+1]=0;
		}
	}

}
///////////////////////////////
int dir_graph()
{
	int n;
	cout<<"enter the total number of vertices of graph:" <<endl;
	cout<<"n= " ;
	cin>>n;

	int array[50][50];
	int indeg,outdeg,total;

	fun(array,n);

	cout<<"vertex"<<"\tin-degree"<<"\t out-degree"<<"\t total degree"<<endl;

	for(int i=0;i<n;i++)
	{indeg=outdeg=total=0;
		for(int j=0;j<n;j++)
		{
			if(array[i+1][j+1]!=0)
			{
				outdeg+=array[i+1][j+1];
			}

			if(array[j+1][i+1]!=0)
			{
				indeg+=array[j+1][i+1];
			}
		}
		total=indeg+outdeg;
		cout<<i<<"\t\t"<<indeg<<"\t\t"<<outdeg<<"\t\t"<<total<<endl;
	}

}

int undir_graph()
{
	int n;
	cout<<"enter the total number of vertices of graph:" <<endl;
	cout<<"n= " ;
	cin>>n;

	int array[50][50];
	fun(array,n);
	int deg;

	cout<<"vertex"<<"\t degree"<<endl;

	for(int i=0;i<n;i++)
	{deg=0;
		for(int j=0;j<n;j++)
		{
			if(array[i+1][j+1]!=0)
			{
				deg+=array[i+1][j+1];
			}
		}

		cout<<"\t"<<i<<"\t\t"<<deg<<endl;
	}

}

///////////////////////////////////////////
int main()
{	int p;

	while(true)
	{

	cout<<"enter the numebr to choice option:"<<endl;
	cout<<"1. Directed graph"<<endl;
	cout<<"2. Undireced graph"<<endl;
	cout<<"3. Exit"<<endl;

	cout<<"option choiced: ";
	cin>>p;
	switch(p)
	{
		case 1: {dir_graph();
				break;}
		case 2: {undir_graph();
				break;}

		case 3: {exit(0);}
	}
	}
}

