#include<iostream>
using namespace std;

template <typename T>

void swapp(T* a, T* b){
    T temp = *a;
    *a = *b;
    *b = *a;
}

int main(){

    int a = 5, b = 7;

    cout << "a = " << a << " b = " << b << endl; 
    swapp<int>(&a, &b);
    cout << "a = " << a << " b = " << b << endl; 

    char c= 'c', d = 'd';
    cout << "c = " << c << " d = " << d << endl; 
    swapp<char>(&c, &d);
    cout << "c = " << c << " d = " << d << endl; 
    return 0;
}