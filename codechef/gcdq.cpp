#include<iostream>
#include <vector>

using namespace std;

//long long gcd(long long a, long long b)
//{
//  long long temp;
//  while(temp=a%b)
//  {
//    a = b;
//    b = temp;
//  }
//  return b;
//}

int main()
{
  long long temp, t, n, q, l,r, var, b;
  cin >> t;
  for(int i = 0; i<t; i++)
  {
    vector<long long > a;
    cin >> n >> q;
    for(int j = 0; j<n; j++)
    {
      cin >> temp;
      a.push_back(temp);
    }
    for(int j=0; j<q; j++)
    {
      vector<long long> tempvec(a);
      vector<long long >::iterator it1 = tempvec.begin(); 
      cin>>l>>r;
      tempvec.erase(it1+(l-1),it1+r);
      temp = *it1;
      it1++;
      while(it1 != tempvec.end())
      {
        if(temp == 1)
          break;
        //temp = gcd(temp, *it1);
        b = *it1;
        while(var = temp%b)
        {
          temp = b;
          b = var;
        }
        temp = b;
        it1++;
      }
      cout<<temp<<endl;
    }
  }
  return 0;
}
