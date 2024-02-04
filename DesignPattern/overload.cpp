#include <iostream>

using namespace std;


class Number {
        int _num;
    public:
        Number(int setNum): _num(setNum){
            cout << "Hello from constructor " << endl;
        } 
        ~Number(){
            cout << "Good bye from destructor " << endl;
        }
        int& getNum(){
            return this->_num;
        }
        Number operator+(const Number add){
            return Number(getNum() + add._num);
        }
};

int main(){
    int a = 5, b = 7;
    Number A(a);
    Number B(b);
    Number C = A + B;
    cout << "The value of the operator is " << C.getNum() << endl;
    return 0;
}