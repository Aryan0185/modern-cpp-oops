#include<iostream>
class Base {// Base class
    public :
    void show() {
        std::cout << "Hello world." << std::endl;
    }
};
int main() {
    Base obj;// Create an object of Base class
    obj.show();
    return 0;
}