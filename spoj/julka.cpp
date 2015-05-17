#include <iostream>
#include <cstring>

using namespace std;

int add(int *input1, int *input2, int* sum, int n);
int subtract(int *input1, int *input2, int* sub, int n);
void half(int *input, int *result, int n);

int main()
{
  int input1[101] = {0}, input2[101] = {0}, sum[101] = {0}, sub[101] = {0}, add_count, sub_count, K[101] = {0}, N[101] = {0},n1, n2;
  char input1_str[101] = {0} , input2_str[101] = {0};
  for(int i = 0; i<10; i++)
  {
    cin >> input1_str >> input2_str;
    n1 = strlen(input1_str);
    n2 = strlen(input2_str);
//  cout << "n1 :  "<<n1<<"      n2 :  "<<n2<<endl; 
    for(int j = 0,k = n1-1; j < n1; j++, k--)      // integers to be stored in reverse order of string
      input1[k] = input1_str[j] - '0';
    for(int j = 0, k = n2-1; j < n2; j++, k--)
      input2[k] = input2_str[j] - '0';
    add_count = add(input1,input2,sum, n1);
    sub_count = subtract(input1,input2,sub,n1);
//    for(int j =add_count; j>=0; j--)
//      cout<<sum[j];
//    cout<<endl;
//for(int j = sub_count; j>=0; j--)
//    cout<<sub[j];
//    cout<<endl;
    half(sum,K,add_count);
    half(sub,N,sub_count);
    while(K[add_count] == 0)
      add_count--;
    while(N[sub_count] == 0)
      sub_count--;
    for(int j =add_count; j>=0; j--)
      cout<<K[j];
    cout<<endl;
    for(int j = sub_count; j>=0; j--)
      cout<<N[j];
    if(sub_count < 0)
      cout << 0;
    cout<<endl;
    for(int j = 0; j <= n1; j++)
    {
     input1[j] =0; input2[j] = 0; sum[j] = 0; sub[j] = 0;  K[j] = 0; N[j] = 0; input1_str[j] = 0; input2_str[j] = 0; 

    }
add_count=0; sub_count = 0;n1 = 0; n2 = 0;
  }
  return 0;
}

int add(int *input1, int *input2, int* sum, int n)
{
  int total=0, carry=0, i =0;
  while(i < n)
  {
    total = input1[i] + input2[i] + carry;
    carry = total/10;
    sum[i] = total%10;
    i++;
  }
  sum[i] = carry;
  return carry > 0 ? i: i-1;
}

int subtract(int *input1, int *input2, int* sub, int n)
{
  int rem = 0, diff = 0, i =0;
  while(i<n)
  {
    diff = input1[i] - input2[i];
    if(diff < 0)
    {
      diff = diff + 10 - rem;
      rem = 1;
    }
    else if (diff == 0 && rem == 1)
    {
      diff = diff + 10 - rem;
    }
    else if (rem == 1)
    {
      diff = diff - rem;
      rem = 0;
    }
    sub[i] = diff;
    i++;
  }
  return i-1;
}

void half(int *input, int *result, int n)
{
  int rem = 0;
  while(n >= 0)
  {
    result[n] = (10*rem + input[n])/2;
    rem = (10*rem + input[n]) % 2;
    n--;
  }
}
