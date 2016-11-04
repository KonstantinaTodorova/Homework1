#include <iostream>

using namespace std;

int main()
{
    // homework 1 task 02
    int a, b, c ;
    cout << "Enter three numbers." ;
    cin >> a >> b >> c ;
    if ( a == 0 || b == 0 || c == 0 )
    {
        cout << " 0 " << endl ;
    }
    else if ( ( a > 0 && b > 0 && c > 0 )
        || ( a < 0 && b < 0 && c > 0 )
        || ( a > 0 && b < 0 && c < 0)
        ||  (a < 0 && b > 0 && c < 0) )
    {
        cout << " + " << endl ;
    }

    else
    {
        cout << " - " << endl ;
    }

    return 0;
}
