#include <iostream>
using namespace std;
int main(){
  float i, v, r;
  cout << "Masukan Nilai arus dan tegangan: "; // Hambatan = tegangan / arus
  cin >> i >> v;
  (cin) ? cout<< "Nilai Hambatan = " << v / i << "\nMasukan nilai hambatan dan tegangan: " : cout << "Error mennghitung nilai Hambatan\n";  // cin akan return true jika yang diinput adalah nilai numeric dan false jika non-numeric
  
  cin >> r >> v;                              // Arus = tegangan / hambatan
  (cin) ? cout<< "Nilai Arus = " << v / r << "\nMasukan nilai arus dan hambatan: " : cout << "Error mennghitung nilai Arus\n";

  cin >> i >> r;                              // Tegangan = arus * hambatan  
  (cin) ? cout<< "Nilai Tegangan = " << i * r << '\n' : cout << "Error mennghitung nilai Tegangan\n";
  
}
