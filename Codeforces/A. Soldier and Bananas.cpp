#include <iostream>

using namespace std;

int main()
{
    int k, n, w, sum;
    cin >> k >> n >> w;
    sum = k*(1+w)*w/2;
    if (sum > n) {
        cout << sum - n;
    } else {
        cout << 0;
    }
}