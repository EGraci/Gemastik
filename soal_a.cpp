#include<iostream>
#include <string> 

using namespace std;

int main(){
    int p;
    cin>>p;
    cin.ignore();
    if(1 < p && p < 101){
        string desa[p,8];
        for(int i = 0; i < p; i++){
            string kalimat;
            getline(cin, kalimat);
            int u = 0;
        string kata = "";
        for (auto x : kalimat)
        {
            if (x != ' ')
            {
                kata += x;
            }
            else{
                // kata sebelum spasi
                // menyimpan dengan format "desa x y r desa x y"
                switch(u) {
                    case 0:
                        // desa
                        desa[i,0] = kata;
                        break;
                    case 1 :
                        // x
                        if(stoi(kata) < 0 || stoi(kata) >= 100000){
                        desa[i,1] = kata;
                        }else{
                            cin>>"Inputan tidak valid";
                             return 0;
                        }
                        break;
                    case 2 :
                        // y
                        if(stoi(kata) < 0 || stoi(kata) >= 100000){
                        desa[i,2] = kata;
                        }else{
                            cin>>"Inputan tidak valid";
                             return 0;
                        }
                        break;
                    case 3 :
                        // r
                        if(stoi(kata) < 0 || stoi(kata) >= 100000){
                        desa[i,3] = kata;
                        }else{
                            cin>>"Inputan tidak valid";
                             return 0;
                        }
                        break;
                    case 4 :
                        // desa
                        desa[i,4] = kata;
                        break;
                    case 5 :
                        // x
                        if(stoi(kata) < 0 || stoi(kata) >= 100000){
                        desa[i,5] = kata;
                        }else{
                            cin>>"Inputan tidak valid";
                             return 0;
                        }
                        break;
                    case 6 :
                        // y
                        if(stoi(kata) < 0 || stoi(kata) >= 100000){
                        desa[i,6] = kata;
                        }else{
                            cin>>"Inputan tidak valid";
                             return 0;
                        }
                        break;                  
                    
                    default : 
                        cin>>"Inputan tidak valid";
                        return 0;
                }
                u++;
                kata = "";
            }
        }
        // menyimpan kata "r"
        if(u < 8){
            if(stoi(kata) < 0 || stoi(kata) >= 100000){
                desa[i,7] = kata;
            }else{
                cin>>"Inputan tidak valid";
                return 0;
            }
        }



        }
    }else{
        cout<<"Inputan tidak valid";
        return 0;

    // proses perhitungan
    
    }
    return 0;
}
