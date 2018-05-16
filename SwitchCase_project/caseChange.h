//uppercase & lower case

/*
*Uppercase
* -32 to int value of char.
*LowerCase
* +32 to int value of char
*/

char toUpper(char x){
      char Y;
    if((x >= 97) && (x <= 122))
        Y  = (char) (((int) x) - 32);
    return Y;
}

char toLower(char x){
    char Y;
    if((x >= 65) && (x <= 90))
        Y  = (char) (((int) x) + 32);
    return Y;
}

int length(char *x){
    int counter = 0;
    while(true){
        if(!x[counter]){
            break;
        }
        counter++;
    }
    return counter;
}


//Needs work
/*
*Convert a lowercase String to uppercase
* Currently not returning (5/15/2018 9:08pm)
*/
char toUpperString(char *x){
    int cnt = length(x);
    char  newStr[cnt];
    int i = 0;
    for(i; i<cnt; i++){
        if(x[i] <= 122){
           // newStr += toUpper(x[i]);
        }

        if(i == (cnt -1))
            return newStr[0];

        /*
        code for toLower(char *)
        else if(x[cnt] <= 122){
            newStr[cnt] = toUpper(x[cnt]);
        }
        */
    }
    return newStr[0];
}
