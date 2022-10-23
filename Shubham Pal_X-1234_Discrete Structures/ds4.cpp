/*program to check whether it is equivalent or partial order relation */

#include<iostream>
using namespace std;

class Relation
{
	int n;
	char ch;
	int r=1,s=1,as=1,t1,t2,t3,t=1;
	int array[100][100];
public:
	Relation()
	{
		cout<<"enter the number of element in the set:"<<endl;
		cout<<"n= ";
		cin>>n;

		cout<<"enter the relation between element of set:"<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<" Are "<<(i+1)<<" and "<<j+1<<" related ? (y/n)"<<endl;
				cin>>ch;

				if(ch=='Y'||ch=='y')
				{
					array[i][j]=1;
				}
			}
		}

		cout<<"adjacency matrix of element of set:"<<endl;
	}

	void matrix()
	{

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<array[i][j]<<"	";
			}
			cout<<endl;
		}
	}

	void reflexive()
	{
		for(int i=0;i<n;i++)
		{
			if(array[i][i]!=1)
			{
				r=0;
				break;
			}
		}

		if(r==1)
		{
			cout<<"\nGiven relation is reflexive relation: "<<endl;
		}
		else cout<<"\n Given relation is not reflexive relation:"<<endl;
	}

	void symmetric()
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(array[i][j]==1 && array[j][i]!=1)
				{
					s=0;
				}
				if((array[i][j]==1 && array[j][i]!=1 ))
					{
						as=0;
						break;
					}
			}
		}

	if(s==1	 )
	{
		cout<<"\n Given relation is symmetric relation:"<<endl;
	}

	else cout<<"\n Given relation is antisymmetric realtion:"<<endl;
	}

void transitive()
	{

for(int k=0;k<n;k++)
  {
      for(int i=0;i<n;i++)
      {
         for(int j=0;j<n;j++)
         {
            t1=array[i][k];
            t2=array[k][j];
            t3=array[i][j];

            if(t1==1&&t2==1 && t3==1)
            	t=0;
         }
      }
  }

		if(t==1)
		{
			cout<<"\nGiven relation is not transitive relation:"<<endl;
		}

		else cout<<"\n Given relation is transitive relation:"<<endl;
	}

	void condition()
	{
		if(r==1 && s==1 &&t==0)
	{
		cout<<"\n Given relation is eqivalent :"<<endl;
	}

	else if(r==1 && as==0 && t==0)
	{
		cout<<"\n Given relation is partial order relation:"<<endl;
	}

	else cout<<"\nthere is  no relation"<<endl;
	}
};

int main()
{
	Relation r;
	r.matrix();
	r.reflexive();
	r.symmetric();
	r.transitive();
	r.condition();

	return 0;
}
