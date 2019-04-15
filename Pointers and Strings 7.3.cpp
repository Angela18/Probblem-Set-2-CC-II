#include<iostream>

using namespace std;

void swap(int *x,int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int main(){
    int x=7, y=1;
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}
