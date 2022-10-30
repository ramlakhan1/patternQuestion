#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;


    for(int i=1;i<=n;i++)
    {
         for (int j = 1; j <= (n- i); j++)
        {
            cout << " ";
        }

        //4
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            //5
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else if (i == height)
            {
                //6
                cout << "*";
            }
            else
            {
                //7
                cout << " ";
            }
            cou
    }
}