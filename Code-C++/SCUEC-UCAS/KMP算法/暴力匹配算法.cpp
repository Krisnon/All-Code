#include<iostream>
#include<cstring>
using namespace std;
const int len = 100;
int violentmatch(char* s, char* p)
{
    int slen = strlen(s);
    int plen = strlen(p);

    int i = 0;
    int j = 0;
    while(i<=slen && j<=plen)
    {
        if(s[i]=p[j])
        {
            i++;
            j++;
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }
    if(j==plen)
        return i - j;
    else
        return (-1);
}
int main()
{
    char *s=new char(len), *p=new char(len);
    cin >> s >> p;
    int k=violentmatch(s,p);
    cout << k;
    return k;
}
//problem exists that when s and p can't match