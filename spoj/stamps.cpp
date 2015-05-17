#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

  long long n, req_stamps;
  long frn, count, temp;
  vector<long> v;
  cin >> n;
  for(long long i = 1; i<= n; i++)
  {
    count = 0;
    cin >> req_stamps >> frn;
    for(long j =0; j< frn; j++)
    {
      cin>> temp;
      v.push_back(temp);
    }
    sort(v.rbegin(), v.rend());
    for(vector<long>::iterator it = v.begin(); it != v.end() && req_stamps > 0; it++)
    {
      req_stamps -= *it;
      count++;
    }
    if(req_stamps <= 0)
      cout<<"Scenario #"<<i<<":"<<endl<<count<<endl<<endl;
    else
      cout<<"Scenario #"<<i<<":"<<endl<<"impossible"<<endl<<endl;
    v.erase(v.begin(), v.end());
  }
  return 0;
}
