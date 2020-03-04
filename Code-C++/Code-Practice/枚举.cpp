#include<iostream>
using namespace std;
int main()
{
    enum spectrum //spectrum becomes the name of the new type
    {
        red,
        orange,
        yellow,
        green,
        blue,
        violet,
        indigo,
        ultraviolet //they are symbolic constant
    }; //the symbolic constant above correspond 0~7 and they are named enumerator(and 0~7 are the range of it)
    //(you can set the range, if the value of the biggest one is n, the range is 0~x, x is the minimum value of 2^y(2^y>x))
    spectrum black; //band a variable of type spectrum
    cout << black; //the first enumerator will be set to 0, and next one will be 1 and so on
    black = blue; //valid, they are of the same type
    //"black=3" is invaild bacause 3 is not a enumerator
    int color = black;//valid, spectrum type promoted to int


    //if you only want to use the constant, you can ignore the type name
    enum
    {
        Helen
    };


    //set the value of enumerator
    enum bits
    {
        one = 1,
        two = 2,
        three
    };
    //the latter one will be the former one plus 1

}