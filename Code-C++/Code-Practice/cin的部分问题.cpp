#include<iostream>
using namespace std;
int main()
{
    char name[20];
    char dessert[20];
    cin >> name;//输入Alistair Dreeb，按下回车后结果就已显示
    cin >> dessert;
    cout << dessert << '\n'
         << name;
    //cin函数用空白（空格，制表符和换行符）来确定字符串的结束位置
    //同样，使用cin函数不能规避输入字符串比目标数组长的问题
}