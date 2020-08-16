/*
                   --------------------------
                   |      CUSTOM EXAMPLE    |
                   --------------------------
                   | INPUT:     |   OUTPUT: |
                   --------------------------
                   |  4         |    ****   |
                   |            |    ***    |
                   |            |    **     |
                   |            |    *      |
                   --------------------------
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=i;
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
