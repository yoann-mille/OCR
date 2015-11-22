#pragma once

#include <vector>
#include "IUnit.h"

using namespace std;

class IUnitGroup
{
public:

	virtual int getId() const = 0;
	virtual vector<IUnit *> getUnit() const = 0;
	virtual IUnit getUnit(int u) const = 0;
	virtual int getNbUnit() const = 0;
};
