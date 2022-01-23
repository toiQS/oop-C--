#include <iostream>
using namespace std;
class Student{
    public:
    string Name;
    void Nhap();
    void Xuat();
    // void Student::Nhap(){
    //     cout<<"Nhap Ho Ten: "<<endl;
    //     cin>>Name;
    // }
    void Student::Xuat(){
        cout<<"Ten Sinh Vien: "<<Name;
    }
};
int main(){
    Student s;
    s.Name = "Sieu";
    s.Xuat();
    return 0;
}