#include <bits/stdc++.h>

using namespace std;

void splitString(string s)
{
    stringstream ss(s);
    string word;
    while (ss >> word) {
        cout << word << endl;
    }
}

int main(int argc, char const* argv[]){
    string isi;

    cout << "Tuliskan isi : " << endl;
    getline(cin, isi);

    splitString(isi);
    cout << endl;

    return 0;
}