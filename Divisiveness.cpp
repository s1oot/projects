#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
   
    while (cin >> a >> b >> c){
        for (int i = a; i <= b; i++) {
            if (i%c == 0){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}