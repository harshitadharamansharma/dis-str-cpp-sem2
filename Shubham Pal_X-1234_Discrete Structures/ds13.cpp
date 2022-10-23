/*ds program */

#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"---------------------------"<<endl;
    cout<<"1. conjucton of x and y: "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"x        y       x^y"<<endl;

    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<i<<"        "<<j<<"       "<<bool(i*j)<<endl;
        }
    }
    cout<<"---------------------------"<<endl;
    cout<<"2. Disjunction of x and y: "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"x        y       x disjunction y"<<endl;

    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<i<<"        "<<j<<"       "<<bool(i+j)<<endl;
        }
    }
    cout<<"---------------------------"<<endl;
    cout<<"3. exclusive OR of x and y: "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"x        y       x exclusive OR y"<<endl;

    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<i<<"        "<<j<<"       "<<bool((i*!j)+(j*!i))<<endl;
        }
    }
    cout<<"---------------------------"<<endl;
    cout<<"4. conditional of x and y: "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"x        y       x conditional y"<<endl;

    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<i<<"        "<<j<<"       "<<bool(!i+j)<<endl;
        }
    }
    cout<<"---------------------------"<<endl;
    cout<<"5.  bi-conditional of x and y: "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"x        y       x bi-conditional y"<<endl;

    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<i<<"        "<<j<<"       "<<bool((!i+j)*(i+!j))<<endl;
        }
    }
    cout<<"---------------------------"<<endl;
    cout<<"6. exclusive NOR of x and y: "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"x        y       x exclusive NOR y"<<endl;

    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<i<<"        "<<j<<"       "<<bool(!((i*!j)+(!i*j)))<<endl;
        }
    }
    cout<<"---------------------------"<<endl;
    cout<<"7. NAND of x and y: "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"x        y       x NAND y"<<endl;

    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<i<<"        "<<j<<"       "<<bool(!(i*j))<<endl;
        }
    }
    cout<<"---------------------------"<<endl;
    cout<<"8. NOR of x and y: "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"x        y       x NOR y"<<endl;

    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<i<<"        "<<j<<"       "<<bool(!(i+j))<<endl;
        }
    }
    cout<<"---------------------------"<<endl;
    cout<<"9. Negation of x or y"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"x        !x"<<endl;

    for(int i=0;i<=1;i++)
    {
        cout<<i<<"        "<<bool(!(i))<<endl;
    }
	return 0;
}
