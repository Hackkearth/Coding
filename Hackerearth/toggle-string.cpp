//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/

#include <iostream>
#include <string>

int main(){
	std::string s;
	std::cin>>s;

	for(int i=0 ; i < s.size() ; i++){
		if(s[i] <= 90)
			s[i] += 32;
		else 
			s[i] -= 32;	
	}

	std::cout<<s;
}
