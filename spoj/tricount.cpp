#include<iostream>
using namespace std;
int main()
{
  int t;
  long long level, sum, temp;
  cin >> t;
  for(int i = 0; i<t; i++)
  {
    cin >> level;
    temp = level;
    sum = 0;
    while(temp > 0)
    {
      sum += (temp*temp);
      temp -= 2;
    }
    temp = level;
    while(temp > 0)
    {
      sum += (temp*(temp-1))/2;
      temp -= 2;
    }
    cout << sum<<endl;
  }
  return 0;
}

