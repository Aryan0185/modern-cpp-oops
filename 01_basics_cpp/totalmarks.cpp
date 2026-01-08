#include<iostream>
using namespace std;
class student{
    int roll,marks_math,marks_phy,marks_chem;
    public:
    void getdata(){
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter marks in Mathematics: ";
        cin>>marks_math;
        cout<<"Enter marks in Physics: ";
        cin>>marks_phy;
        cout<<"Enter marks in Chemistry: ";
        cin>>marks_chem;
    }
    float Total_marks = marks_math+marks_phy+marks_chem;
    void display(){
        cout<<"Roll Number: "<<roll<<endl;
        cout<<"Marks in Mathematics: "<<marks_math<<endl;
        cout<<"Marks in Physics: "<<marks_phy<<endl;
        cout<<"Marks in Chemistry: "<<marks_chem<<endl;
        cout<<"Total Marks: "<<Total_marks<<endl;
        cout<<"Percentage: "<<(Total_marks/3.0)<<"%"<<endl;
    }
};
int main(){
    int n;
    cout<<"The number of students."<<endl;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        s[i].getdata();
    }
    for(int i=0;i<n;i++){
        s[i].display();
    }
    return 0;
}