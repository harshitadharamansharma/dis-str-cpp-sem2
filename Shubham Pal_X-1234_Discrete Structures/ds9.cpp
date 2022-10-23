/*program to implement insertion sorting*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the number of element in the array:"<<endl;
	cout<<"n= " ;
	cin>>n;
    int array[n];
	cout<<"enter the element of array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"array[ "<<i+1<<" ]= ";
		cin>>array[i];
	}

	cout<<"Sorting the array by using the insertion sorting algorithm:"<<endl;

	int i,j,temp=0,count=0;
	for(i=1;i<=n;i++)
	{
		temp=array[i];
		j=i-1;

		while(j>=0 && temp<array[j])
		{
		    count++;
			array[j+1]=array[j];
			j=j-1;

			for(int p=0;p<n;p++)
                {
                cout<<"array[ "<<p+1<<" ]= "<<array[p]<<"\t";
                }
		cout<<endl;}
		cout<<endl;

		array[j+1]=temp;

	}
    cout<<"array after sorting :"<<endl;
	for(int p=0;p<n;p++)
	{
		cout<<"array[ "<<p+1<<" ]= "<<array[p]<<endl;
	}

	cout<<"total number of comparisons: "<<count<<endl;
}
