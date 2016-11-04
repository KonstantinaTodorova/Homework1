#include <iostream>

using namespace std;

int main()
{
    // homework 1 task 03

   int a, b ;
   cout << "Enter two numbers." << endl;
   cin >> a >> b ;
   cout << ((a + b) % 2 == 0 ? (a + b) * 2 : (a + b) / 2) << endl ;

    return 0;
}
