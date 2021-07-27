#include <iostream>
#include <string>
using namespace std;

int main()
{
    int p, l;
    string temp;

    cin >> p;
    // cek p
    if( 5 > p && p < 70 || 5 < p && p > 70)
    {
        return 0;
    }

    cin >> l;
    // cek p
    if( 5 > l && l < 50 || 5 < l && l > 50)
    {
        return 0;
    }

    // definisi array 2 dimensi
    string peta[p][l]; 

    for (int x = 0; x < p; x++)
    {
        // gambar peta
        getline(cin, temp);

        // memasukan dalam array
        for (int y = 0; y < l; y++)
        {
            peta[x][y] = temp[y];
        }
        // menghapus string temp
        temp = "";
        
    }

    // tampil peta
    cout << "\n\n ";
    for (int i = 0; i < p; i++)
    {
        for (int u = 0; u < l; u++)
        {
            cout<<peta[i][p];
        }
        cout << "\n";
    }
    
    return 0;
}