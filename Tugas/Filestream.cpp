#include <iostream>//sebuah header yang mengandung Input/Output yang umumnya hanya berisi Cin dan Cout. 
#include <fstream> //Menggunakan fstream, program bisa membuat penulisan pada file teks yang biasanya berformat (.txt).
#include <conio.h> //sebuah fungsi untuk menampilkan perintah getch untuk menahan tampilan. bentuk umum : getch();.
#include <cstdlib> //merupakan file header yang berfungsi untuk operasi pembanding dan operasi konversi.
using namespace std;

struct mahasiswa 
{
	char nama[30];
};

mahasiswa ueu;
char fileInput[15], fileInput2[15], fileInput3[15];

int garis()  //perulangan pada fungsi garis 
{
	for(int i=0; i<70; i++)
	{
		cout<<"-";
	}
	cout<<endl;
}

void utama(){
	cout<<"|---------------------------------------------|\n";
	cout<<"|  Nama : Renaldi                             |\n";
	cout<<"|  Nim  : 20170801396                         |\n";
	cout<<"|  Tugas FSTREAM                              |\n";
	cout<<"|---------------------------------------------|\n";
	cout<<endl<<endl;
	cout<<"Tekan Enter Untuk Lanjut\n";
	system("pause"); //berguna untuk menahan tampilan sementara atau pause
	system("cls"); //penggunaan fungsi untuk membersihkan layar tampilan
}

int menu() //menu utama
{	
	cout<<"\t     === Data Mahasiswa ==="<<endl;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"Silahkan pilih kode yang Anda inginkan : "<<endl;
	cout<<"[1] Input Data"<<endl;
	cout<<"[2] Tambah Data"<<endl;
	cout<<"[3] Baca Data"<<endl;
	cout<<"[4] Gabung Data"<<endl;
	cout<<"[5] Keluar"<<endl;
	cout<<"Masukkan kode yang Anda pilih [1/2/3/4/5] : ";
}

int input_data() //menginput data pada ofstream
{
	cout<<"Masukkan nama file (.txt) : "; 
	cin.getline(fileInput,15); //memasukan sebuah objek nama file inputan dalam ofstream 
	ofstream simpan (fileInput);//untuk menyimpan file inputan
	system("cls");
	cout<<"\nNama\t    : ";
	cin.getline(ueu.nama,30);//memasukkan objek isi dalam ofstream
	simpan<<ueu.nama<<endl;
	cout<<"\n\n\n"; system("pause");
}

int tambah_data() //menambahkan data pada ofstream
{
	cout<<"Masukkan nama file(.txt) : ";
	cin.getline(fileInput,15);
	ofstream simpan (fileInput, ios::app);
	system("cls");
	cout<<"\nNama\t    : ";
	cin.getline(ueu.nama,30);
	simpan<<ueu.nama<<endl;
	cout<<"\n\n\n"; system("pause");
}

int baca_data() //membaca data pada ofstream
{
	cout<<"Masukkan nama file (.txt): "; 
	cin>>fileInput;
	ifstream buka (fileInput);
	if(buka.good()) //proses pencarian nama data untuk melihat atau membaca isi data tersebut
	{
		while(!buka.eof())
		{
			system("cls");
			while(buka)
			{ 
				buka.getline(ueu.nama,30);	
				cout<<ueu.nama<<endl;
			}
		}
		cout<<"\n\n\n"; system("PAUSE");
	}
	else cout<<"file tidak ada"<<endl;
	getch();
}

int gabung_data() //menggabungkan sebuah data file ekstensi(.txt) pada ofstream
{
	cout<<"Masukkan nama file ke-1 (.txt): ";
	cin.getline(fileInput2,15);
	cout<<"Masukkan nama file ke-2 (.txt): ";	
	cin.getline(fileInput3,15);
	ifstream buka1 (fileInput2); //proses menggabungkan antara beberapa data (.txt) dalam ofstream
	ifstream buka2 (fileInput3);
	
	ofstream gabung("gabung.txt");
	ofstream gabung2("gabung.txt", ios::app);
	
	while(buka1)
	{
		buka1.getline(ueu.nama,30);	
		gabung<<ueu.nama<<"\n";
	}
	buka1.close();
	gabung.close(); 
	

	while(buka2)
	{
		buka2.getline(ueu.nama,30);	
		gabung2<<ueu.nama<<"\n";
	}
	buka2.close();
	gabung2.close();
	
} 

int main()
{
	char kode;
	utama();//fungsi pemanggilan void utama

	data_aku:
	system("cls"); menu(); cin>>kode; cin.ignore(); system("cls");

   	switch (kode) //penggunaan fungsi pemilihan switch/case
   	{
   		case '1': input_data(); goto data_aku;
   		case '2': tambah_data(); goto data_aku;
		case '3': baca_data(); goto data_aku;
		case '4': gabung_data(); goto data_aku;
		case '5': cout<<"\n\n\t ----- Terima Kasih Telah Menggunakan Program Ini ------"<<endl; break;
   	 	default : cout<<"\n\n\tMaaf, Perintah Yang Anda Masukkan Salah\n\n"<<endl; 
				 system("PAUSE"); goto data_aku;
   	}
   	return 0;
}


