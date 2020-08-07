
/*
                   ---------------------------------------------
                   |                CUSTOM EXAMPLE             |
                   ---------------------------------------------
                   |         INPUT:                |   OUTPUT: |
                   ---------------------------------------------
                   |  4 (no. of Testcases)         |           |
                   |  1                            |    2      |
                   |  2                            |    3      |
                   |  3                            |           |
                   |  5                            |           |
                   |  2(no. of elements to search) |           |
                   |  3                            |           |
                   |  5                            |           |
                   ---------------------------------------------
*/
#include <iostream>
using namespace std;
int main()
{
   int n,a[100];
   cin>>n;         // total test cases
   int i=0;
   while(i<n)
   {
        cin>>a[i];  // input sorted array
        i++;
   }
   int t,b[t];
   cin>>t;        // no. of elements to search
   i=0;
   while(i<t)
   {
       cin>>b[i];      // input elements to search
       i++;
   }
    int s=0,e=n-1,m=(s+e)/2;         // declare s(start), e(end), m(middle)
    i=0;
    for(i=0;i<=t;i++){
    s=0;e=n-1;m=(s+e)/2;
    while(s<=e)
    {
    if(b[i]==a[m])            // if element found
        {                  
        cout<<m;
        break;
        }
        else if(b[i]>a[m])      // if element is bigger than middle element of array
        { 
            s=m++;
        }
        else                  // if element is smaller than middle element of array
        {
            e=m--;
        }
      }
   }
    return 0;
}
