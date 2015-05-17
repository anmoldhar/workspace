#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
  string input;
  int prevunderscore = 0,underscore =0, uppercase = 0;
  string::size_type i,n;
  while(getline(cin, input))
  {
    prevunderscore = -1;underscore =0; uppercase = 0;
    if(!islower(input[0]))
    {
      cout<<"Error!"<<endl;
      continue;
    }
    else
    {
      n = input.length();
      for(i = 1; i < n; i++)
      {
        if(isupper(input[i]))
          uppercase = 1;
        else if(input[i] == '_')
        {
          underscore = 1;
          if(i - prevunderscore == 1)
          {
            cout<<"Error!"<<endl;
            break;
          }
          else
            prevunderscore = i;
        }
        if((uppercase == 1 && underscore == 1) || prevunderscore == n-1)
        {
          cout << "Error!"<< endl;
          break;
        }
      }

      if(i == n)
      {
        if(uppercase)
        {
          for( i = 0; i < n; i++)
            if(isupper(input[i]))
              cout << "_"<<(char)tolower(input[i]);
            else
              cout << input[i];
          cout<<endl;
        }
        else if(underscore)
        {
          for(i = 0; i < n; i++)
            if(input[i] == '_')
            {
              i++;
              cout<<(char)toupper(input[i]);
            }
            else
              cout <<input[i];
          cout<<endl;
        }
        else
        {
          for(i = 0; i < n; i++)
            cout<<input[i];
          cout << endl;
        }
      }
    }
  }
  return 0;
}
