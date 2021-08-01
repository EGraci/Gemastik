#include <iostream>
#include <string>

using namespace std;

int main(){
	int kertas,P, Q, M;

	cin>>kertas;
	if(kertas < 1 || kertas > 10000){
		return 0;
	}
	int krts[kertas][2];
	for(int i=0; i<kertas;i++){
		cin>>P>>Q>>M;
		if((P < 1 || P > 10000) && (Q < 1 || Q > 10000) && (M < 1 || M > 10000)){
			return 0;
		}
		int temp;
		int k=0;

		while(k<M){
			if(P >= Q){
				P = P / 2;
				Q = Q;
			}else if(Q >= P){
				Q = Q / 2;
				P = P;
			}
			k+=1;
		}
		//pertama kali muncul nilai yang besar
		if(P<Q){
			temp = Q;
			Q = P;
			P = temp;
			krts[i][0] = P;
			krts[i][1] = Q;
		}else{
			temp = Q;
			Q = P;
			P = temp;
			krts[i][0] = P;
			krts[i][1] = Q;
		}	
	}

	for(int j=0; j<kertas;j++){
		cout<<krts[j][0]<<" "<<krts[j][1]<<endl;	
	}

	return 0;
}