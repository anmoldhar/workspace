#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<int> s; 
  bool isProcessed;
  int n,i,input, start;
  cin >> n;
  while(n!=0)
  {
    start = 1;
    for(i = 1; i<= n; i++)
    {
      cin >> input;
      isProcessed = false;
      if(input == start)
      {
        start++;
        isProcessed = true;
      }
      if((!s.empty()) && (start == s.top()))
      {
        s.pop();
        start++;
      }
      if(!isProcessed)
        s.push(input);
    }
    while((!s.empty()) && (start == s.top()))
    {
      s.pop();
      start++;
    }
    if(s.empty())
      cout <<"yes"<<endl;
    else
      cout <<"no"<<endl;
    while(!s.empty())
      s.pop();
    cin >> n;
  }
  return 0;
}
