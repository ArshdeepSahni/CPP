  
/*
                   --------------------------
                   |      CUSTOM EXAMPLE    |
                   --------------------------
                   | INPUT:     |   OUTPUT: |
                   --------------------------
                   |  4         |      1    |
                   |            |     121   |
                   |            |    12321  |
                   |            |   1234321 |
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
        int j=1;
        while(j<=(n-i))
        {
            cout<<' ';
            j++;
        }
        int k=1;
        while(k<=i){
            cout<<k;
            k++;
        }
        int p=k-2;
        while(p>0){
            cout<<p;
            p--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
