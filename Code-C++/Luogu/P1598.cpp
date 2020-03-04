#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int frequence[26],max=0;
    string line;
    for (int i = 0; i < 4;i++)
    {
        getline(cin, line);
        int len;
        len = line.length();
        for (int i = 0; i < len;i++)
        {
            if(line[i]>='A'&&line[i]<='Z')
            {
                frequence[line[i] - 'A' ]++;
            }
        }
    }
    for (int i = 0; i < 26;i++)
    {
        if(frequence[i]>max)
        {
            max = frequence[i];
        }
    }
    for (int i = 0; i < max;i++)
    {
        for (int i = 0; i < 26;i++)
        {
            if(frequence[i]>=max)
                printf("* ");
            else
                printf("  ");
        }
        cout << endl;
    }
    for (int i = 0; i < 26;i++)
    {
        printf("%c", i + 'A');
    }
        return 0;
}