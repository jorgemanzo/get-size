#ifndef ISVALID_H
#define ISVALID_H
#include "isValid.h"
#endif

#define CLIMIT 256

using namespace std;

int getSize(char *txt){
    int size =0;
    for(int i = 0; i < CLIMIT; i++){
        if(txt[i] != '\0'){size++;}
        else{break;}
    }
    return size;
}

int getSize(const char *txt){
    int size =0;
    for(int i = 0; i < CLIMIT; i++){
        if(txt[i] != '\0'){size++;}
        else{break;}
    }
    return size;
}

bool isValidint(char *txt, int size){
    for(int i =0; i < size; i++){
        if( (int)txt[i] >= 48 && (int)txt[i] <= 57){}/*char is a number 0-9*/
        else{return false;}
    }
    return true;
}

bool isValidalpha(char *txt, int size){
    for(int i =0; i < size; i++){
        if( ((int)txt[i] >= 65 && (int)txt[i] <= 90) ||/*check if char is Uppercase*/
                ((int)txt[i] >= 97 && (int)txt[i] <= 122) /*Checks if char is lowercase*/
          ){}
        else{return false;}
    }
    return true;
}

bool isValidalphaInt(char *txt, int size){
    for(int i =0; i < size; i++){
        if( 
            (
                ((int)txt[i] >= 65 && (int)txt[i] <= 90) /*char is Uppercase Lettter*/||
                ((int)txt[i] >= 97 && (int)txt[i] <= 122) /*char is lowercase letter*/
            ) || /*or*/
            (
                ((int)txt[i] >= 48 && (int)txt[i] <= 57) /*char is a number 0-9*/
            )
          ){}
        else{return false;}
    }
    return true;
}
bool isValidalphaInt(char *txt){
    int size;
    size = getSize(txt);
    return isValidalphaInt(txt, size);
}

bool isValidalpha(char *txt){
    int size;
    size = getSize(txt);
    return isValidalpha(txt, size);
}

bool isValidint(char *txt){
    int size;
    size = getSize(txt);
    return isValidint(txt, size);
}


