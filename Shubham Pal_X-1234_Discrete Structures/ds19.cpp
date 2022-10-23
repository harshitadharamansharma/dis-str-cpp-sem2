/*ds 20 program to print whether graph is has Euler path or Euler circuit*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	int count=0;

	cout<<"enter the total number of vertices:"<<endl;
	cout<<"n=";
	cin>>n;
	int array[n][n];
	int flag[n];

	cout<<"this graph is simple so only enter 1 or 0:"<<endl;
	cout<<"enter the edges of vertices:"<<endl;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		    if(i==j)
            {
                array[i][j]=0;

            }
            else if (i!=j)
            {
                cout<<i+1<<" is adjacent to "<<j+1<<"? (y=1/n=0)"<<endl;
                cin>>array[i][j];
            }

		}
		cout<<endl;
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<array[i][j]<<"    ";

		}
		cout<<endl;
	}
int w;
	for(int i=0;i<n;i++)
	{w=0;
		for(int j=0;j<n;j++)
		{
			w+=array[i][j];
		}
		if(w%2==0)
			flag[i]=1;

        else
            count++;
	}
int c=1;
    for(int i=0;i<n;i++)
        c*=flag[i];

	if(c==1)
		cout<<"this graph has euler circuit"<<endl;
    else
        cout<<"this graph has no euler circuit"<<endl;


   if(count==2)
    cout<<"this graph is euler path:"<<endl;
   else cout<<"this graph is not euler path:"<<endl;

}
