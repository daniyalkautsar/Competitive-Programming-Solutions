#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    int c = 0;
    for (int i = 0; i < a.length(); i++){
        if (a[i] == b[a.length()-1-i]) {
            c++;
        }
    }
    if (c == a.length()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
