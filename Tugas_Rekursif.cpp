#include <iostream>
/*
Reynaldrid Tua Hamonangan Manurung - A11.2022.14347
4208
*/

using namespace std;

int penjumlahan(int a, int b){
 if (b == 0){
    return a;
 }else{
    return 1 + penjumlahan(a, (b-1));
 }
}

int pengurangan(int c, int d){
 if ( d == 0){
    return c;
 }else{
    return pengurangan( (c-1), (d-1));
 }
}

int perkalian(int e, int f){
    if(f==1){
        return e;
    }else {
        return e + perkalian(e, (f-1));
    }
}

int pembagian(int g, int h){
    if( h == 1){
        return g;
    }else{
        return pembagian((g-h),h)+1;
    }
}

int pangkat(int i, int j){
    if ( j == 1){
        return i;
    }else{
    return i * pangkat(i, (j-1));
    }
}

int main()
{
    cout << "Penjumlahan = " << penjumlahan(7,1) << endl;
    cout << "Pengurangan = " << pengurangan(7,1) << endl;
    cout << "Perkalian = " << perkalian(7,1) << endl;
    cout << "Pembagian = " << pembagian(7,1) << endl;
    cout << "Pangkat = " << pangkat(7,2) << endl;
    return 0;
}
