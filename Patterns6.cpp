/*
                   --------------------------
                   |      CUSTOM EXAMPLE    |
                   --------------------------
                   | INPUT:     |   OUTPUT: |
                   --------------------------
                   |  4         |    1      |
                   |            |    23     |
                   |            |    345    |
                   |            |    4567   |
                   --------------------------
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1,p;
    while(i<=n)
    {
        int j=1,p=i;
        while(j<=i)
        {
            cout<<p;
            j++;
            p++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
