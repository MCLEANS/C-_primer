#include <iostream>

int main(int argc, char* argv[]){

	/* Print character array */
	//char text[] = {'h','e','l','l','o'};
	char text[] = "hello";
	std::cout<<text<<std::endl;

	std::cout<<"\n";
	/* Character arrays have a null string terminator to enable mark where 
	  the string ends 
	*/
	for(size_t i = 0; i < sizeof(text); i++){
		std::cout<< i << " : " << text[i] << std::endl;
	}
	std::cout<<"\n";

	/* The length of the string is actually 6 even though we put in 5 characters,
	    this is because the null terminator takes in the last position when it is added
	*/
	std::cout<<"length of string is : "<< sizeof(text)/sizeof(char) << std::endl;
	std::cout<<"\n";

	/* With the null terminator we could loop through a character array using a while
	   loop and know exactly when to stop
	*/
	int k  = 0;
	while(true){
		if(text[k] == '\0'){
			break;
		}
		std::cout<<text[k]<<std::flush;

		k++;
	}
	std::cout<<"\n";
	std::cout<<"\n";

	return 0;
}
