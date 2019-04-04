#ifndef PENTAGON_H
#define	PENTAGON_H
#include <cstdlib>
#include <iostream>
#include "figure.h"

class Pentagon : public Figure {
public:
	Pentagon();
	Pentagon(std::istream &is);
	Pentagon(int side);
	Pentagon(const Pentagon& orig);

	double Square() override;
	void   Print() override;

	virtual ~Pentagon();
private:
	int side;
};

#endif	/* PENTAGON_H */