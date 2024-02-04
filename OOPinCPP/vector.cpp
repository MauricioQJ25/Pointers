#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> numbers;
    numbers.push_back(0);

    for(int i = 1; i<=10 ; i++){
        numbers.push_back(i);
    }

    for (int number: numbers){
        cout << number << endl;
    }

    for (auto it=numbers.begin(); it != numbers.end(); it++){
        // cout << it << endl;
        cout << *it << endl; // value of the iterator
        cout <<  &it << endl; // address of the iterator
        cout << &(*it) << endl; // value of the  element of 
        //cout << *it.first
    }

    //numbers.

    //for 

    cin.get();
}