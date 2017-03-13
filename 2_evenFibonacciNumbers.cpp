#include <iostream>

unsigned int function(){
	unsigned int a = 0, b = 1, c = 1, sum = 0, limit = 4000000;
	
	while(c < limit){
		a = b; b = c;
		c = a + b;
		
		if(c%2 == 0){sum += c;}
	}
	
	return sum;
}

int main(int argumentCount, char *arguments[]){
	std::cout << "Hello" << std::endl;
	std::cout << function() << std::endl;
	return 0;
}
