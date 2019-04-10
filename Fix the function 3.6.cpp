#include<iostream>
*const int ARRAY_LEN = 10;

int main(){
    int arr[ARRAY_LEN]={10}; //Note implicit initialization of
                             //other elements
    int *xPtr = arr, yPtr = arr + ARRAY_LEN - 1;
    std::cout << *xPtr << ' ' << *yPtr; //Should output 10 0
    return 0;
}*/

//Error: en la linea 7 es invalido la conversion de un 'int*' a 'int'

//La forma correcta es:

const int ARRAY_LEN = 10; //variable global

int main(){
    int arr[ARRAY_LEN]={10}; //Note implicit initialization of
                             //other elements
    int *xPtr = arr, *yPtr = arr + ARRAY_LEN - 1;
    std::cout << *xPtr << ' ' << *yPtr; //Should output 10 0
    return 0;
}
