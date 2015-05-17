#include<iostream>
#include<iomanip>
using namespace std;
const double PI  =3.141592653589793238463;
int main()
{
  float l;
  cin >> l;
  while(l)
  {
    cout<<fixed<<setprecision(2)<< (l*l)/(2*PI) <<endl;
    cin>>l;
  }
  return 0;
}
