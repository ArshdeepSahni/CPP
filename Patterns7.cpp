/*
                   --------------------------
                   |      CUSTOM EXAMPLE    |
                   --------------------------
                   | INPUT:     |   OUTPUT: |
                   --------------------------
                   |  4         |    1      |
                   |            |    23     |
                   |            |    456    |
                   |            |    78910  |
                   --------------------------
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1,p=1;
    while(i<=n)
    {
        int j=1;
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
