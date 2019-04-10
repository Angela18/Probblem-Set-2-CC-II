#include<iostream>

void printNum(){std::cout<<number;};

int main(){
    int number=35;
    printNum(number);
    return 0;
}
//Error: la funcion 'printNum' no tiene parametros definidos
//la variable 'number' no esta declarada dentro de la funcion.

//La forma correcta es:

void printNum(int number){std::cout<<number;};

int main(){
    int number = 35;
    printNum(number);
    return 0;
}
