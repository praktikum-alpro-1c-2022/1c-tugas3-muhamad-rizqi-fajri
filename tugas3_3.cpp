#include <iostream>
int main(){
  float inI=10, inV=8, outI, outV, outR;  // input hanya I dan V
  outV = (outR = inV/inI) * (outI = inV/outR); // urutan perkalian tidak boleh dibalik
  std::cout << "Nilai arus (I) = " << outI << "\nNilai tegangan (V) = " << outV << "\nNilai hambatan (R) = " << outR << '\n';
}
