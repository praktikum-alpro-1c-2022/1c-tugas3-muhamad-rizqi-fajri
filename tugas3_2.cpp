#include <iostream>
int main(){
  float praktikum=75, uts=70, uas=88, nilaiAkhir;
  nilaiAkhir = (praktikum * 20 + uts * 30 + uas * 50) / 100;  // praktikum 20%; uts 40%; uas 50%
  std::cout << "Nilai Akhir = " << nilaiAkhir << '\n';
}
