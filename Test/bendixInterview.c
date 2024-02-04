/***************************************/
//
// Program: 
// Author: Mauricio Quijada
// Description: 
// Date: Feb 02, 2024
//
/****************************************/

#include <stdio.h>

void swapp(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;  
}

// 5 * 4 * 3 * 2 * 1

uint factorial( uint input){
  if(input <=  1){
    return 1;
  }
  return input * factorial(input -1);
}

void reverseString(char *string, int length){
  // string[length] = '\0'
  //  abcdef\0
  //  fbcdea
  //  fecdba
  //  fcdcba
  // 5  / 2
  // 5  4 / 0
 char *lastP = &string[length-1];
 for (int i = length - 1; i > length / 2; i--){
    swapp(lastP--, string++); // 10 11 
 }
}

// ' ' index
// I love cats
//  1    6     
// cats love I
// stac evol I


void reversePhrase(char* string, length){
  /*
  int index = -1;

  for(int i = lenght - 1; i >= 0; i-- ){
    if (string[i] == ' '){
       index = i;
    }
  }
  */

  reverseString(string, length);

  for(int i = 0; i < lenght -1; i++){
    if (string[i] == ' '){
       index = i;
       reverseString(string, index)
    }
  }


   
}

  //




  while( string[length - 1] != ' '){
    string[length - 1 - 1]
  }
}

int main(int argc, char** argv[]){

  // 
    return 0;
}