#include<iostream>

int main(){
    printNum(35);
    return 0;
}

void printNum(int number){std::cout<<number;}
//El programa no compila ya que la funcion 'printNum'
//no ha sido declarada antes del 'main'.

//La forma correcta es:

void printNum(int number){std::cout<<number;} //Declaramos la funcion 'printNum'

int main(){
    printNum(35); //Llamamos la funcion 'printNum'
    return 0;     //dandole un parametro '35'
}
