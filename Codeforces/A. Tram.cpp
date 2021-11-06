#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int in[n];
    int out[n];
    int cond = 0;
    int max = 0;
    for (int i = 0; i < n; i++){
        cin >> out[i] >> in[i];
        cond = cond + in[i] - out[i];
        if (max < cond) {
            max = cond;
        }
    }
    cout << max;
}
