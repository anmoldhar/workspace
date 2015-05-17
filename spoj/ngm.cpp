#include<iostream>

using namespace std;

int calculate_max(unsigned long long number)
{
  int max = number%10;
  while(number)
  {
    if(number%10 > max)
      max = number%10;
    number/=10;
  }
  return max;
}

int wins(unsigned long long number)
{
  int n = 1;
  while(number)
  {
    int max = calculate_max(number);
    number -= max;
    n = !n;
  }
  return n;
}


int main()
{
  unsigned long long number;
  cin >> number;
  if(wins(number) == 1)
    cout << 2<<endl;
  else
  {
    cout<<1<<endl;
    cout<<calculate_max(number)<<endl;
  }
  return 0;
}
