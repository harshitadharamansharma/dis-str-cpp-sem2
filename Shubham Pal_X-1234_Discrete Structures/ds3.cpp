/*program to check whether it is reflexive ,symmetric ,antisymmetric and transitive relation*/

#include<iostream>
#include<cstdlib>
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
			cout<<"Given relation is reflexive relation: "<<endl;
		}
		else cout<<"\n Given relation is not reflexive relation:"<<endl;
	}

	void symmetric()
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(array[i][j]==1 && array[j][i]==1)
				{
					s=0;
				}
				if((array[i][j]==1 && array[j][i]!=1 )||(array[i][j]!=1 && array[j][i]==1))
					{
						as=0;
						break;
					}
			}
		}

	if(s==0 && as==1)
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
			cout<<"Given relation is not transitive relation:"<<endl;
		}

		else cout<<"\n Given relation is transitive relation:"<<endl;
	}

	void reflexiveClosure()
	{
		cout<<"Reflexive closure of given relation in the matrix form:"<<endl;
		for(int i=0;i<n;i++)
		{
			if (r==0)
				{
					array[i][i]=1;
				}
		}
	}
};

int main()
{int g;

	Relation r;
		r.matrix();
	cout<<"enter the number for selecting the option:"<<endl;
	while(true)
	{
		
		cout<<"\n1. reflexive relation"<<endl;
		cout<<"\n2. symmetrix relation and antisymmetrix relation"<<endl;
		cout<<"\n3. transitive relation "<<endl;
		cout<<"\n4. exit\n"<<endl;
		cin>>g;

		switch(g)
		{
			case 1:{r.reflexive();
				    r.reflexiveClosure();
				    r.matrix();
				    break;}

			case 2:{r.symmetric();
					break;}
			case 3:{r.transitive();
				break;
			}
			case 4:{exit(0);}
		}
	}
	return 0;
}
