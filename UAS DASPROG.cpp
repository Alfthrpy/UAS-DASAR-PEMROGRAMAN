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