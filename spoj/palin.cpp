#include<iostream>
#include<string>

using namespace std;

int main()
{
  long long t, len, start, end, inc;
  string s;
  cin >> t;
  for(long long i =0 ; i < t; i++)
  {
    cin >> s;
    string temp(s);
    len = s.length();
    end  = len - 1;
    start = 0;
    inc = 0;
    while(start < end)
    {
      s[end] = s[start];
      start++; end--;
    }
    if(len == 1)
      cout << 11<<endl;
    else if(s > temp)
      cout << s << endl;
    else
    {
      while(end >= 0 && start < len)
      {
        if(s[end] == '9')
          s[end] = s[start] = '0';
        else
        {
          s[end]++;
          s[start] = s[end];
          break;
        }
        end--; start++;
      }
      if(s[0] == '0')
      {
        s[0] = '1'; s.push_back('1');
      }
      cout << s<< endl;
    }
    s.erase(0, s.length());
  }
}
