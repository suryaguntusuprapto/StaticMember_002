#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}