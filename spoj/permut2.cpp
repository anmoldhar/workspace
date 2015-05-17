#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
  long long n, temp,i;
  map<long long, long long> m;
  cin >> n;
  while(n != 0)
  {
    for(i = 1; i<=n; i++)
    {
      cin >> temp;
      m[i] = temp;
    }
    for(i = 1; i<=n; i++)
    {
      if((temp = m.find(i)->second)!= i)
        if(m.find(temp)->second != i)
          break;
    }
    if(i == n+1)
      cout<<"ambiguous"<<endl;
    else
      cout<<"not ambiguous"<<endl;
    cin >> n;
  }
  return 0;
}
