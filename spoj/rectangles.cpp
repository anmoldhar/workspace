#include <iostream>

using namespace std;

int main()
{
  long n, j, count=0, count_old = -1;
  cin >> n;
  for(long i = 1; i <= n && count_old != count; i++)
  {
    j = i;
    count_old = count;
    while(j <= n)
      if(i*j <= n)
      {
        count++;
        j++;
      }
      else
        break;
  }
  cout << count;
  return 0;
}
