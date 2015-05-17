#include<iostream>
using namespace std;
int main()
{
  unsigned long long n;
  cin >> n;
  if(n == 0 || n == 1)
    cout << "TAK"<<endl;
  else if(!(n&(n-1)))
    cout <<"TAK"<<endl;
  else
    cout<<"NIE"<<endl;
  return 0;
}
