#include <iostream>

using namespace std;
/*
  0, 1, 1, 2, 3, 5, 8
  Base Case: 0, 1
  
  General Case: x + y
  F(n)
  F(4) = 2
  F(5) = F(3) + F(4)
  F(n) = F(n-2) + F(n-1)
*/
int fact(int n)
if(n== 0)
{
  return 1;
}

else(return n*fact(n-1);}

int main(){
  cout << fact(4) << endl;
}
