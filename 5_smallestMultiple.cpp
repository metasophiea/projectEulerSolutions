// -std=c++11

#include <iostream>

bool testDivisor(unsigned int testingNumber,unsigned int divisorLimit){
	for(unsigned int a = 1; a < divisorLimit; a++){
		if( testingNumber%a != 0){return false;}
	}
	return true;
}

unsigned int function(){
	unsigned int divisorLimit = 20, testingNumber = 0, count = 1;
	bool fufilled = false;
	
	while(!fufilled){
		testingNumber = count*divisorLimit;
		if(testDivisor(testingNumber,divisorLimit)){
			fufilled = true;
		}
		count++;
	}
	
	return testingNumber;
}

int main(int argumentCount, char *arguments[]){
	std::cout << "Hello" << std::endl;
	std::cout << function() << std::endl;
	return 0;
}
