#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string password;
    cin >> n >> password;
    int len = password.length();
    for (int i = 0; i < len;i++)
    {
        if(password[i]+n-'a'<26)
            password[i] = password[i] + n;
        else
            password[i] = password[i] + n - 26;
    }
    cout << password;
}