/*
                   --------------------------
                   |      CUSTOM EXAMPLE    |
                   --------------------------
                   | INPUT:     |   OUTPUT: |
                   --------------------------
                   |  4         |    ****   |
                   |            |    ****   |
                   |            |    ****   |
                   |            |    ****   |
                   --------------------------
*/

#include <iostream>
using namespace std;
int main()
{
    int i=1,n,j=1;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<'*';
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
