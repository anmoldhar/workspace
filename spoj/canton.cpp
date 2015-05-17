#include<iostream>
using namespace std;
int main()
{
  int t;
  long long k, count = 1, digit = 1, num=1, den = 1,diff;
  cin >> t;
  for(int i = 0; i<t; i++)
  {
    count = 1; digit = 1; num=1; den = 1;diff = 4;
    cin >> k;
    while(count < k)
    {
      digit++;
      count++;
      if(count + digit - 1 >= k)
        break;
      count+=diff;
      digit++;
      diff+=4;
    }
    num = 1; den = digit;
    if(count >= k)
    {
      while(count != k)
      {
        num++;den--;count--;
      }
    }
    else
    {
      while(count != k)
      {
        num++;den--;count++;
      }
    }
    cout << "TERM "<< k<<" IS "<<num<<"/"<<den<<endl;
  }
  return 0;
}
