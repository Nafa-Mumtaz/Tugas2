#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <conio.h>
using namespace std;
string toString (double);
int toInt (string);
double toDouble (string);
int main() {
	int Kode, Angka1, Angka2, i, j, Hasil, Suku;
	string chara;
	cout<<"1. Penambahan"<<endl<<"2. Pengurangan"<<endl<<"3. Perkalian"<<endl<<"4. Turunan Polinom"<<endl;
	cout<<"Masukkan kode= ";
	cin>>Kode;
	while (Kode>4 || Kode<1) {
		cout<<"Masukkan kode yang benar!";
		cin>>Kode;
	}
	if (Kode==4) {
		cout<<"Masukkan jumlah suku= ";
		cin>>Suku;
		int Pangkat[Suku], Koefisien[Suku];
		for (i=0; i<Suku; i++) {
			cout<<"Masukkan koefisien X= ";
			cin>>Koefisien[i];
			cout<<"Masukkan derajat pangkat X= ";
			cin>>Pangkat[i];
			Koefisien[i]=Koefisien[i]*Pangkat[i];
			Pangkat[i]=Pangkat[i]-1;
		}
		for (j=0; j<Suku; j++) {
			if (Koefisien[j]!=0) {
			
			cout<<Koefisien[j];
			if (Pangkat[j]!=0) {
				cout<<"X";
				if(Pangkat[j]!=1 && Pangkat[j]!=0) {
					cout<<"^"<<Pangkat[j];
				}
				if (j<Suku-1 &&Pangkat[j]>=0) {
					cout<<"+";
				}
			}
		}
		}
	}
	else {
		cout<<"Masukkan bilangan pertama= ";
		cin>>Angka1;
		cout<<"Masukkan bilangan kedua= ";
		cin>>Angka2;
		if (Kode==1) {
			cout<<"Hasil penambahan adalah "<<Angka1+Angka2;
		}
		else if (Kode==2) {
			cout<<"Hasil pengurangan adalah "<<Angka1-Angka2;
		}
		else {
			cout<<"Hasil perkalian adalah "<<Angka1*Angka2;
		}
	}
	getch ();
	return 0;
}
