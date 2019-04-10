#include<iostream>
#include<cstdlib> //Contiene funciones matematicas

int difference(const int x, const int y){
    int diff=abs(x-y); //abs(n) returns absolute value of n

}

int main(){
    std::cout<<difference(24,1238);
    return 0;
}

//Error: la funcion 'difference' no retorna nada

//La forma correcta seria:

int difference(const int x, const int y){
    int diff=abs(x-y); //abs(n) returns absolute value of n
    return diff;

}

int main(){
    std::cout<<difference(24,1238);
    return 0;
}
