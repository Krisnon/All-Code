#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char isbn[14];
    int sum=0;
    for (int i = 0; i < 12; i++)
    {
        cin >> isbn[i];
    }
    int j = 1;
    for (int i = 0; i < 12; i++)
    {
        if(isbn[i]=='-')
            continue;
        else
        {
            sum += (j) * (isbn[i]-'0');
            j++;
        } 
    }
    int rest = sum % 11;
    if(rest==10)
        rest = 'X';
    else
        rest += '0';
    if (rest == isbn[12])
    {
        cout << "Right"<< endl;    
    }
    else
    {
        isbn[12] = rest;
        for(int i=0;i<13;i++)
        {
            cout<<isbn[i];
        }
    }
    return 0;
}