#include <iostream>
using namespace std;
int main()
{
    // for (int a = 0; a <= 10; a++)
    // {
    //     cout << a << endl;
    // }
    int age = 88;

    if (age <= 18)
    {
        cout << "you can go to school" << endl;
    }
    if (age >= 18 && age <= 30)
    {
        cout << "you can go to college" << endl;
    }
    else
    {
        cout << "You are eligible for marriage or Job" << endl;
    }
    return 0;
}