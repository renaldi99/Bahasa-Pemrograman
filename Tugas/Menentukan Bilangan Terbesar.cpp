#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,nilai;
	cout<<"\t\t\t menampilkan bilangan terbesar"<<endl;
	cout<<"masukan angka : \n";
	cout<<"a :";cin>>a;
	cout<<"b :";cin>>b;
	cout<<"c :";cin>>c;
	cout<<"d :";cin>>d;
	
	if(a>b){
	  nilai = a;
		if(nilai>b){
			nilai=nilai;
		}
		else
		 nilai=b; 
			if(nilai>c){
				nilai=nilai;
			}
			else
		  	  nilai=c;
			 	if(nilai>d){
					nilai=nilai;
				}
			  	else
			   		 nilai=d;
		}
	else if(a<b){
	  nilai=a;
		if(nilai<b){
			nilai=b;
			}
			else
			nilai=nilai;
				if(nilai<c){
					nilai=c;
				}
				else
					nilai=nilai;
			 		 if(nilai<d){
			  			nilai=d;
					 }				
			 		 else
						nilai=nilai;
		}
	cout<<"Tampilkan Nilai Terbesar = "<<nilai;	
getch();			
}
