#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama : ";
		cin >> nama;
		cout << "Masukkan Nilai : ";
		cin >> nilai;
	}
	void printData();
};

void Mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nNilai : " << nilai;
}

class mataKuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void inputMK() {
		cout << "\n\nMasukkan kode matakuliah : ";
		cin >> kode;
		cout << "Masukkan Nama matakuliah : ";
		cin >> namaMK;
		cout << "Masukkan sks : ";
		cin >> sks;
	}
	void tampil() {
		cout << "\nData matakuliah : ";
		cout << "\nKode matakuliah : " << kode;
		cout << "\nNama matakuliah : " << namaMK;
		cout << "\nsks : " << sks;
	}
};

int main()
{
	Mahasiswa mhs;
	mataKuliah mk; 

	mhs.input();
	mhs.printData();

	mk.inputMK();
	mk.tampil();
}