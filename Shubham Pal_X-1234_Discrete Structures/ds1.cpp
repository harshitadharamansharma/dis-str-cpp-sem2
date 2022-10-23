#include<iostream>
#include<cstdlib>
using namespace std;

void uniqueNumber();
void  isMember();
void cardinality();
void powerSet();

int main()
{
    int q;
    while(true)
    {
    cout<<"enter the value for selecting the option:"<<endl;
    cout<<"1. Unique number"<<endl;
    cout<<"2.isMember"<<endl;
    cout<<"3.cardinality"<<endl;
    cout<<"4. Power set"<<endl;
    cout<<"5. exit"<<endl;
    cin>>q;
    switch(q)
    {
    case 1:
        {
            uniqueNumber();
            break;
        }
    case 2:
        {
            isMember();
            break;
        }
    case 3:
        {
           cardinality();
           break;
        }
    case 4:
        {
            powerSet();
            break;
        }
    case 5:
        {
            exit(0);
        }
    }
    }
}
////////////////////////////////////////////////////////
void uniqueNumber()
{
	int n=0,i,j;
	cout<<"enter the number of element :"<<endl;
	cout<<"n= ";
	cin>>n;

	int set[n];
	cout<<"enter the element of set : "<<endl;

	for(i=0;i<n;i++)
	{
		cout<<"set["<<i+1<<"]= ";
		cin>>set[i];
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			{
				if(set[i]==set[j])
					break;
			}

		if(i==j)
			cout<<set[i]<<endl;
	}

}
/////////////////////////////////////////
void Set(int set[],int n)
{int check;
	cout<<"enter the element of set:"<<endl;

	for(int i=0;i<n;i++)
	{
		cout<<"set["<<i+1<<"]= ";
		cin>>set[i];
	}

	cout<<"enter the element to check the membership:"<<endl;
	cout<<"check= ";
	cin>>check;
int flag=0;
	for(int i=0;i<n;i++)
	{
		if(check==set[i])
			{flag=1;
			break;}
	}

	if(flag=0)
		cout<<"False"<<endl;
	else
		cout<<"True"<<endl;


	return ;
}
/////////////////////////////////////////

void  isMember()
{
	int n;
	cout<<"enter the number of element of set:";
	cout<<"n= ";
	cin>>n;

	int set[n];

	Set(set,n);

}
/////////////////////////////////////////////
void cardinality()
{
	int n,count=0;
	cout<<"enter the number of element of set: "<<endl;
	cout<<"n= ";
	cin>>n;

	int set[n];

	cout<<"enter the element of set: "<<endl;

	for(int i=0;i<n;i++)
	{
		cout<<"set["<<i+1<<"]= ";
		cin>>set[i];
	}

	cout<<"unique set and cardinality of set :"<<endl;

int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			{
				if(set[i]==set[j])
					break;
			}

		if(i==j)
			{cout<<set[i]<<endl;
			count++;}
	}
	cout<<"cardinality of set: "<<count<<endl;
}
/////////////////////////////////////////////////////////
void powerSet()
{
    cout<<"enter the number of element of set:"<<endl;
	int n;
	cin>>n;
	int array[n];

	cout<<"enter the element of set:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}

	int count=1,temp;

	for(int i=0;i<n;i++)
		count*= 2;
		cout<<"{"<<endl;
		cout<<"null\n";

	for(int i=1;i<count;i++)
	{
		temp=i;
		for(int j=0;j<n;j++)
		{
			if(temp &1)
				cout<<array[j]<< " ";
			temp =temp>>1;
		}
		cout<<endl<<endl;
	}
	cout<<"}"<<endl;

}
