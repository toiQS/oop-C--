#include <iostream>
using namespace std;
class S_P_hv{
    public:
    double dai;
    double rong;
    void getInfor(){
        cout<<"Nhap kich thuoc hinh vuong: "<<endl;
        cin>>dai>>rong;
    };
    void chuVi(){
       double chuvi = (dai + rong)*2;
       cout<<"chu vi hinh vuong: "<<chuvi;
    };
    void dienTich(){
        double dientich = dai * rong;
        cout<<"dien tich hinh vuong: "<<dienTich;
    }
};
int main(){
    S_P_hv hv;
    hv.getInfor();
    hv.chuVi();
    hv.dienTich();
    return 0;
}