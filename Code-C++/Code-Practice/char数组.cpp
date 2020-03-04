#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //C-风格字符串
    char dog[8] = {'b', 'e', 'a', 'u', 'x', ' ', 'i', 'i'};
    char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'};
    cout << dog;//二者均为char数组，但只有第二个为字符串，空字符即“\0”是字符串的结尾。各类输出函数逐个处理字符串中的字符直到到达空字符为止
    
    //另一种更加简单的初始化放式
    char bird[11] = "Mr.Cheeps";
    char fish[] = "Bubbles";//可以空出数组长度使其自动计数，且用引号括起来的字符串自带空字符
    //由于空字符的存在，应当保证建立的数组至少比所需位数多一位
    
    //注意赋值时的一点小问题
    char shirt_size = 'S';//将83赋值给变量
    //char shirt_size = "S"; 
    //其中“S”表示两个字符（S和\0），且实际上“S”表示的是字符串所在的内存地址，上句在尝试将一个内存地址赋给shirt_size


    //the function included in the cstring head file
    //format: strcpy(charr1,charr2) & strcat(charr1,charr2)
    char charr1[20];
    char charr2[20] = "jaguar";
    strcpy(charr1, charr2);//copy what in charr2 to charr1
    strcat(charr1, charr2);//add what in charr2 to the end of charr1


    //length of an array
    int len = strlen(charr1);//to get the length of an array
}