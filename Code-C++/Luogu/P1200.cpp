#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string star,org;
    cin >> star >> org;
    int sum1=1, sum2=1;
    for (int i = 0; i < star.length();i++)
    {
        sum1 = sum1 * (star[i]-'A'+1);
    }
    for (int i = 0; i < org.length();i++)
    {
        sum2 = sum2 * (org[i]-'@');
    }
    sum1 = sum1 % 47;
    sum2 %= 47;
    if(sum1==sum2)
        cout << "GO";
    else
        cout << "STAY";
}
