/* 
 * NIM : 21.12.2138
 * Nama : IKA PURWANTI
 * Kelas : 21 S1SI 05
 *
 */
 
#include <iostream>
using namespace std;

void menu();

int kode[7], jml[7], harga_satuan, bayar[7], total_semua=0, jml_menu, diskon, total_akhir;
char lagi;

main(){
	cout<<endl;
	cout<<"-- Program Kasir Kantin --"<<endl;
	cout<<endl;
	cout<<endl;
	
	menu();
	
	cout<<"Note : "<<endl;
	cout<<"1. Anda akan mendapatkan diskon sebesar 10% jika total minimal Rp. 50.000-,"<<endl;
	cout<< endl;
	cout<<endl;
	
	cout<<"------------------------------------------"<<endl;
	cout<<"Ada berapa menu yang akan anda pesan : ";
	cin>>jml_menu;
	cout<<"Inputkan kode makanan/minuman beserta jumlah"<<endl;
	cout<<endl;
	
	for (int i=0; i<jml_menu; i++) {
		cout<<"Kode   : ";
		cin>>kode[i];
		
		if (kode[i] == 1){
			cout<<"1. Bakso"<<endl;
			cout<<"  -- Rp.10.000-,"<<endl;
			harga_satuan = 10000;
		}
		else if(kode[i] == 2){
			cout<<"2. Mie Ayam"<<endl;
			cout<<"  -- Rp.8.000-,"<<endl;
			harga_satuan = 8000;
		}
		else if(kode[i] == 3){
			cout<<"3. Nasi Goreng"<<endl;
			cout<<"  -- Rp.13.000-,"<<endl;
			harga_satuan = 13000;
		}
		else if(kode[i] == 4){
			cout<<"4. Mie Goreng"<<endl;
			cout<<"  -- Rp.11.000-,"<<endl;
			harga_satuan = 11000;
		}
		else if(kode[i] == 5){
			cout<<"5. Es Teh"<<endl;
			cout<<"  -- Rp.3.000-,"<<endl;
			harga_satuan = 3000;
		}
		else if(kode[i] == 6){
			cout<<"6. Es Jeruk"<<endl;
			cout<<"  -- Rp.5.000-,"<<endl;
			harga_satuan = 5000;
		}
		else if(kode[i] == 7){
			cout<<"7. Air Mineral"<<endl;
			cout<<"  -- Rp.4.000-,"<<endl;
			harga_satuan = 4000;
		}
		else {
			cout<<"Kode yang anda inputkan salah"<<endl;
		}
	
		cout<<"Jumlah : ";
		cin>>jml[i];
 		
		bayar[i]= harga_satuan*jml[i];
		cout<<"  ---> = Rp. "<<bayar[i]<<endl;
		cout<<endl;
	
	}
	cout<<"--------------------------------------------------------"<<endl;
	total_semua=total_semua+bayar[0]+bayar[1]+bayar[2]+bayar[3]+bayar[4]+bayar[5]+bayar[6];
	cout<<"Total Semua : Rp. "<<total_semua<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<endl;
	if(total_semua >= 50000){
		cout<<"  -- SELAMAT!! --"<<endl;
		cout<<"Anda mendapatkan diskon 10%"<<endl;
		diskon=0.1*total_semua;
		
	}
	else{
		cout<<"Anda tidak mendapat diskon"<<endl;
		diskon=0;
	}
	cout<<endl;	
	total_akhir=total_semua-diskon;
	cout<<endl;
	cout<<"               Riwayat Pembelian"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| Kode | Jumlah |  Harga satuan  |    Total     | "<<endl;
	cout<<"-------------------------------------------------"<<endl;
	for(int x=0; x<jml_menu;x++){
		cout<<"|  "<<kode[x]<<"   |    "<<jml[x]<<"   |  ";
		if(kode[x] == 1){
			cout<<"Rp. 10.000-,";
		}else if(kode[x] == 2){
			cout<<"Rp.  8.000-,";
		}
		else if(kode[x] == 3){
			cout<<"Rp. 13.000-,";
		}
		else if(kode[x] == 4){
			cout<<"Rp. 11.000-,";
		}
		else if(kode[x] == 5){
			cout<<"Rp.  3.000-,";
		}
		else if(kode[x] == 6){
			cout<<"Rp.  5.000-,";
		}
		else if(kode[x] == 7){
			cout<<"Rp.  4.000-,";
		}cout<<"  | Rp.  "<<bayar[x]<<"-, |"<<endl;
	}
	cout<<"-------------------------------------------------"<<endl;
	cout<<"|           Total Semua          | Rp. "<<total_akhir<<"-, |"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"        --------- Terima Kasih ---------"<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"NIM	: 21.12.2138"<<endl;
	cout<<"Nama	: IKA PURWANTI"<<endl;
	cout<<"Kelas	: 21 S1SI 05"<<endl;
	
	
}

const int nama=7;
const int harga=2;
void menu(){
	string menu [nama][harga]{
	{"Bakso", "Rp. 10.000"},
	{"Mie Ayam", "Rp. 8.000"},
	{"Nasi Goreng", "Rp. 13.000"},
	{"Mie Goreng", "Rp. 11.000"},
	{"Es Teh", "Rp. 3.000"},
	{"Es Jeruk", "Rp. 5.000"},
	{"Air Mineral", "Rp. 4.000"}
	};
	
	cout<<"           Daftar Menu"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"| Kode |     Nama    |    Harga   |"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"|  1.  | "<<menu[0][0]<<"       | "<<menu[0][1]<<" |"<<endl;
	cout<<"|  2.  | "<<menu[1][0]<<"    | "<<menu[1][1]<<"  |"<<endl;
	cout<<"|  3.  | "<<menu[2][0]<<" | "<<menu[2][1]<<" |"<<endl;
	cout<<"|  4.  | "<<menu[3][0]<<"  | "<<menu[3][1]<<" |"<<endl;
	cout<<"|  5.  | "<<menu[4][0]<<"      | "<<menu[4][1]<<"  |"<<endl;
	cout<<"|  6.  | "<<menu[5][0]<<"    | "<<menu[5][1]<<"  |"<<endl;
	cout<<"|  7.  | "<<menu[6][0]<<" | "<<menu[6][1]<<"  |"<<endl;
	cout<<"-----------------------------------"<<endl;
}
