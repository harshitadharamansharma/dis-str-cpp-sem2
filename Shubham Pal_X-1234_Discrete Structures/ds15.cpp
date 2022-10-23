#include <iostream>
#include <cstdlib>
#define MAXSIZE 10
using namespace std;
 int main()                  //4n^3+2n+9
{
    int array[MAXSIZE];
    int i, num, power;
    float x, polySum;
    cout<<"Enter the order of the polynomial \n";
    cin>>num;
    cout<<"Enter the value of x \n";
    cin>>x;
    /*  Read the coefficients into an array */
    cout<<"Enter "<<num + 1<<" coefficients \n";
    for (i = 0; i <= num; i++)
    {
        cin>>array[i];
    }
    polySum = array[0];
    for (i = 1; i <= num; i++)
    {
        polySum = polySum * x + array[i];
    }
    power = num;
 
    cout<<"Given polynomial is: \n";
    for (i = 0; i <= num; i++)
    {
        if (power < 0)
        {
            break;
        }
        /*  printing proper polynomial function */
        if (array[i] > 0)
            cout<<" + ";
        else if (array[i] < 0)
            cout<<" - ";
        else  if(array[i] == 0)
            cout<<" + ";
            
        cout<<array[i]<<"x^"<<power;
		power--;
    }
    cout<<"\n Sum of the polynomial = "<<polySum;
     return 0;
}
