#include<iostream>				//penggunaan struct 
#include<conio.h>				//Renaldi - 20170801396	
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;  

void garis(){
	cout<<"------------------------------------------------"<<endl; //fungsi garis
}


struct mahasiswa{
	char nama[100];
	char nim[20];
	float uts;
	float uas;
	float akhir;
};
mahasiswa mhs[1000];

float get_nilai(float a, float b){  //fungsi perhitungan nilai akhir
	return (a + b) / 2;
}

char get_grade(float nilai){       //deklarasi fungsi grade
	char grade;
	if(nilai >= 80)
	grade = 'A';
	else if(nilai >= 70)
	grade = 'B';
	else if(nilai >= 60)
	grade = 'C';
	else if(nilai >= 50)
	grade = 'D';
	else
	grade = 'E';
	return grade;
}

int main(){
	cout<<"Program Data Nilai Mahasiswa\n";
	cout<<"Dibuat oleh : \n";
	cout<<"================================================\n";
	cout<<"|   Nama = Renaldi                             |\n";
	cout<<"|   Nim  = 20170801396                         |\n";
	cout<<"================================================\n";
	cout<<"Enter Untuk Lanjut\n\n\n\n";
	system("pause");
	system("cls");
	atas:
	system("cls");
	int i,n;
	garis();
	cout<<"Program Hitung Data Mahasiswa Menggunakan Struct"<<endl;
	garis();
	cout<<"Dibuat Oleh = Renaldi - 20170801396\n\n\n";
	cout<<"Masukkan Data Yang Ingin Diinput = ";
	cin>>n;
	for (i=1; i<=n; i++){
		cout<<"Data Mahasiswa Ke - "<<i<<endl;
		cout<<"Nama           = ";
		scanf(" %[^\n]s",mhs[i].nama );               //pemanggilan struct
		cout<<"NIM            = ";
		cin>>mhs[i].nim;
		cout<<"Nilai UTS      = ";
		cin>>mhs[i].uts;
		cout<<"Nilai UAS      = ";
		cin>>mhs[i].uas;
		cout<<endl<<endl;
		mhs[i].akhir = get_nilai(mhs[i].uts, mhs[i].uas);
	}
	
	system("cls");
	cout<<"Daftar Nilai Mahasiswa "<<endl;
	cout<<"=======================================================================================================================\n";
	cout<<"|  No  |               Nama               |           Nim           |             Nilai             |                 |\n";
	cout<<"|      |            Mahasiswa             |        Mahasiswa        | ------------------------------|      Grade      |\n";
	cout<<"|      |                                  |                         |    UTS   |   UAS   |   Akhir  |                 |\n";	
	cout<<"=======================================================================================================================\n";	
	for (i=1; i<=n; i++){
		cout<<"| "<<setiosflags(ios::left)<<setw(4)<<i<<" |";
		cout<<" "<<setiosflags(ios::left)<<setw(32)<<mhs[i].nama<<" |";
		cout<<" "<<setiosflags(ios::left)<<setw(23)<<mhs[i].nim<<" |";
		cout<<" "<<setiosflags(ios::left)<<setw(8)<<mhs[i].uts<<" |";
		cout<<" "<<setiosflags(ios::left)<<setw(7)<<mhs[i].uas<<" |";
		cout<<" "<<setiosflags(ios::left)<<setw(8)<<mhs[i].akhir<<" |";
		cout<<" "<<setiosflags(ios::left)<<setw(15)<<get_grade(mhs[i].akhir)<<" |"<<endl;	
	}
	cout<<"|=========================================|=========================|==========|=========|==========|=================|\n";
	
	pilih:
	char pil;
	cout<<"\n\n====================================="<<endl;
	printf("Apa ingin input lagi[Y/N] : ");
	scanf("%s", &pil);
	if(pil=='Y' || pil=='y'){
		goto atas;
	}
	else if(pil=='N' || pil=='n'){
		goto keluar;
	}
	else
	{
		system("cls");
		cout<<"Pilihan Tidak Ada, Ulangi !!";
		goto pilih;
	}
	keluar:
	system ("cls");
	cout<<"Terima Kasih Telah Menggunakan Program ini";
	
	getch();
}
