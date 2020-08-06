/*
                   --------------------------
                   |      CUSTOM EXAMPLE    |
                   --------------------------
                   | INPUT:     |   OUTPUT: |
                   --------------------------
                   |  4         |    A      |
                   |            |    BC     |
                   |            |    DEF    |
                   |            |    GHIJ   |
                   --------------------------
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch='A';
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        // ch='A'+i-1;
        while(j<=i)
        {
            cout<<ch;
            j++;
            ch++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
