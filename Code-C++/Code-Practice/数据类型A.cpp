#include<iostream>
using namespace std;
int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield); //fixed-point
    float tub = 10.0 / 3.0;
    float tub1 = 10 / 3;
    double mint = 10.0 / 3.0;
    double mint1 = 10 / 3;
    const float million = 1.0e6;

    int thorn = 47;
    (long) thorn;
    double (thorn);
    static_cast<long>(thorn); //强制类型转换，不必为变量，可直接为数字

    auto x = 47;//auto是一种自动确定变量类型的类型，但容易导致类型混乱

    cout << "tub" << tub<<endl;
    cout << million * tub<<endl;
    cout << tub1 << endl;
    cout << "mint" << mint << endl;
    cout << million * mint << endl;
    cout << mint1;
}
//类型转换通常会导致精度下降与有效位数下降的结果
//将0赋给bool变量时，会转换为false，非零数会转换为true
//使用大括号进行初始化称为列表初始化，常用于给复杂的数据类型提供值列表。不允许缩窄（变量类型不能表示赋给他的值）