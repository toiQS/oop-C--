#include <iostream>
using namespace std;
class test{
    public:
    string name;
    void getInfor(){
        cout<<"ho ten sinh vien: "<<endl;
        cin>>name;
    };
    void show(){
        cout<<"Thong tin vua nhap: "<< name <<endl;
    }
};
int main(){
    test s;
    s.getInfor();
    s.show();
    return 0;
}