#include<iostream>
#include<string>
#include<cstdio>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    string word, sen;
    getline(cin, word);
    getline(cin, sen);
    int lenw, lens,time=0,position=0;
    lenw = word.length();
    lens = sen.length();
    for (int i = 0; i < lenw;i++)
    {
        word[i] = toupper(word[i]);
    }
    for (int i = 0; i < lens;i++)
    {
        sen[i] = toupper(sen[i]);
    }
    for (int i = 0; i < lens - lenw;i++)
    {
        for (int j = 0; j < lenw;j++)
        {
            if(sen[j+i]!=word[j])
                break;
            if(i>0&&sen[i-1]!=' ')
                break;
            if (j == lenw-1 && (sen[j + i + 1] == ' ' || j + i == lens - 1)&&sen[j+i]==word[j])
            {
                time++;
                if(time==1)
                    position = i;
                break;
            }
        }
    }
    if(time==0)
        cout << -1;
    else
        cout << time << " " << position;
    return 0;
}