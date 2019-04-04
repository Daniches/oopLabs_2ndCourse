#include "hexagon.h"
#include <iostream>
#include <cmath>

Hexagon::Hexagon() : Hexagon(0) {
}

Hexagon::Hexagon(int s) : side(s) {
	if (side < 0) {
		std::cerr << "ERROR: side of hexagon must be greater than 0." << std::endl;
		side = 0;
	}

	std::cout << "Hexagon created with side = " << side << '.' << std::endl;
}

Hexagon::Hexagon(std::istream &is) {
	is >> side;
	if (side < 0) {
		side = 0;
		std::cerr << "ERROR: side of hexagon must be greater than 0." << std::endl;
	}

	std::cout << "Hexagon created with side = " << side << '.' << std::endl;
}

Hexagon::Hexagon(const Hexagon& orig) {
	std::cout << "Hexagon copy created." << std::endl;
	side = orig.side;
}

double Hexagon::Square() {
	return ((double)(side*side)*3*sqrt(3)/2);
}

void Hexagon::Print() {
	std::cout << "Side of hexagon: " << side << '.' << std::endl;
}

Hexagon::~Hexagon() {
	std::cout << "Hexagon was deleted." << std::endl;
}
