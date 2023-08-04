#include <iostream>

using namespace std;

int main()
{
  int m;
  int a[]={4,8,6,9,5,2,7};
  m=a[0];
  for(int i=1;i<7;i++)
  {
      if(a[i]>m)
      {
          m=a[i];
      }
  }
  cout<< "Greatest number in the Array is "<<m;
    return 0;
}
