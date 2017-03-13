#include <iostream>
#include <cmath>

bool isPrime(float a){
	unsigned int c = a;
	for(unsigned int b = 2; b <= ((c/2)+1); b++){ if(c%b == 0){return false;} }
	
	return true;
}

unsigned int function(){
	float value = 600851475143;
	unsigned int ans = 0;
	
	for(float a = 2; a < 10000; a++){
		if(std::fmod(600851475143,a) == 0){
			if(isPrime(a)){ ans = a; }
		}
	}
	
	return ans;
}

int main(int argumentCount, char *arguments[]){
	std::cout << "Hello" << std::endl;
	std::cout << function() << std::endl;
	return 0;
}
