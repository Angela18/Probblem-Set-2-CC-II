#include<iostream>

using namespace std;

int sum(const int numbers[],const int numbersLen){
    return numbersLen == 0 ? 0 : numbers[0]+sum(numbers + 1,numbersLen-1);
}

int main(){
    int numbersLen = 5;
    int numbers[numbersLen]={9,0,7,6,5};
    cout<<sum(numbers,numbersLen);
    return 0;
}
