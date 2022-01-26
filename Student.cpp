#include <iostream>
using namespace std;
class student{
    public:
    string name;
    void xuat(){
        cout<<"Ten: "<<name;
    }
};
int main(){
    student s;
    s.name = "sieu";
    s.xuat();
    return 0;
}