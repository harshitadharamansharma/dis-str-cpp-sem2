/*program to implement Buble sorting */

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the number of element in the array:"<<endl;
	cout<<"nos= " ;
	cin>>n;
	int array[n];
	cout<<"enter the element of array:"<<endl;

	for(int i=0;i<n;i++)
		{
			cout<<"array[ "<<i+1<<" ]=" ;
			cin>>array[i];
		}

	cout<<"Sorting the array:"<<endl;

	int count=0,temp=0,i,j,p;

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				count++;
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;

				for(p=0;p<n;p++)
                {
                    cout<<"array[ "<<p+1<<" ]="<<array[p]<<"\t";
                }
                cout<<endl;

			}

        }
	}

	cout<<"total number of comparisons: "<<count<<endl;

}
