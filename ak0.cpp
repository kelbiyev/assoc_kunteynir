#include <iostream> 
#include <map>
#include <string>

int main(){
	std::map<std::string , int> years {
		{"Moscow" , 1147},
		{"Rome" , -753},
		{"London" , 47}
	};
	
	for(const auto& [city,year]: years)
		std::cout<< city << ": " << year <<"\n";
		
	

	return 0;
}
// it will be sorted because of the MAP where keys are in alphabetical order 
