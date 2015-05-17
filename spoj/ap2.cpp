#include <iostream>

using namespace std;

int main()
{
  int total_cases;
  long long a, d, n, input1, input2, input3, count;
  cin >> total_cases;
  for(int i = 0; i<total_cases; i++)
  {
    cin >> input1 >> input2 >> input3;
    n = (input3 * 2)/(input1 + input2);
    d = (input2 - input1) / (n-5);
    a = (input1 - 2*d);
    cout << n <<endl;
    for(count = 0; count < n; count++)
      cout << a + count*d << " ";
    cout<<endl;
  }
  return 0;
}
