#include<iostream>
using namespace std;
class student{
    int s_roll;
    char s_name[20],s_subject[20];
    float s_fees;
    public :
    void getdata(){
        cout<<"Enter roll number: ";
        cin>>s_roll;
        cout<<"Enter name: ";
        cin>>s_name;
        cout<<"Enter subject: ";
        cin>>s_subject;
        cout<<"Enter fees: ";
        cin>>s_fees;
    }
    void displaydata(){
        cout<<"\nStudent Details:";
        cout<<"\nRoll Number: "<<s_roll;
        cout<<"\nName: "<<s_name;
        cout<<"\nSubject: "<<s_subject;
        cout<<"\nFees: "<<s_fees;
    }
};
int main(){
    int n;
    cout<<"Enter a student number of fill the details:\n";
    cin>>n;
    student s1[n];//s1[n] is a data handling array of objects
    for(int i=0;i<n;i++){
    s1[i].getdata();}
    for(int i=0;i<n;i++){
    s1[i].displaydata();}
    return 0;
}