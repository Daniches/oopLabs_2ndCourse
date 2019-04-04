#include "octagon.h"
#include <iostream>
#include <cmath>

#define PI 3.1415926535

Octagon::Octagon() : Octagon(0) {
}

Octagon::Octagon(int s) : side(s) {
	if (side < 0) {
		std::cerr << "ERROR: side of octagon must be greater than 0." << std::endl;
		side = 0;
	}

	std::cout << "Octagon created with side = " << side << '.' << std::endl;
}

Octagon::Octagon(std::istream &is) {
	is >> side;
	if (side < 0) {
		side = 0;
		std::cerr << "ERROR: side of octagon must be greater than 0." << std::endl;
	}

	std::cout << "Octagon created with side = " << side << '.' << std::endl;
}

Octagon::Octagon(const Octagon& orig) {
	std::cout << "Octagon copy created." << std::endl;
	side = orig.side;
}

double Octagon::Square() {
	return (((double)(side*side)) * 2 *(1 + sqrt(2)));
}

void Octagon::Print() {
	std::cout << "Side of : " << side << '.' << std::endl;
}

Octagon::~Octagon() {
	std::cout << "Octagon was deleted." << std::endl;
}
