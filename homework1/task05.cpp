#include <iostream>

using namespace std;

int main()
{
    // Homework 1 task 05

    int num;
    cout << "Enter a integer number!" << endl;
    cin >> num;

    switch (num)
    {
    case 1 : case 2 : case 3 :
        cout << "num =" << num * 10 << endl;
        break;
    case 4 : case 5 : case 6 :
        cout << "num =" << num * 100  << endl ;
        break;
    case 7 : case 8 : case 9 :
        cout << "num =" << num * 1000 << endl ;
        break;
    default :
        cout << "Invalid input." << endl ;

    }
    return 0;
}
