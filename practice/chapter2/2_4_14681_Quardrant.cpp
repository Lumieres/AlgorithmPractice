#include <iostream>

int main(void){
	int x,y;

	std::cin >> x >> y;
	if(x>0 && y>0){
		std::cout << 1 << std::endl;
	}
	else if(x<0 && y>0){
		std::cout << 2 << std::endl;
	}
	else if(x<0 && y<0){
		std::cout << 3 << std::endl;
	}
	else if(x>0 && y<0){
		std::cout << 4 << std::endl;
	}

	return 0;
}
