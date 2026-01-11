#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;   // Data hiding

public:
    void setBalance(int b) {
        if (b >= 0) {
            balance = b;
        }
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.setBalance(5000);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}
