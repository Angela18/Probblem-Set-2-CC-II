#include<iostream>
using namespace std;
void doubleNumber(int num){num = num *2;}


int main(){
    int num=35;
    doubleNumber(num);
    cout << num ; //Should print 70
    return 0;
}
//Error: estamos imprimiendo el valor de 'num=35'
//en vez del valor que resulta de la funcion.

//La forma correcta seria:

void doubleNumber(int num){num = num *2; cout<<num;}


int main(){
    int num=35;
    doubleNumber(num);
    return 0;
}
