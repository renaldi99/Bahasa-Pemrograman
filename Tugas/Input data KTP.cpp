#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char nama[30];
	char NIK[20];
	char ttl[40];
	char jeniskelamin[10];
	char alamat[100];
	char agama[10];
	char statusperkawinan[10];
	char pekerjaan[20];
	char kewarganegaraan[10];
	char berlakuhingga[20];
	cout<<"Input Data KTP\n";
	cout<<"NIK                  : ";
	cin.getline(NIK,20);
	cout<<"Nama                 : ";
	cin.getline(nama,30);
	cout<<"Tempat/tanggal lahir : ";
	cin.getline(ttl,40);
	cout<<"Jenis kelamin        : ";
	cin.getline(jeniskelamin,10);
	cout<<"Alamat               : ";
	cin.getline(alamat,100);
	cout<<"Agama                : ";
	cin.getline(agama,10);
	cout<<"Status perkawinan    : ";
	cin.getline(statusperkawinan,10);
	cout<<"Pekerjaan            : ";
	cin.getline(pekerjaan,20);
	cout<<"Kewarganegaraan      : ";
	cin.getline(kewarganegaraan,10);
	cout<<"Berlaku hingga       : ";
	cin.getline(berlakuhingga,20);
	
getch();

}
