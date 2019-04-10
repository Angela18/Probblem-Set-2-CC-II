#include<iostream>

int sum(const int a, const int b, const int c=0, const int d=0)
{
    return a+b+c+d;
}

int main(){
    std::cout<<sum(2,8,2,3)<<'\n';//Imprime 15
    std::cout<<sum(2,8,2)<<'\n'; //Imprime 12
    std::cout<<sum(2,7);
}
