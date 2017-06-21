# get-size
Just some useful functions I wrote for C++
These should work pretty universially for anyone working with C strings!

Here is some descriptions on how these functions work (also stateed in isValid.h)


bool isValidint(char *txt);
/*
 * Takes in a null terminated cstring and returns a bool depending if the given cstring contains all numeric characters or not. This function will find the right size of the string

bool isValidint(char *txt, int size);
/*
 * Takes in a null terminated cstring, as well as the EXACT size of the cstring. If exact size is unknown, just dont pass it, or just use getSize(char *txt);


bool isValidalpha(char *txt); 
/* Takes in a unll terminated cstring and returns a bool depending if the given cstring contains all Alphabetic characters

bool isValidalpha(char *txt, int size);
/*
 *  Takes in a null terminated cstring and the EXACT size of the cstring. It will return a bool depending on if the string is all Alphabetic characters if the exact size is unkown, just dont pass the size, or use getSize(char *txt) to get the exact size.

bool isValidalphaInt(char *txt);
/*
 * Takes in a null terminated cstring and returns a bool depending on if the characters in the string are either Alhpabetical or Ints

bool isValidalphaInt(char *txt, int size);
/*
 * Takes in a null terminated cstring and the EXACT size of the string returning a bool depending if the characters in the string are either Alphabetical or Ints

int getSize(char *txt);
/* takes in a null terminated cstring and returns an int of that string's size

int getSize(const char *txt);
/*
 * Takes in a null termindated constant cstring and returns an int of that string's size
