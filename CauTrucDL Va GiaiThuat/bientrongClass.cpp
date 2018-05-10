#include <iostream>
using namespace std;

class LopHocLapTrinh
{
public:
LopHocLapTrinh(){
	name="LLLLLL";
} 
LopHocLapTrinh(string TenGi){
	name=TenGi;
} 
private: string name;
public:
	void setName( string TenGi){
		name=TenGi;
	}
	string getName()
	{
		return name + " rat de hieu!";
	}
};

int main()
{
	LopHocLapTrinh lhlt;
	cout<<lhlt.getName()<<endl;
	lhlt.setName("Lop hoc C++");
	cout<<lhlt.getName()<<endl;

	LopHocLapTrinh lhlt2("Lop hoc thu 2");
	cout<<lhlt2.getName()<<endl;

}