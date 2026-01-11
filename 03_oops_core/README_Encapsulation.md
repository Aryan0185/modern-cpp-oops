# Encapsulation in Object-Oriented Programming (OOPS)

## 📌 What is Encapsulation?
Encapsulation is one of the core concepts of Object-Oriented Programming (OOPS).  
It is the process of **wrapping data members and member functions into a single unit (class)** and **restricting direct access to data** using access specifiers.

In simple words:
> **Encapsulation = Data Hiding + Controlled Access**

---

## 🧠 Why Encapsulation is Important?
- Protects data from unauthorized access
- Improves security of the program
- Makes code easier to maintain and modify
- Prevents accidental data modification
- Helps in real-world modeling

---

## 🔐 How Encapsulation Works
Encapsulation is achieved by:
- Declaring data members as `private`
- Providing public methods (`getters` and `setters`) to access or modify data

---

## 💻 Example in C++

```cpp
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
