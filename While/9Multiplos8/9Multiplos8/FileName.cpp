#include<iostream>

using namespace std;

int main()
{
    int mult8;
    mult8 = 8;
    while (mult8 <= 500)
    {
        cout << mult8;
        cout << " - ";
        mult8 = mult8 + 8;
    }
    return 0;
}