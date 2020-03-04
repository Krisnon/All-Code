#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<vector>
#include<queue>
using namespace std;
const int x = 30005;
int n, m;
long long a[x], ans[x], add[x];
struct{int l, r, sum;} t[3000005];  //sum is used to calculate the sum of every elements
void collect(int k)  //collect information from sons
{
    t[k].sum = t[k << 1].sum + t[k << 1 | 1].sum;
}
void build(int k,int l,int r)  //build the tree
{
    t[k].l = l;
    t[k].r = r;
    if(l==r)
    {
        t[k].sum = 1;
        return;
    }
    int mid = (l + r) >> 1;
    build(k << 1, l, mid);
    build(k << 1 | 1, mid + 1, r);
    collect(k);
    return;
}
int query(int k,int num)
{
    t[k].sum--;
    if(t[k].l==t[k].r)
        return t[k].l;
    if(t[k<<1].sum<num)
        return query(k << 1 | 1, num - t[k << 1].sum);
    if(t[k<<1].sum>=num)
        return query(k << 1, num);
}
int main()
{
    int n, i;
    cin >> n;
    a[1] = 0;
    for (i = 2; i < +n; i++)
        cin >> a[i];
    build(1, 1, n);
    for (i = n; i >= 1;i--)
        ans[i] = query(1, a[i] + 1);
    for (i = 1; i <= n;i++)
        cout << ans[i];
    return 0;
}