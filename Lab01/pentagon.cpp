#include "pentagon.h"
#include <iostream>
#include <cmath>

#define PI 3.1415926535

Pentagon::Pentagon() : Pentagon(0) {
}

Pentagon::Pentagon(int s) : side(s) {
	if (side < 0) {
		std::cerr << "ERROR: side of pentagon must be greater than 0." << std::endl;
		side = 0;
	}

	std::cout << "Pentagon created with side = " << side << '.' <<std::endl;
}

Pentagon::Pentagon(std::istream &is) {
	is >> side;
	if (side < 0) {
		side=0;
		std::cerr << "ERROR: side of pentagon must be greater than 0." << std::endl;
	}

	std::cout << "Pentagon created with side = " << side << '.' << std::endl;
}

Pentagon::Pentagon(const Pentagon& orig) {
	std::cout << "Hexagon copy created." << std::endl;
	side = orig.side;
}

double Pentagon::Square() {
	return (double)(5 * side * side / (4 * (double)tan(36 * (PI / 180))));
}

void Pentagon::Print() {
	std::cout << "Side of pentagon: " << side << '.' << std::endl;
}

Pentagon::~Pentagon() {
	std::cout << "Pentagon was deleted." << std::endl;
}
