/*
Fibonacci series using Recursion
*/
#include <iostream>

using namespace std;
int fibonacci(int);

int main(void)
{
 int count;
 char waitInput;
 
 cout << "How many numbers in the Fibonacci sequence do you want to show? ";
 cin >> count;

 for (int i = 0; i < count; i++)
 {
  cout << " " << fibonacci(i) << " ";
 }
 
 cin>>waitInput;

 return 0;
}

//fibonacci function
int fibonacci(int num)
{
 if (num == 1)
 { 
  return 1;
 }
 else if (num == 0)
 {
  return 0;
 }
 else
 {
  return fibonacci(num - 1) + fibonacci(num - 2);
 }
}
