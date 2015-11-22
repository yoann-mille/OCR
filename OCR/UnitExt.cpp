#include "stdafx.h"
#include "UnitExt.h"

UnitExt::UnitExt(int id)
	: _id(id), _signal(0.0f)
{
}

UnitExt::~UnitExt()
{
}

int UnitExt::getId() const
{
	return _id;
}

double UnitExt::getSignalRaw() const
{
	return _signal;
}

Synapse UnitExt::getSynapseIn(int n) const
{
	return _sIn.at(n);
}

Synapse UnitExt::getSynapseOut(int n) const
{
	return _sOut.at(n);
}

void UnitExt::addSynapsesIn(Synapse s)
{
	_sIn.push_back(s);
}

void UnitExt::addSynapsesOut(Synapse s)
{
	_sOut.push_back(s);
}
