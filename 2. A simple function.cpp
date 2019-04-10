#include<iostream>

void f(const int a=5) //Definimos una funcion 'f'
{                     //con valor constante 'a=5'
    std::cout << a*2 <<"\n"; //Imprimimos el producto de 'a*2'
}                            //seguido de un salto de linea
int a=123;  //Declaramos 'a=123'
int main()
{
    f(1);  //Llamamos a la funcion 'f' con un valor de 'a=1'
    f(a); //Tomamos la misma funcion 'f' con el valor de 'a=123' declarado fuera del main
    int b=3; //Declaramos 'b=3'
    f(b); //Llamamos a la fncion 'f' con el valor de 'b=3'
    int a=4; //Declaramos 'a=4' dentro del 'main'
    f(a); //Llamamos a la fincuon 'f' con 'a=4'
    f();  //Llamamos a la funcion 'f' sin parametros
}         //esta usara el valor constante que se le asigno
