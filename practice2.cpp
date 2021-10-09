//program to get factorial of a number using for loop
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int fac = 1, number;
  cout << "Enter the no." << endl;
  cin >> number;
  for (int i = 1; i <= number; i++)
  {
    fac = fac * i;
  }
  cout << fac << endl;
  return 0;
}