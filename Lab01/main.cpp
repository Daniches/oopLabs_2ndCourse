#include <cstdlib>
#include <cstring>
#include "pentagon.h"
#include "hexagon.h"
#include "octagon.h"

const int str_size = 32;

int main(int argc, char** argv) {
	Pentagon* pen_ptr = nullptr;
	Hexagon*  hex_ptr = nullptr;
	Octagon*  oct_ptr = nullptr;

	char s[str_size];
	std::cout << "Hello, this program supports working with pentagons, hexagons and octagons" << std::endl;
	std::cout << "Type \"help\" to see manual" << std::endl;

	while (true) {
		std::cin.getline(s, str_size);
		std::cin.clear();
		std::cin.sync();

		if (!strcmp(s, "help")) {
			std::cout << "List of commands:" << std::endl;
			std::cout << "For working with the program" << std::endl;
			std::cout << "	1) \"quit\" - to exit the program" << std::endl;
			std::cout << "	2) \"help\" - to see manual" << std::endl;
			std::cout << "For pentagons:" << std::endl;
			std::cout << "	1) \"create pentagon\"     or \"c_pen\" - to create pentagon"  << std::endl;
			std::cout << "	2) \"pentagon parameters\" or \"p_pen\" - to see parameters of pentagon" << std::endl;
			std::cout << "	3) \"pentagon square\"     or \"s_pen\" - to see the area of pentagon" << std::endl;
			std::cout << "	4) \"delete pentagon\"     or \"d_pen\" - to delete pentagon" << std::endl;
			std::cout << "For hexagons:" << std::endl;
			std::cout << "	1) \"create hexagon\"     or \"c_hex\" - to create hexagon" << std::endl;
			std::cout << "	2) \"hexagon parameters\" or \"p_hex\" - to see parameters of hexagon" << std::endl;
			std::cout << "	3) \"hexagon square\"     or \"s_hex\" - to see the area of hexagon" << std::endl;
			std::cout << "	4) \"delete hexagon\"     or \"d_hex\" - to delete hexagon" << std::endl;
			std::cout << "For octagons:" << std::endl;
			std::cout << "	1) \"create octagon\"     or \"c_oct\" - to create octagon" << std::endl;
			std::cout << "	2) \"octagon parameters\" or \"p_oct\" - to see parameters of octagon" << std::endl;
			std::cout << "	3) \"octagon square\"     or \"s_oct\" - to see the area of octagon" << std::endl;
			std::cout << "	4) \"delete octagon\"     or \"d_oct\" - to delete octagon" << std::endl;
			continue;
		}

		//Pentagon
		if (!strcmp(s, "create pentagon") || !strcmp(s, "c_pen")) {
			if (pen_ptr != nullptr) delete pen_ptr;
			std::cout << "Input the side of pentagon:" << std::endl;
			pen_ptr = new Pentagon(std::cin);
			continue;
		}
		if (!strcmp(s, "pentagon parameters") || !strcmp(s, "p_pen")) {
			if (pen_ptr != nullptr) {
				pen_ptr->Print();
			}
			else {
				std::cout << "Pentagon does not exist, try to create one first" << std::endl;
			}
			continue;
		}
		if (!strcmp(s, "pentagon square") || !strcmp(s, "s_pen")) {
			if (pen_ptr != nullptr) {
				std::cout << "Square of pentagon: " << pen_ptr->Square() << std::endl;
			}
			else {
				std::cout << "Pentagon does not exist, try to create one first" << std::endl;
			}
			continue;
		}
		if (!strcmp(s, "delete pentagon") || !strcmp(s, "d_pen")) {
			if (pen_ptr != nullptr) {
				delete pen_ptr;
				pen_ptr = nullptr;
			}
			else {
				std::cout << "Pentagon does not exist, try to create one first" << std::endl;
			}
			
			continue;
		}

		//Hexagon
		if (!strcmp(s, "create hexagon") || !strcmp(s, "c_hex")) {
			if (hex_ptr != nullptr) delete hex_ptr;
			std::cout << "Input the side of hexagon: " << std::endl;
			hex_ptr = new Hexagon(std::cin);
			continue;
		}
		if (!strcmp(s, "hexagon parameters") || !strcmp(s, "p_hex")) {
			if (hex_ptr != nullptr) {
				hex_ptr->Print();
			}
			else {
				std::cout << "Hexagon does not exist, try to create one first" << std::endl;
			}
			continue;
		}
		if (!strcmp(s, "hexagon square") || !strcmp(s, "s_hex")) {
			if (hex_ptr != nullptr) {
				std::cout << "Square of hexagon: " << hex_ptr->Square() << std::endl;
			}
			else {
				std::cout << "Hexagon does not exist, try to create one first" << std::endl;
			}
			continue;
		}
		if (!strcmp(s, "delete hexagon") || !strcmp(s, "d_hex")) {
			if (hex_ptr != nullptr) {
				delete hex_ptr;
				hex_ptr = nullptr;
			}
			else {
				std::cout << "Hexagon does not exist, try to create one first" << std::endl;
			}
		}

		//Octagon
		if (!strcmp(s, "create octagon") || !strcmp(s, "c_oct")) {
			if (oct_ptr != nullptr) delete oct_ptr;
			std::cout << "Input the side of octagon:" << std::endl;
			oct_ptr = new Octagon(std::cin);
			continue;
		}
		if (!strcmp(s, "octagon parameters") || !strcmp(s, "p_oct")) {
			if (oct_ptr != nullptr) {
				oct_ptr->Print();
			}
			else {
				std::cout << "Octagon does not exist, try to create one first" << std::endl;
			}
			continue;
		}
		if (!strcmp(s, "octagon square") || !strcmp(s, "s_oct")) {
			if (oct_ptr != nullptr) {
				std::cout << "Square of octagon: " << oct_ptr->Square() << std::endl;
			}
			else {
				std::cout << "Octagon does not exist, try to create one first" << std::endl;
			}
			continue;
		}
		if (!strcmp(s, "delete octagon") || !strcmp(s, "d_oct")) {
			if (oct_ptr != nullptr) {
				delete oct_ptr;
				oct_ptr = nullptr;
			}
			else {
				std::cout << "Octagon does not exist, try to create one first" << std::endl;
			}
		}

		if (!strcmp(s, "quit")) {
			if (pen_ptr != nullptr) {
				delete pen_ptr;
			}
			if (hex_ptr != nullptr) {
				delete hex_ptr;
			}
			if (oct_ptr != nullptr) {
				delete oct_ptr;
			}
			break;
		}
	}
}