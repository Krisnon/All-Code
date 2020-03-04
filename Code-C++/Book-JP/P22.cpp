#include<iostream>
#include<algorithm>
using namespace std;
int m, n, k[1000];
bool search(int x)
{
    int l = 0, r = n;
    while(r-1>=1)
    {
        int i = (l + r) / 2;
        if(k[i]==x)
            return true;
        else if(k[i]<x)
            l = i + 1;
        else
            r = i;
    }
    return false;
}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n;i++)
    {
        cin >> k[i];
    }
    sort(0,n-1);
    bool f = false;
    for (int a = 0; a < n;a++)
    {
        for (int b = 0; b < n;b++)
        {
            for (int c = 0; c < n; c++)
            {
                if(search(m-k[a]-k[b]-k[c]))
                    f = true;
            }
        }
    }
    if(f)
        puts("Yes");
    else
        puts("No");
}
//fuck,C++ is too complicated