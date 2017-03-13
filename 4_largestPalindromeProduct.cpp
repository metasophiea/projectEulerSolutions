// -std=c++11

#include <iostream>
#include <string>

bool isPalindrome(std::string word){
	for(unsigned int a = 0; a < ((word.length()/2)+1); a++){ if(word[a] != word[word.length()-1 - a]){return false;} }
	return true;
}

unsigned int function(){
	std::string str = ""; unsigned int bestNumber = 0;
	for(unsigned int a = 999; a > 900; a--){
		for(unsigned int b = 999; b > 900; b--){
			if( isPalindrome(std::to_string((a*b))) && (a*b) > bestNumber){ bestNumber = (a*b); }
		}
	}
	
	return bestNumber;
}

int main(int argumentCount, char *arguments[]){
	std::cout << "Hello" << std::endl;
	std::cout << function() << std::endl;
	return 0;
}
