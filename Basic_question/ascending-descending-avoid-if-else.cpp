#include <iostream>
using namespace std;

class order {
private:
    int x, y, z;

public:
    void input() {
        cout << "Enter three numbers: ";
        cin >> x >> y >> z;
    }

    void ascending() {
        int a = x, b = y, c = z;

        if (a > b) swap(a, b);
        if (a > c) swap(a, c);
        if (b > c) swap(b, c);

        cout << "Ascending order : " << a << " " << b << " " << c << endl;
    }

    void descending() {
        int a = x, b = y, c = z;

        if (a < b) swap(a, b);
        if (a < c) swap(a, c);
        if (b < c) swap(b, c);

        cout << "Descending order : " << a << " " << b << " " << c << endl;
    }
};

int main() {
    order o;
    o.input();
    o.ascending();
    o.descending();
    return 0;
}
