#include<iostream>
#include<string>
using namespace std;
int main()
{
    string figure;
    getline(cin, figure);
    int len,kind=0;
    int point = 0;
    len = figure.length();
    for(int i = 0; i < len;i++)
    {
        if(figure[i]=='.')
        {
            kind = 1;
            point = i;
            break;
        }
        if(figure[i]=='/')
        {
            kind = 2;
            point = i;
            break;
        }
        if(figure[i]=='%')
        {
            kind = 3;
            break;
        }
    }
    if(kind==0)
    {
        int identify = 0;
        for (int i = 0; i < len;i++)
        {
            if(figure[i]!='0')
            {
                identify = i;
            }
            if(figure[i]=='0')
                continue;
        }
        for (int i = identify; i >= 0;i--)
        {
            cout << figure[i];
        }
    }
    if(kind==1)
    {
        int identify=0;
        for (int i = 0; i < point;i++)
        {
            if(figure[i]!='0')
            {
                identify = i;
            }
            if(figure[i]=='0')
                continue;
        }
        for (int i = point-identify-1; i < point;i++)
        {
            cout << figure[point - i - 1] - '0';
        }
        identify = 0;
        for (int i = point+1; i < len;i++)
        {
            if(figure[i]!='0')
            {
                identify = i;
                break;
            }
        }
        if(identify==0)
        {
            cout << "."
                 << "0";
        }
        else
        {
            cout << ".";
            for (int i = point+1; i <=len-identify+point;i++)
            {
                cout << figure[len - i + point]-'0';
            }
        }
    }
    if(kind==2)
    {
        int identify=0;
        for (int i = 0; i < point;i++)
        {
            if(figure[i]!='0')
            {
                identify = i;
            }
            if(figure[i]=='0')
                continue;
        }
        for (int i = point-identify-1; i < point;i++)
        {
            cout << figure[point - i - 1] - '0';
        }
        cout << "/";
        identify = 0;
        for (int i = point+1; i < len;i++)
        {
            if(figure[i]!='0')
            {
                identify = i;
            }
            if(figure[i]=='0')
                continue;
        }
        for (int i = identify; i > point; i--)
        {
            cout << figure[i] - '0';
        }
    }
    if(kind==3)
    {
        int identify=0;
        for (int i = 0; i < len - 1;i++)
        {
            if(figure[i]!='0')
            {
                identify = i;
            }
            if(figure[i]=='0')
                continue;
        }
        for (int i = identify; i >= 0;i--)
        {
            cout << figure[i];
        }
        cout << "%";
    }
    return 0;
}