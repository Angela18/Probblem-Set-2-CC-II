#include<iostream>

using namespace std;

int sum(const int numbers[], const int numbersLen){
    int sum=0;  //variable que almacena la suma de los elementos del array
    for(int i =0;i<numbersLen;++i){ //bucle desde 0 hasta el tamaño de array
        sum +=numbers[i];
        cout<<sum<<" "; //Imprime el valor de 'sum' seguido de una espacio
    }
    return sum;
}

int main(){
    int numbersLen = 5;
    int numbers[numbersLen]={1,2,3,4,5};
    sum(numbers,numbersLen);
    return 0;
}
