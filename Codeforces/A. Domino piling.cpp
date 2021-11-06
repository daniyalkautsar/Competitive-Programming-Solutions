#include <iostream>

using namespace std;

int main()
{
    int c, r;
    cin >> c >> r;
    if ((c * r) % 2 == 0 ){
        cout << c * r / 2;
    } else {
        cout << ((c*r)-1)/2;
    }
}
