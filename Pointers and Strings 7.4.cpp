#include<iostream>

using namespace std;

void swap(int **x, int **y){
    int *tmp = *x;
    *x = *y;
    *y = tmp;
}
int main(){
    int x=2, y=10;
    int *ptr1=&x, *ptr2=&y;
    cout<<"Direccion ptr1: "<<ptr1<<endl;
    cout<<"Direccion por referencia ptr1: "<<&ptr1<<endl;
    cout<<"Direccion ptr2: "<<ptr2<<endl;
    cout<<"Direccion por referencia ptr2: "<<&ptr2<<endl;
    swap(&ptr2,&ptr2);
    cout<<*ptr1<<" "<<*ptr2;
    return 0;
}
