#include <iostream>

using namespace std;

int factorial(int n)
{
  int mult=1;
  for (int k=n;k>=1;k--)
    mult = mult × k;
  return mult;
}

int main()
{
  cout<<"Result is "<< mult <<endl;
}
