#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
	// n1 <= 1000
	// X <= 99999
	// n2 inputan kupon dengan 5 digit
	int N,X,n2;
	cin>>N>>n2;
	int kupon[N];
    int seli[N];
    int tampil[N];
    
	if(N<1 || N>1000){
		return 0;
	}else{
		for(int i = 0; i < N; i++){
			cin>>X;
			if(X < 0 || X > 99999){
				return 0;
			}else{
                for(int y = 0; y < N; y++){
                    if(kupon[y] == X){
                        return 0;
                    }
                }
                kupon[i] = X;
           }
		}
	}
    int temp = seli[0];
    for(int i = 0; i < N; i++){
        seli[i] = abs(kupon[i] - n2);
            temp = min(temp, seli[i]);
    }
    //keluaran
    int y = 0;
    for(int i = 0; i < N; i++){
        if(seli[i] == temp){
            tampil[y] = kupon[i];
        }else{
            tampil[y] = 0;
        }
        y++;
    }
    int n =  sizeof(tampil) / sizeof(tampil[0]);
    sort(tampil, tampil + n);
    for(int i = 0; i < N; i++){
        if(tampil[i] == 0){
            continue;
        }else{
            cout<<tampil[i]<<endl;
        }
    }

    return 0;
}
