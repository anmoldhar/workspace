#include<iostream>
//#include<map>
//#include<algorithm>
using namespace std;
int main()
{
  long long n, temp,i;
  cin >> n;
  while(n != 0)
  {
    long long *m = new long long [n+1];
    for(i = 1; i<=n; i++)
    {
      cin >> temp;
      m[i] = temp;
    }
    for(i = 1; i<=n; i++)
    {
      if(m[i] != i)
        if(m[m[i]] != i)
          break;
    }
    if(i == n+1)
      cout<<"ambiguous"<<endl;
    else
      cout<<"not ambiguous"<<endl;
    delete [] m;
    m = NULL;
    cin >> n;
  }
  return 0;
}
