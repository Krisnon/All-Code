#include<iostream>
int main()
{
    using namespace std;
    //function1:getline()
    //format:cin.getline(name,arsize);
    char name[20];
    char dessert[20];

    cin.getline(name, 20);//avoid the problems caused by function(cin),ignore the space between
    cin.getline(dessert, 20);
    cout << dessert << '\n';
    cout << name;

    
    //function2:get()
    //format1: cin.get(name,arsize)
    cin.get(name, 20);
    cin.get(dessert, 20);
    //have no chance to input dessert because after the first use, enter is still in the input queue, 
    //and the second use consider enter the end of the input and get nothing
    cout << dessert << '\n';
    cout << name;
    //you can use the transfer method below
    cin.get(name, 20);
    cin.get();
    cin.get(dessert, 20);

    
    //concatenate membr functions
    cin.get(name, 20).get();//this is ok to use
    //also ok to use
    cin.getline(name, 20).getline(dessert, 20);
    //you can only concatenate 2 function at once


    //read a empty line
    //function(cin.get()) will set a failbit to prevent upcoming input after read an empty line
    //it can be clear by function(cin.clear())


    //input string is longer than the assigned space
    //getline() and get() will leave the extra characters in the input queue
    //getline() will set a failbit to prevent upcoming input


    //function cin will leave enter in the queue too
    //do remember to use get() to erase the enter
}