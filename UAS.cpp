#include <iostream>
using namespace std;
void rumus (){
	float total_pembelian, diskon, total_belanja, uang_konsumen;
	
	cout << "Masukan total pembelian = ";
	cin >> total_pembelian;
	diskon = 0;
	if (total_pembelian >= 500000){
		diskon = 0.1 * total_pembelian;
	}
	
	total_belanja = total_pembelian - diskon;
	
	cout << endl;
	cout << "Total diskon		= " << diskon;
	cout << endl;
	cout << "Total belanja		= " << total_belanja;
	cout << endl;
	cout << "Masukan uang konsumen	= ";
	cin >> uang_konsumen;
	cout << "uang kembalian		= " << uang_konsumen - total_belanja << endl;
	
	if (total_belanja >= uang_konsumen){
		cout << "Uangmu kurang bro...";
		system ("color 4");
	}else{
		cout << "Terima kasih bro...";
		system ("color 3");
	}
}
int main(){
	
	rumus();
}
