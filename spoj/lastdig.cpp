#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long  a, d, i=1, b;
  int test_cases;
  cin >> test_cases;
  for(int j = 0; j<test_cases; j++){
    cin >> a >> b;
    if(a == 0 ){
      cout << 0 <<endl;
    }
    else if (b == 0){
      cout << 1 << endl;
    }
    else if (b == 1){
      cout << b%10 << endl;
    }
    else{
      i = 2;
      while((((long long)pow(a,i))%10)!= (a%10))
        i++;
      d = i-1;
      i=1;
      while(i <= d){
        if(((b-i)%d) == 0)
          break;
        i++;
      }
      if(i <= d)
        cout << ((long long)pow(a,i))%10 <<endl;
    }
  }
  return 0;
}
