#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    if(n1 < 1 || n2 > 1000){
        return 0;
    }else if(n2 < 1 || n2 > 20){
        return 0;
    }

    int lokasi[n1][n1];
    int temp[n1];

    for(int i = 0; i < n1; i++){
        for(int y = 0; y < n1; y++){
            lokasi[i][y] = 0;
        }
    }

    for(int i = 0; i < n1; i++){
        cin >> temp[i];
    }
    for(int i = 0; i < n2; i++){
        int x, y;
        cin >> x >> y;
        lokasi[x-1][y-1] = 1;
        lokasi[y-1][x-1] = 1;
    }

    for(int i = 0; i < n1; i++){
        for(int y = 0; y < n1; y++){
            cout<<lokasi[i][y]<<" ";
        }
        cout<<endl;
    }

    return 0;
}