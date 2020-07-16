#include <iostream>
using namespace std;
	/*
	Total Pembelian = x
	Diskon = y
	Total Belanja = z
	Uang konsumen = i
	*/

float x, y, z, i;

float rumus(float x, float y){
	return (x - y);
}

float kembalian(float i, float z){
	return (i - z);
}

int main(){
	
	cout << "\nMasukan total pembelian\t= "; cin >> x; y = 0; if (x >= 500000){ y = 0.1 * x; }
	cout << rumus(x, y);
	z = x-y;
	
	cout << "\n\nTotal diskon\t\t= " << y << "\n\nTotal belanja\t\t= " << z << "\n\nMasukan uang konsumen\t= "; cin >> i; cout << "\nUang Kembalian\t\t= " << i - z;
	cout << kembalian(i, z);
	
	
	if (z > i){ cout << "\n\nUangmu Kurang bro..."; system ("color 4"); }
	else if (z < i){ cout << "\n\nTerima Kasih bro..."; system ("color 3"); }
	else if (z == i){ cout << "\n\nUangnya Pas bro..."; system ("color 2"); }
	
	return 0;
}
