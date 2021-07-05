#include <iostream>
#include <fstream>
#include <string>
using namespace std; 
class Sinhvien{
	public: 
		string tenSV, maSV;
		int diemToan, diemVan, diemAnh;
		int namSinh, namHienTai = 2021;
	public:
		Sinhvien()
		{
			this->tenSV = "";
			this->maSV = "";
			this->namSinh = 0;
			this->diemToan = this->diemVan = this->diemAnh = 0;
		}
		~Sinhvien()
		{
			this->tenSV = "";
			this->maSV = "";
			this->namSinh = 0;
			this->diemToan = this->diemVan = this->diemAnh = 0;
		}
		void set();
		void get();
		float diemTB(){
			return (this->diemToan + this->diemVan + this->diemAnh) / 3;
		}
		int Tuoi(){
			return namHienTai - namSinh;
		}
		string xepLoai(){
			double dtb = diemTB();
			if (dtb >= 9)
            {
                return  "A";
            }
            else if (dtb >= 7 && dtb < 9)
            {
                return  "B";
            }
            else if (dtb >= 5 && dtb < 7)
            {
                return "C";
            }
            else
            {
                return  "D";
            }
        
		}
    
};
void Sinhvien::set(){
	cout <<" Nhap vao ten sinh vien: ";
	fflush(stdin);
	getline(cin,this->tenSV);
	cout <<" Nhap vao ma sinh vien: ";
	getline(cin,this->maSV);
	cout <<" Nhap nam sinh: ";
	cin >> this->namSinh;
	cout << " Diem Toan : ";
	cin >> this->diemToan ;
	cout << " Diem Van : ";
	cin >> this->diemVan;
	cout << " Diem Anh : ";
	cin >> this->diemAnh;
}
void Sinhvien::get(){
	cout <<" Ten sinh vien " << this->tenSV <<endl;
	cout <<" Ma sinh vien " << this->maSV << endl;
	cout << " Nam Sinh : " << this->namSinh << "\t\t";
	cout << " Tuoi cua Ban " << this->Tuoi() << endl;
	cout << " Diem Toan " << this->diemToan << endl;
	cout << " Diem Van " << this->diemVan << endl;
	cout << " Diem Anh " << this->diemAnh << endl;
	cout << " Diem trung binh " << this->diemTB() << endl;
	cout << " Xep Loai " << this->xepLoai() << endl;
}
int main(){
	fstream f;
    Sinhvien obj;
    obj.set();
    obj.get();
    obj.diemTB();
    // mo flie va ghi vao file data
    f.open("DanhSachSV.txt", ios::out);
    f << "Ten sinh vien : " << obj.tenSV <<endl << "Ma sinh vien : " << obj.maSV << endl <<" Nam Sinh: " << obj.namSinh << endl << " Tuoi cua ban: "<< obj.Tuoi() << endl << " Diem toan = " << obj.diemToan << endl << " Diem Van = " << obj.diemVan << endl << " Diem Anh = " << obj.diemAnh << endl << " Diem trung binh = " << obj.diemTB() << endl << "Xep loai : " << obj.xepLoai() << endl;
    f.close();
    return 0;
	
}
