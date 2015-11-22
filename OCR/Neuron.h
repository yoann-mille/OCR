#pragma once

#include <vector>
#include "IUnit.h"
#include "Layer.h"

using namespace std;

#define SIGNAL 0
#define POTENTIAL 1

class Neuron :
	public IUnit
{
	int _id;
	int _nbParam;
	vector<double> _param;
	int _nbSynIn;
	vector<Synapse> _sIn;
	int _nbSynOut;
	vector<Synapse> _sOut;
	Layer _layer;

public:
	Neuron(Layer l, int id, int param);
	~Neuron();

	void addSynapseIn(Synapse s);
	void addSynapseOut(Synapse s);
	Synapse getSynapseIn(int n);
	Synapse getSynapseOut(int n);

	void setPotential(double p);
	double getPotential() const;
	double calcPotential();

	void setSignal(double s);
	double getSignalRaw() const;
	double calcSignal();

	double getParam(int n);
	void setParam(int n, double v);

};