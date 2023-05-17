#include <iostream>
using namespace std;

class angka {
private:
	int *arr;
	int panjang;
public:
	angka(int); //constructor
	~angka(); //Destructor
	void cetakData();
	void isiData();
};
//definisi member function
angka::angka(int i) { //constructor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() { //destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat array sudah Dilepaskan" << endl;
}

