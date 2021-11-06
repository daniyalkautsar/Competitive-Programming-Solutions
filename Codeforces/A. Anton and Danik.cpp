#include <iostream>
#include <string>

using namespace std;

int main()
{
    int c;
    string match;
    string b = "AD";
    cin >> c;
    cin >> match;
    int a = 0;
    int d = 0;
    for(int i = 0; i < c; i++){
        if (match[i] == b[0]){
            a++;
        } else {
            d++;
        }
    }
    if (a > d) {
        cout << "Anton";
    } else if (a < d) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
}
