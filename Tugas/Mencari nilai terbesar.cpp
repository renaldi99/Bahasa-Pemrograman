#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int bil1,bil2,max;
	cout<<"\t\t\t Program Mencari Nilai Terbesar "<<endl;
	cout<<"Input bil1 = ";
	cin>>bil1;
	cout<<"Input bil2 = ";
	cin>>bil2;
	if (bil1>bil2) {
		max = bil1;
	}else{
		max = bil2;
	}
	cout<<"\nTampilkan Nilai Terbesar = "<<max;	
	return 0;
}
