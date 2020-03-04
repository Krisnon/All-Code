#include<iostream>
using namespace std;
int main()
{
    struct inflatable
    {
        char name[20];
        float height;
        double weight;
    };//this is how to create struct
    //you can directly put the variables you want to create behind the statement
    
    
    //create a value of struct type, which include the three variable
    inflatable Z =
    {
        "Zhang Kailun",
        1.72,
        69.3,
    };//C++-style("struct" is optional), use "{}" to initialize the variable 
    struct inflatable Y =
    {
        "Yan Jiaming",
        1.84,
        80.4,
    };//C-style
    //"=" is optional
    //you can visit sepecific character of array in the struct
    //use "{ }"(empty {}) to innitialize the variable will set every member to 0, every character of the array will be set to 0.
    
    
    //use"."to visit the members of the variable
    double weight_Yan = Y.weight;//visit the member weight of Y
    double height_Zhang = Z.height;//ditto
    cout << weight_Yan << endl
         << height_Zhang;


    //memberwise assignment
    //example
    inflatable S;
    S = Y;//just like this
    cout << "\n"
         << S.name << endl
         << S.height << endl
         << S.weight;//each member is assigned


    //struct array
    //example
    inflatable classmates[45];//array of 45 inflatable structures
    //use the same way to assign
    inflatable left[2] =
        {
            {"Zhou Tian", 1.75, 75.0},
            {"Zhang Yannan", 1.65, 49.0}
        };
    //bit field supported
}