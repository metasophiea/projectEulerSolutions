// -std=c++11
#include <iostream>
#include <math.h>   

bool hasSquareC(unsigned int a, unsigned int b){
	float float_temp = sqrt( ((a*a) + (b*b)) );
	float float_temp_2 = (int)float_temp;
	if(float_temp == float_temp_2){ return true; }
	return false;
}

unsigned int function(){		
	float c = 0;

	for(unsigned int a = 1; a < 400; a++){
		for(unsigned int b = a; b < 400; b++){
			if(hasSquareC(a,b)){ c = sqrt((a*a) + (b*b));
				if((a+b+c) == 1000){
					std::cout << a << " + " << b << " + " << c << " = " << (a+b+c) << std::endl; 
					return 0; 
				}
			}
		}
	}

	return 0;
}

int main(int argumentCount, char *arguments[]){
	std::cout << "Hello" << std::endl;
	std::cout << function() << std::endl;
	return 0;
}
