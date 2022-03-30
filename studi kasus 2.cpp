#include <iostream>
using namespace std;

int main() 
	{	
	int jumlah, menu, total = 0, ak = 21000, ag = 17000, ug = 19000, cg = 20000, ar = 25000, ongkir;
	float diskon1 = 0.15, diskon2 = 0.35 , hargaFinal, jarak;
	char y;
	bool lanjut = true;	
		
  	while(lanjut == true) 
		{
  	cout<<"----------------------------------"<<endl;
  	cout<<"       Rumah Makan Kenyang        "<< endl;
 	cout<<"----------------------------------" <<endl;
  	cout << "         Daftar Menu            " << endl;
  	cout << "1. Ayam Geprek\t: Rp. 21000" << endl;
  	cout << "2. Ayam Goreng\t: Rp. 17000" << endl;
  	cout << "3. Udang Goreng\t: Rp. 19000" << endl;
  	cout << "4. Cumi Bakar\t: Rp. 20000" << endl;
  	cout << "5. Ayam Bakar\t: Rp. 25000" << endl;
    cout << "Masukkan Pilihan Menu : ";
    cin >> menu;
    cout << "Jumlah menu yang dipesan : ";
    cin >> jumlah;
  	//cout << "6. Slip Pembayaran" << endl;
  
  	switch(menu)
	{
    case 1 :
    	cout<<"++++++++++++++++++++++++++\n";
      	cout<<"Ayam Geprek\n";
      	total += ak * jumlah;
      	cout<<"Total harga : " << total << endl;
      	cout<<"++++++++++++++++++++++++++\n";
      	break;
    case 2 :
      	cout<<"++++++++++++++++++++++++++\n";
      	cout<<"Ayam Goreng\n";
      	total += ag * jumlah;
      	cout<<"Total harga : " << total << endl;
      	cout<<"++++++++++++++++++++++++++\n";
      	break;
    case 3 :
      	cout<<"++++++++++++++++++++++++++\n";
      	cout<<"Udang Goreng\n";
      	total += ug * jumlah;
      	cout<<"Total harga : " << total << endl;
      	cout<<"++++++++++++++++++++++++++\n";
      	break;
    case 4 :
      	cout<<"++++++++++++++++++++++++++\n";
      	cout<<"Cumi Goreng\n";
      	total += cg * jumlah;
      	cout<<"Total harga : " << total << endl;
      	cout<<"++++++++++++++++++++++++++\n";
      	break;
    case 5 : 
      	cout<<"++++++++++++++++++++++++++\n";
      	cout<<"Ayam Bakar\n";
      	total += ar * jumlah;
      	cout<<"Total harga : " << total << endl;
      	cout<<"++++++++++++++++++++++++++\n";
      	break;
    default :
    	cout << "Pesanan Yang Anda Masukkan Salah" << endl;
    break;
	}
  
  	cout << "pilih menu lain? (y/n) : ";
  	cin >> y;
  	if(y == 'y' || y == 'Y') 
	{
    	lanjut = true;
  	} 
	else if(y == 'n' || y == 'N') 
	{
		lanjut = false;
	}
}
  
  cout << "masukkan jarak rumah (dalam km) : ";
  cin >> jarak;
  	if(jarak <= 3) 
	{
		ongkir = 15000;
	} 
	else if(jarak > 3)
	{
    	ongkir = 25000;
  	}
  	
  if(total > 25000)
	{
		ongkir = ongkir - 3000;
    	hargaFinal = ongkir + total;
  	}
	else if(total > 50000) 
	{
    	ongkir = ongkir - 5000;
    	hargaFinal = ongkir + (total * diskon1);
  	}
  	else if(total > 150000) 
	{
    	ongkir = ongkir - 8000;
    	hargaFinal = ongkir + (total * diskon2);
  	}
 
  cout<<endl;	
  cout << "==============================" << endl;
  cout << "        Struk Pembelian       " << endl;
  cout << "     RUMAH MAKAN KENYANG      " << endl;
  cout << "==============================" <<endl;
  cout << "         Daftar Menu" << endl;
  cout << "1. Ayam Geprek\t: Rp. 21000" << endl;
  cout << "2. Ayam Goreng\t: Rp. 17000" << endl;
  cout << "3. Udang Goreng\t: Rp. 19000" << endl;
  cout << "4. Cumi Bakar\t: Rp. 20000" << endl;
  cout << "5. Ayam Bakar\t: Rp. 25000" << endl << endl;
  cout << "Harga pesanan = " << total << endl;
  cout << "Ongkir        = " << ongkir << endl;
  cout << "Total harga   = " << hargaFinal << endl;
  cout << endl;
  cout << "* Terima Kasih *" << endl;
  
  return 0;
}
