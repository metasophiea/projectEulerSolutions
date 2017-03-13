// -std=c++11
#include <iostream>

unsigned int function(){
	unsigned int numberLimit = 100, sum_1 = 0, sum_2 = 0;
	
	for(unsigned int a = 1; a <= numberLimit; a++){
		sum_1 += a;
		sum_2 += a*a;
	}
	
	sum_1 = sum_1*sum_1;	

	return sum_1-sum_2;
}

int main(int argumentCount, char *arguments[]){
	std::cout << "Hello" << std::endl;
	std::cout << function() << std::endl;
	return 0;
}
