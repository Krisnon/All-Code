#include<iostream>
#include<string>//make string class available
using namespace std;
int main()
{
    //you can use C-style string to initialize it
    //string[x] to access to specific character
    //string can automatically adjust the length of it
    
    
    //you can assign a string with another string value
    string str1 = "Zhang";
    string str2 = " Kailun";
    string str3;
    str3 = str1 + str2;//use a string value to sddign another string value
    str1 += str2;//add str2 to the end of str1
    cout << str1 << '\n'
         << str3;
    getline(cin, str2);
    //use this to read an entire line in string class
    //use cin to read a word
    //also shows that getline() itself is a class method


    //get the length
    int len = str3.size();


    //raw string
    cout << R"(What a pity.)";
    //the escape character will be the character itself instead of the original effect
    //if you'd like to output "()", you should add characters except space, parenthese, and control characters and be same on both sides
    //example
    cout << R"+*&^((I might miss her so much.))+*&^";
}