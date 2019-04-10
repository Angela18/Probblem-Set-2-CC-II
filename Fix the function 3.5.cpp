#include<iostream>

int sum(const int x, const int y){
    return x+y;
}

int main(){
    std::cout << sum(1,2,3); //Debe imprimir 6
    return 0;
}
 //Error: la funcion 'sum' tiene 2 parametros
 //en el 'main' llaman a la funcion con 1 parametro demas

 //La forma correcta es:

 int sum(const int x, const int y){
    return x+y;
}

int main(){
    std::cout << sum(1,2); //Impimira 3
    return 0;
}
