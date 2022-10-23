#include<iostream>
#include<string.h>
#define N 10
using namespace std;
 
void print(int *num, int n)
{
    int i;
    for ( i = 0 ; i < n ; i++)
        cout<<num[i]<<"  ";
    
	cout<<"\n";
	
}
int main()
{
    int num[N];
    int *ptr;
    int temp;
    int i, n, j;
    cout<<"\nHow many number you want to enter: ";
        cin>>n;
    cout<<"\nEnter a list of numbers to see all combinations:\n";
    for (i = 0 ; i < n; i++)
        cin>>num[i];
    for (j = 1; j <= n; j++) {
        for (i = 0; i < n-1; i++) {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            print(num, n);
	}
    }
    
    return 0;
}
