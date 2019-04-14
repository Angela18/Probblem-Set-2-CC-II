#include<iostream>

using namespace std;

void transpose(const int input[][LENGTH],int output[][WIDTH]){
    for(int i=0;i<WIDTH;++i){
        for(int j=0;j<LENGTH;++j){
            output[j][i]=input[i][j];
        }
    }
}

int main(){
    int WIDTH, n;
    int LENGTH;
    cout<<"Filas: ";cin>>WIDTH;
    cout<<"Columnas: ";cin>>LENGTH;
    int input[][LENGTH];
    int output[][WIDTH];
    for(int i=0;i<WIDTH;i++){
        for(int j=0;j<LENGTH;j++){
            cout<<"Ingrese la posicion ["<<i<<"]"<<"["<<j<<"]: ";cin>>n;
            input[i][j]=n;
        }
    }
    for(int i=0;i<WIDTH;i++){
        for(int j=0;j<LENGTH;j++){
            cout<<"Valor en la posicion ["<<i<<"]"<<"["<<j<<"]: "<<input[i][j]<<endl;
        }
    }
    transpose(input[][LENGTH],output[][WIDTH]);
    for(int i=0;i<WIDTH;i++){
        for(int j=0;j<LENGTH;j++){
            cout<<"Valor en la posicion ["<<i<<"]"<<"["<<j"]: "<<input[i][j]<<endl;
        }
    }
    return 0;
}
