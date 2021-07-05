#include <iostream>
using namespace std;
class Phanso {
	private: 
		int tuSo, mauSo;
	public:
		Phanso()
		{
			tuSo = 0;
			mauSo = 1;
		}
		~Phanso()
		{
			tuSo = 0;
			mauSo = 1;
		}
		void set()
		{
			cout <<" Nhap Tu So: ";
			cin >> this->tuSo;
			cout << " Nhap Mau So: ";
			cin >> this->mauSo;
		}
		void get()
		{
			cout << this->tuSo << "/" << this->mauSo <<endl;	
		}
		Phanso Cong (Phanso obj1, Phanso obj2)
		{
			Phanso obj3;
			obj3.tuSo = obj1.tuSo * obj2.mauSo + obj1.mauSo * obj2.tuSo;
			obj3.mauSo = obj1.mauSo * obj2.mauSo;
			return obj3;
		}
		Phanso Tru (Phanso obj1, Phanso obj2)
		{
			Phanso obj3;
			obj3.tuSo = obj1.tuSo * obj2.mauSo - obj1.mauSo * obj2.tuSo;
			obj3.mauSo = obj1.mauSo * obj2.mauSo;
			return obj3;
		}
		Phanso Nhan (Phanso obj1, Phanso obj2)
		{
			Phanso obj3;
			obj3.tuSo = obj1.tuSo * obj2.mauSo ;
			obj3.mauSo = obj1.mauSo * obj2.mauSo;
			return obj3;
		}
		Phanso Chia (Phanso obj1, Phanso obj2)
		{
			Phanso obj3;
			obj3.tuSo = obj1.tuSo * obj2.mauSo ;
			obj3.mauSo = obj1.mauSo * obj2.tuSo;
			return obj3;
		}	
};
int main(){
	Phanso obj1, obj2, obj3;
	obj1.set();obj2.set();
	
	obj3 = obj3.Cong(obj1, obj2); obj3.get();
	obj3 = obj3.Tru(obj1, obj2); obj3.get();
	obj3 = obj3.Nhan(obj1, obj2); obj3.get();
	obj3 = obj3.Chia(obj1, obj2); obj3.get();
	return 0;
}
