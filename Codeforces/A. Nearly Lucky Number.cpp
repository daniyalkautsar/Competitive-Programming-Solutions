#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    string nn = to_string(n);
    string luck = "47";
    int z = 0;
    for (int i = 0; i < nn.length(); i++){
        if (nn[i] == luck[0] || nn[i] == luck[1]){
            z++;
        }
    }
    if (z == 4 || z == 7){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
