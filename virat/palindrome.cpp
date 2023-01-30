#include <bits/stdc++.h>
using namespace std;
bool palindrome(int n)
{
  if (n < 0)
  {
    return false;
  }
  else
  {
    long int reversed_number = 0, remainder;
    int k=n;
    while (n != 0)
    {
      remainder = n % 10;
      reversed_number = reversed_number * 10 + remainder;
      n /= 10;
    }
    if (k == reversed_number)
      return true;
    else
      return false;
  }
}
int main()
{
  cout<<palindrome(121); 
  return 0;
}