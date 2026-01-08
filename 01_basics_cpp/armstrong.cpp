#include<iostream>
#include<cmath>
using namespace std;

class armstrong {
private:
    int num;

public:
    void getdata() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void check() {
        int temp = num;
        int digits = 0;

        // Count digits
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        int sum = 0;

        // Calculate Armstrong sum
        while (temp > 0) {
            int remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if (sum == num)
            cout << num << " is an Armstrong number." << endl;
        else
            cout << num << " is not an Armstrong number." << endl;
    }
};

int main() {
    armstrong a;
    a.getdata();
    a.check();
    return 0;
}
