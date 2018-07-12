#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	int nilai;
	cout<<"input nilai matakuliah = ";
	cin>>nilai;
	if(nilai>=85 && nilai <=100){
		cout<<"LULUS";
		cout<<"\nGrade A";
	}
	if(nilai>=75 && nilai <85){
	cout<<"LULUS";
	cout<<"\nGrade B";
	}
		if(nilai>=60 && nilai <75){
		cout<<"LULUS";
		cout<<"\nGrade C";
	}
		if(nilai>=45 && nilai <60){
		cout<<"GAGAL";
		cout<<"\nGrade D";
	}
		if(nilai>=0 && nilai <45){
		cout<<"GAGAL";
		cout<<"\nGrade E";
	}
		if(nilai<0 || nilai >100){
		cout<<"\nInput nilai antara 0-100";
	}
	getch();
}
