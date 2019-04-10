#include<iostream>

using namespace std;

void reverse(int numbers[], const int numbersLen){
    for(int i=0;i<numbersLen/2;++i){
        int tmp=numbers[i];
        int indexFromEnd=numbersLen-i-1;
        numbers[i]=numbers[indexFromEnd];
        numbers[indexFromEnd]=tmp;
    }
}

int main(){
    int numbersLen=5;
    int arr[numbersLen]={1,2,3,4,5};
    cout<<"Array Original: ";
    for (int i=0;i<numbersLen;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,numbersLen);
    cout<<"Array Invertido: ";
    for (int i=0;i<numbersLen;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
