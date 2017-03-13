#include <iostream>

unsigned int function(){
	unsigned int limit = 1000;
	unsigned int sum = 0;
	unsigned int multiple_a = 3, multiple_b = 5;

	unsigned int temp = 0, count = 0;
	while(temp < limit){
		sum += temp; count++;
		temp = count*multiple_a;	
	}
	
	temp = 0, count = 0;
	while(temp < limit){
		count++;
		if(count % multiple_a != 0){
			sum += temp; 
			temp = count*multiple_b;
		}
	}
	
	return sum;
}

int main(int argumentCount, char *arguments[]){
	std::cout << "Hello" << std::endl;
	std::cout << function() << std::endl;
	return 0;
}
