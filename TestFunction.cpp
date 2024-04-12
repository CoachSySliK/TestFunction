#include <iostream>

using namespace std;

string rub(int ending) {
    if (ending % 10 == 0 || ending % 10 >= 5 || (ending / 10) % 10 == 1) {
        return " рублей";
    }
    else if (ending % 10 == 1) {
        return " рубль";
    }
    else {
        return " рубля";
    }
}

int main()
{
    int x = 34;
    cout << x << rub(x) << endl;
    x = 35;
    cout << x << rub(x) << endl;
    x = 36;
    cout << x << rub(x) << endl;
    x = 128;
    cout << x << rub(x) << endl;
    x = 112;
    cout << x << rub(x) << endl;
    x = 300;
    cout << x << rub(x) << endl;
    x = 0;
    cout << x << rub(x) << endl;
    x = 51;
    cout << x << rub(x) << endl;
}

