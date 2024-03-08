#include <iostream>
#include <string>
using namespace std;

int arr[20];	//Deklarasi variable global array a dengan ukuran 20.
int n;			//Deklarrasi variable global n untuk menyimpan banyaknya elemen pada array.

void input() {	//Prosedur untuk input.
	while (true) {
		cout << "Masukkan banyaknya elemen array = "; //Output ke layar 
		cin >> n; //Input dari pengguna
		if (n <= 20) //Jika n kurang dari atau sama dengan 20
			break;	//Keluar dari loop
		else {		//Jika n lebih dari 20
			cout << "\nArrayd dapat mempunyai maksimal 20 elemen\n"; //Output ke layar
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) { //Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
		cin >> arr[i];
	}
}