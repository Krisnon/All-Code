#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";

    cout << "Howdy? I'm " << name2;
    cout << " What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";//strlen()只计算不含空字符的部分
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    name2[3] = '\0';//可通过将某一位设置为\0的方式来截短字符
    cout << "the first 3 characters of my name is ";
    cout << name2;
}