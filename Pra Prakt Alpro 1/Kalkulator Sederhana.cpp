#include <iostream>
using namespace std;

int hasil;

void jumlah1(int a, int b){
	hasil = a + b;
}
void kurang1(int c, int d){
	hasil = c - d;
}
void kali1(int p, int q){
	hasil = p * q;
}
void bagi1(float r, float s){
	hasil = r / s;
}
int main(){
	int pilih, ang1, ang2;
	
	cout << " ===== Program Kalkulator 1.0 ===== " << endl;
	cout << endl;
	cout << "Menu Operasi: " << endl;
	cout << endl << "1. Penjumlahan (+)" << endl;
	cout << "2. Pengurangan (-)" << endl;
	cout << "3. Perkalian (x)" << endl;
	cout << "4. Pembagian (:)" << endl;
	cout << endl << "Pilihan anda: "; cin >> pilih;
	
	switch (pilih){
		case 1:
		{
			cout << "Masukkan angka pertama: "; cin >> ang1;
			cout << "Masukkan angka Kedua: "; cin >> ang2;
			
			jumlah1(ang1, ang2);
			cout << "Hasil " << ang1 << " + " << ang2 << " = " << hasil << endl;
			
			break;
		}
		case 2:
		{
			cout << "Masukkan angka pertama: "; cin >> ang1;
			cout << "Masukkan angka kedua: "; cin >> ang2;
			
			kurang1(ang1, ang2);
			cout << "Hasil " << ang1 << " - " << ang2 << " = " << hasil << endl;
			
			break;
		}
		case 3:
		{
			cout << "Masukkan angka pertama: "; cin >> ang1;
			cout << "Masukkan angka kedua: "; cin >> ang2;
			
			kali1(ang1, ang2);
			cout << "Hasil " << ang1 << " x " << ang2 << " = " << hasil << endl;
			
			break;
		}
		case 4:
		{
			cout << "Masukkan angka pertama: "; cin >> ang1;
			cout << "Masukkan angka kedua: "; cin >> ang2;
			
			bagi1(ang1, ang2);
			cout << endl;
			cout << "Hasil " << ang1 << " : " << ang2 << " = " << hasil << endl;
			break;
		}
	}
	return 0;
}
