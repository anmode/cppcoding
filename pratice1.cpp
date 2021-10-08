#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num1, num2, temp;
  cout << "\nThis is the program to swap two digit";
  cout << "\n Enter the first number=";
  cin >> num1;
  cout << "\n Enter the second number=";
  cin >> num2;
  cout << "\nInitial num1 and num2";
  cout << num1 << num2;
  temp = num1;
  num1 = num2;
  num2 = temp;
  cout << "\nSwaped numbers";
  cout << num1 << num2;
}