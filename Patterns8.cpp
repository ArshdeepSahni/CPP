/*
                   --------------------------
                   |      CUSTOM EXAMPLE    |
                   --------------------------
                   | INPUT:     |   OUTPUT: |
                   --------------------------
                   |  4         |    1234   |
                   |            |    1234   |
                   |            |    1234   |
                   |            |    1234   |
                   --------------------------
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        ch='A';
        while(j<=n)
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
