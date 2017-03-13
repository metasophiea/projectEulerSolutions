// -std=c++11
#include <iostream>

bool isPrime(unsigned int a){
	for(unsigned int b = 2; b <= ((a/2)+1); b++){ if(a%b == 0){return false;} }
	
	return true;
}

unsigned int function(){
	unsigned int count = 0, limit = 1000000, target = 10001;
	
	for(unsigned int a = 0; a < limit; a++){
		if(isPrime(a)){
			count++;
			if(count == target+1){return a;}
		}
	}

	return 0;
}

int main(int argumentCount, char *arguments[]){
	std::cout << "Hello" << std::endl;
	std::cout << function() << std::endl;
	return 0;
}
