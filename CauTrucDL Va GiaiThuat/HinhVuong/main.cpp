// #include "hinhvuong.h"
#include <iostream>
using namespace std;


class HinhVuong
{
public:
	int chieuCao;
	int chieuRong;
	int TinhDienTich();
};

int HinhVuong::TinhDienTich(){
		return chieuCao * chieuRong;
}
int main()
{
	HinhVuong hv;
	hv.chieuCao=4;
	hv.chieuRong=2;
	cout<<hv.TinhDienTich()<<endl;
	return 0 ;

}