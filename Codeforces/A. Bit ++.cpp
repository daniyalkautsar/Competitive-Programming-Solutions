#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    cin >> a;
    string arr[a];
    int b = 0;
    for (int i = 0; i < a; i++){
        cin >> arr[i];
        if (arr[i] == "X++" || arr[i] == "++X") {
            b += 1;
        } else if (arr[i] == "X--" || arr[i] == "--X") {
            b-= 1;
        }
    }
    cout << b;
}
