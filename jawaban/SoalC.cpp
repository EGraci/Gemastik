#include <iostream>
#include <string>

using namespace std;

string lipat(int panjang, int lebar, int ulang){
	string hasil1,hasil2;
	int temp;
	int k=0;

	while(k<ulang){
		if(panjang >= lebar){
			panjang = panjang / 2;
			lebar = lebar;
		}else if(lebar >= panjang){
			lebar = lebar / 2;
			panjang = panjang;
		}
		k+=1;
	}
	//pertama kali muncul nilai yang besar
	if(panjang<lebar){
		temp = lebar;
		lebar = panjang;
		panjang = temp;
		hasil1 = to_string(panjang);
		hasil2 = to_string(lebar);
		return hasil1 + " " + hasil2;
	}else{
        temp = lebar;
		lebar = panjang;
		panjang = temp;
		hasil1 = to_string(panjang);
		hasil2 = to_string(lebar);
		return hasil1 + " " + hasil2;
	}
}

int main(){
	int kertas,P, Q, M;
	int simpan;

	cin>>kertas;

	string krts[kertas];
	for(int i=0; i<kertas;i++){
		cin>>P>>Q>>M;
		krts[i] = lipat(P,Q,M);		
	}

	for(int j=0; j<kertas;j++){
		cout<<krts[j]<<endl;	
	}

	return 0;
}