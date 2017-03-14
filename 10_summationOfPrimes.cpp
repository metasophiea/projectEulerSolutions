// -std=c++11
#include <iostream>

float function(){		
	unsigned int limit = 2000000;
	unsigned int* numberArray = new unsigned int[limit];
	
	//populate number list
	for(unsigned int a = 1; a <= limit; a++){ numberArray[a] = a; }

	unsigned int worker = 1, sum = 0;
	for(unsigned int base = 2; base < (limit/2)+1; base++){
		worker = base; sum = 0;
		while(sum < limit){
			numberArray[sum] = 0;
			sum = base*worker;
			worker++;
		}
	}
	
	float float_sum = 0;
	for(unsigned int a = 0; a < limit; a++){ float_sum += numberArray[a]; }
	
	return float_sum;
}

int main(int argumentCount, char *arguments[]){
	std::cout << "Hello" << std::endl;
	std::cout << function() << std::endl;
	return 0;
}
