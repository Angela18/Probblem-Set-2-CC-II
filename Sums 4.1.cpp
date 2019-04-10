#include<iostream>

int sum(const int x, const int y){
    return x+y;
}

double sum(const double x, const double y){
    return x+y;
}
 int main(){
    std::cout<<sum(5,4)<<'\n';
    std::cout<<sum(123456,1425);

 }
