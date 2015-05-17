#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
  char input[105];
  int prevunderscore = 0,underscore =0, uppercase = 0;
  int i,n;
  while(scanf("%s", input)!= EOF)
  {
    prevunderscore = -1;underscore =0; uppercase = 0;
    if(!islower(input[0]))
    {
      cout<<"Error!"<<endl;
      continue;
    }
    else
    {
      n = strlen(input);
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
