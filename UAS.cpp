#include <iostream>
using namespace std;
void rumus (){ float tp, d, tb, uk; cout << "Masukan total pembelian\t= "; cin >> tp; d = 0; if (tp >= 500000){ d = 0.1 * tp; } tb = tp - d; cout << "\n\nTotal diskon\t\t= " << d  << "\n\nTotal belanja\t\t= " << tb << "\n\nMasukan uang konsumen\t= "; cin >> uk; cout << "\n\nuang kembalian\t\t= " << uk - tb; if (tb >= uk){ cout << "\n\nUangmu kurang bro..."; system ("color 4"); } else{ cout << "\n\nTerima kasih bro..."; system ("color 3"); } }
int main(){ rumus(); }
