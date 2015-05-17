#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int> gz, mgz;
  int t, ng, nm, temp;
  cin >> t;
  for(int i = 0; i<t; i++)
  {
    cin >> ng>> nm;
    for(int j = 0; j < ng; j++)
    {
      cin >> temp;
      gz.push_back(temp);
    }
    for(int j = 0; j < nm; j++)
    {
      cin >> temp;
      mgz.push_back(temp);
    }
    sort(gz.rbegin(), gz.rend());
    sort(mgz.rbegin(), mgz.rend());
    while(!gz.empty() && !mgz.empty())
    {
      if(gz.back() < mgz.back())
        gz.pop_back();
      else
        mgz.pop_back();
    }
    if(gz.empty())
    {
      cout<<"MechaGodzilla"<<endl;
      mgz.erase(mgz.begin(), mgz.end());
    }
    else
    {
      cout<<"Godzilla"<<endl;
      gz.erase(gz.begin(), gz.end());
    }
  }
  return 0;
}
