#include<iostream>

using namespace std;

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}
int main(){
    int x=3,y=5;
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}
