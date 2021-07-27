#include <iostream>
using namespace std;

int main(){
    string nama, alamat;
    int umur;
    double tinggi;

    cout << "Tuliskan nama: ";
    cin >> nama;

    cout << "Alamat web: ";
    cin >> alamat;

    cout << "Umur anda: ";
    cin >> umur;

    cout << "Tinggi anda: ";
    cin >> tinggi;

    cout << "Nama yang diinputkan: " << nama << endl;
    cout << "Alamat Web yang diinputkan: " << alamat << endl;
    cout << "Umur saya " << umur << endl;
    cout << "Tinggi saya  " << tinggi << endl;

    return 0;
}