#include <iostream>
using namespace std;
int gerakX(int jalan, int X){
    if(jalan == 0){
        return 0;
    }else if(jalan > 15){
        jalan -=  15;
        X += 3;
        return gerakX(jalan, X); 
    }else{
        if((jalan == 4) || (jalan == 12)){
            return X;
        }else if((jalan > 0 && jalan < 4) || (jalan == 13)){
            return X + 1;
        }else if(jalan == 14){
            return X + 2;
        }else if(jalan == 15){
            return X + 3;
        }else if((jalan == 5) || (jalan == 11)){
            return X - 1;
        }else if(jalan > 5 && jalan < 11){
            return X - 2;
        }
    }
}
int gerakY(int jalan, int Y){
    if(jalan == 0){
        return 0;
    }else if(jalan > 15){
        jalan -=  15;
        Y -= 2;
        return gerakY(jalan, Y); 
    }else{
        if((jalan == 1) || (jalan == 8)){
            return Y;
        }else if((jalan == 2) || (jalan == 7)){
            return Y + 1;
        }else if(jalan > 2 && jalan < 7){
            return Y + 2;
        }else if(jalan == 9){
            return Y - 1;
        }else if(jalan > 9 && jalan < 16){
            return Y - 2;
        }
    }
}
int main(){
    int N, M;
    cin>>N;
    if(N < 2 || N > 100){
        return 0;
    }
    int jalan[N];
    for(int i = 0; i < N; i++){
        cin>>M;
        if(M<0 || M > 100000){
            return 0;
        }
        jalan[i] = M;
    }
    for(int i = 0; i < N; i++){
        cout << gerakX(jalan[i],0) << " " <<  gerakY(jalan[i],0) << endl;
    }
}