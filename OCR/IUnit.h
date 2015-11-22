#pragma once

#include "Synapse.h"

class IUnit
{
public:

	virtual int getId() const = 0;
	virtual double getSignalRaw() const = 0;
	virtual void addSynapsesIn(Synapse s) = 0;
	virtual void addSynapsesOut(Synapse s) = 0;
};

