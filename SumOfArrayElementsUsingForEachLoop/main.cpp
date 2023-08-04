#include <iostream>

using namespace std;

int main()
{
    int sum=0;
   int A[10]={1,2,3,4,5,6,7,8,9,10};
   for(auto x:A)
   {
       sum+=x;
   }
   cout<< "Sum of all elements of Array is "<<sum;
    return 0;
}
/*Using normal For Loop

 for(int i=0;i<10;i++)
 {
     sum+=A[i];
 }

 */
