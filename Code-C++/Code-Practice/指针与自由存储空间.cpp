#include<iostream>
using namespace std;
int main()
{
    int dounts = 6;
    double cups = 4.5;
    cout << "dounts' address: " << &dounts << endl;//&valuename shows the address of the value
    cout << "cups'address: " << &cups<<endl;


    //introduce a special type of varible: pointer
    //"*" is called "indirect value" or "dereferencing" operator
    //if manly is a pointer, *manly stands for the value which storged in that address and manly stands for an address
    int updates = 6;
    int *p_updates;//declare pointer to an int, you can use *pointer like an normal varible
    p_updates = &updates;
    cout << "updates=" << updates <<"="<< *p_updates<<endl;
    *p_updates = 1+*p_updates;//you can change pointer to change the value of the varible
    cout << "new updates=" << updates;
    

    //for every pointer you use, you need to input an "*" before it
    //you can initialize it when it was declared
    int higgens = 5;
    int *pt = &higgens;//the pointer "pt" was initialized instead of "*pt"


    //danger of pointer
    //you must innitialize the pointer to a suitable and definate address
}