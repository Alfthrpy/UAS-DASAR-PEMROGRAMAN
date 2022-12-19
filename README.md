# Ujian Akhir Semester 
<br>Mata Kuliah 	: DASAR PEMROGRAMAN
<br> Nama		: MUHAMMAD RIZKI AL-FATHIR
<br>NIM		:	1227050093
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi umum
<br> dalam repository ini ada dua program mengenai array dua dimensi, program pertama adalah program untuk transpose sebuah nilai matriks yang sebelumnya telah di input oleh user. lalu program kedua adalah program untuk menampilkan nilai dalam array dua dimensi yang habis dibagi 3,5, dan 7.

## Source code
#include <iostream>
using namespace std;

int main(){
	
	cout << "SOAL NO PERTAMA" << endl;
	int b,k;
	cout << "input jumlah baris dan kolom" << endl;
	cout << "jumlah baris :";
	cin >> b;
	cout << "Jumlah kolom :";
	cin >> k;
	
	int m[b][k];
	cout << "Masukan nilai nilai matriksnya:"<< endl;
	for(int i = 0; i<b; i++){
		for(int j = 0; j<k; j++){
			cout << "Masukan nilai baris ke-" << i+1 << " kolom ke-" << j+1 << ": ";
			cin >> m[i][j];
		}
	}
	
	cout << "hasil matriks:"<< endl;
	for(int i = 0; i<b; i++){
		for(int j = 0; j<k; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Transpose matriks" << endl;
	int tr[b][k];
	for(int i = 0; i<b; i++){
		for(int j = 0; j<k; j++){
			tr[j][i] = m[i][j];
		}
	}
	
	cout << "hasil matriks:"<< endl;
	for(int i = 0; i<k; i++){
		for(int j = 0; j<b; j++){
			cout << tr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "SOAL NO KEDUA" << endl;
	int b1,k1;
	cout << "input jumlah baris dan kolom" << endl;
	cout << "jumlah baris :";
	cin >> b1;
	cout << "Jumlah kolom :";
	cin >> k1;
	
	int m1[b1][k1];
	cout << "Masukan nilai nilai matriksnya:"<< endl;
	for(int i = 0; i<b; i++){
		for(int j = 0; j<k; j++){
			cout << "Masukan nilai baris ke-" << i+1 << " kolom ke-" << j+1 << ": ";
			cin >> m1[i][j];
		}
	}
	
	cout << "hasil matriks:"<< endl;
	for(int i = 0; i<b; i++){
		for(int j = 0; j<k; j++){
			cout << m1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	bool flag = true;
	for(int i = 0; i<b; i++){
		for(int j = 0; j<k; j++){
			if(m1[i][j]%3 == 0 && m1[i][j]%5 == 0 && m1[i][j]%7 == 0 ){
				cout << "bilangan :" << m1[i][j] << endl;
				flag = false;
			}
			 
		}
	}
	
	if(flag){
		cout << "Tidak adak bilangan yang habis dibagi 3,5, dan 7" << endl;
	}
	
	
	
}
## Output
SOAL NO PERTAMA
input jumlah baris dan kolom
jumlah baris :2
Jumlah kolom :2
Masukan nilai nilai matriksnya:
Masukan nilai baris ke-1 kolom ke-1: 1
Masukan nilai baris ke-1 kolom ke-2: 2
Masukan nilai baris ke-2 kolom ke-1: 3
Masukan nilai baris ke-2 kolom ke-2: 4
hasil matriks:
1 2
3 4

Transpose matriks
hasil matriks:
1 3
2 4

SOAL NO KEDUA
input jumlah baris dan kolom
jumlah baris :2
Jumlah kolom :2
Masukan nilai nilai matriksnya:
Masukan nilai baris ke-1 kolom ke-1: 105
Masukan nilai baris ke-1 kolom ke-2: 120
Masukan nilai baris ke-2 kolom ke-1: 125
Masukan nilai baris ke-2 kolom ke-2: 105
hasil matriks:
105 120
125 105

bilangan :105
bilangan :105
