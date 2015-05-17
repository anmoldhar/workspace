#include<iostream>

using namespace std;

int main()
{
  char ignore;
  string temp;
  unsigned long long test_case, sum = 0,candy,count;
  cin >> test_case;
  for(unsigned long long i = 0; i < test_case; i++)
  {
    sum = 0;
    cin >> count;
    for(unsigned long long i = 0; i < count; i++)
    {
      cin>>candy;
      sum+=candy;
      if(sum>=count)
        sum %= count;
    }
    if(sum)
      cout<<"NO"<<endl;
    else
      cout<<"YES"<<endl;
  }
}

