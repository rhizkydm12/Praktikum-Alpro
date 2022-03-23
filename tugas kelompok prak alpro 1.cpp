#include <iostream>
#include <conio.h>
using namespace std;

class Hitung{
	friend ostream& operator<<(ostream&, const Hitung&);
	friend istream& operator>>(istream&, Hitung&);
public:
	Hitung();
	void hitung_jumlahnya(){
		x=c*a;y=d*b;
		jumlah=x+y;
		if(jumlah>=45000){
			diskon=jumlah*0.1;
			jumlah-=diskon;
			cout<<"Jumlah = "<<jumlah<<endl;
		}else{
			cout<<"Jumlah = "<<jumlah<<endl;
		}
	}//rumus
private:
	int a=17000, b=21000, x, y, c, d;
	float jumlah, diskon=0, pot;//variable
};
Hitung::Hitung() {
	cout<<"Program Kasir\n";
	cout<<"Ayam Goreng = 17000\nAyam Bakar = 21000\nSilahkan Input...\n\n";
}
istream& operator>>(istream& in, Hitung& masukan) {//input
	cout<<"Masukkan Jumlah Ayam Goreng : "; in>>masukan.c;
	cout<<"Masukkan Jumlah Ayam Bakar : "; in>>masukan.d;
	return in;
}
ostream& operator<<(ostream& out, const Hitung& keluaran) {
	cout<<"==============================="<<endl;
	out<<"Struk Pembayaran "<<endl;
	cout<<"==============================="<<endl;
	out<<"Jumlah Ayam Goreng \t: "<<keluaran.c<<endl;//output
	out<<"Harga Total Ayam Goreng : "<<keluaran.x<<endl;
	out<<"Jumlah Ayam Bakar \t: "<<keluaran.d<<endl;
	out<<"Harga Total Ayam Bakar\t: "<<keluaran.y<<endl;
	out<<"Diskon \t\t\t: 10%"<<endl;
	out<<"Potongan Harga\t\t: "<<keluaran.diskon<<endl;
	out<<"Harga Jumlah total \t: "<<keluaran.jumlah<<endl;
	cout<<"==============================="<<endl;
	return out;
}
main(){//manggil dari langit
	Hitung X;
	cin>>X;
	X.hitung_jumlahnya();
	cout<<X;
	getch();
	return 0;
}

