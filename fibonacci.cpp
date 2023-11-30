/*
  0, 1, 1, 2, 3, 5, 8
  Base Case: 0, 1
  
  General Case: x + y
  F(n)
  F(4) = 2
  F(5) = F(3) + F(4)
  F(n) = F(n-2) + F(n-1)
*/

#include <iostream>

using namespace std;

int fib(int n)
{
    if (n== 0)
  {
  return 0;
  }
  
  else if (n==1)
  {
    return 1;
  }

  else(return fib(n-1) + fib(n-2));}
}

int main()
{
  cout << fib(4) << endl;
}
