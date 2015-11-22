#pragma once

#include <vector>
#include "IUnit.h"
#include "Synapse.h"

using namespace std;

class UnitExt :
	public IUnit
{
	int _id;
	double _signal;
	vector<Synapse> _sIn;
	vector<Synapse> _sOut;

public:
	UnitExt(int id);
	~UnitExt();

	int getId() const;
	double getSignalRaw() const;

	Synapse getSynapseIn(int n) const;
	Synapse getSynapseOut(int n) const;

	void addSynapsesIn(Synapse s);
	void addSynapsesOut(Synapse s);
};

