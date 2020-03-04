#include<iostream>
using namespace std;
int n, cnt = 1;
void func(int z)
{
    for (int i = 0; i <= z / 2;i++)
    {
        cnt++;
        func(i);
    }
}
int main()
{
    cin >> n;
    func(n);
    cout << cnt;
}