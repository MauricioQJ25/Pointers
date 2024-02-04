#include <iostream>
using namespace std;

template<typename T>

//template<typename U>

void Swapp ( T* a, T* b){
    T temp = *a;
    *a = *b;
    *b = temp;
}


void swapp(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapp(char * a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
template<typename U>
void printInput(U input){
    char input = (char)input;
    printf(" This is the input: %c ", input);
}



int main(){
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    swapp(&a, &b); 
    cout << a << " - " << b << endl;

    char d = 'd', e = 'e';
    swapp(&d, &e);
    cout << d << " - " << e << endl;

    Swapp<int>(&a, &b);
    cout << a << " - " << b << endl;

    Swapp<char>(&d, &e);
    cout << d << " - " << e << endl;

    printInput(a);

    //system("pause>0");
    return 0;
}