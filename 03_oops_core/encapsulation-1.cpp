#include<iostream>
using namespace std;
class Test {
private:
    int x;
public:
    void set(int a) {
        x = a;
    }
    int get() {
        return x;
    }
};

int main() {
    Test t;
    t.set(10);
    cout << t.get();
}
