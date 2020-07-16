#include <iostream>
using namespace std;
void rumus (){
	float tp, d, tb, uk;
	cout << "Masukan total pembelian = "; cin >> tp; d = 0;
	if (tp >= 500000){ d = 0.1 * tp; } tb = tp - d;
	cout << "\n\nTotal diskon		= " << d  << "\n\nTotal belanja		= " << tb << "\n\nMasukan uang konsumen	= "; cin >> uk; cout << "\n\nuang kembalian		= " << uk - tb;
	if (tb >= uk){ cout << "Uangmu kurang bro..."; system ("color 4"); }
	else{ cout << "Terima kasih bro..."; system ("color 3"); } }

int main(){ rumus(); }
