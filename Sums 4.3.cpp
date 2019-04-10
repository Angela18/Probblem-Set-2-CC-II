#include<iostream>

int sum(const int x, const int y, const int z){
    return x+y+z;
}

int sum(const int a, const int b, const int c, const int d){
    return a+b+c+d;
}

int main(){
    std::cout<<sum(4,2,3)<<'\n';
    std::cout<<sum(1,8,3,2);
}
