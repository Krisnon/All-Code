//列表初始化即在创建数组后初始化数组时采用大括号
#include<iostream>
using namespace std;
int main()
{
    double earnings[4]{1, 2, 3, 4};//初始化可以不加括号
    float balances[100] = {};//all elements set to 0
    //注意列表初始化禁止缩窄转换
}