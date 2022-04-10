#include <iostream>
#include <string.h>

/* Create an algorithm to reverse a character array of any length */

int main(int argc, char* argv[]){

    char name[] = "Jack McLeans";

    std::cout << "Original string : "<< name <<std::endl;

    int str_length = strlen(name) - 1;

    /* Using strlen() does not count the null terminator '\0' while sizeof(name)/sizeof(array) adds 
       the count of the null terminator to the string length 
    */
    std::cout << "using strlen() : " << str_length <<" using sizeof() : " << sizeof(name) <<std::endl;

    if(str_length > 1){
        for(int i = 0;  i < (str_length); i++){
            if(((str_length - i) - (i)) > 0 ){
                char save = name[i];
                name[i] = name[str_length - i];
                name[str_length - i] = save;
            }
            else{
                break;
            } 
        }
    }
        
    std::cout << "Reverse string : "<< name <<std::endl;
    

    return 0;
}