#include<iostream>
class Base{
    private:
    std::string name;
    public:
    void show(){
        std::cout<<"Enter a Name: ";
        std::cin>>name;
    }
     void display(){
        std::cout<<"Name: "<<name<<std::endl;
     }
};
int main(){
    Base obj;
    obj.show();
    obj.display();
    return 0;
}