#include "stdafx.h"
#include "Neuron.h"

Neuron::Neuron(Layer l, int id, int param)
	: _layer(l), _id(id), _nbParam(param), _nbSynIn(0), _nbSynOut(0)
{
}

Neuron::~Neuron()
{
}

void Neuron::addSynapseIn(Synapse s)
{
	_nbSynIn++;
	_sIn.push_back(s);
}

void Neuron::addSynapseOut(Synapse s)
{
	_nbSynOut++;
	_sOut.push_back(s);
}

Synapse Neuron::getSynapseIn(int n)
{
	return _sIn.at(n);
}

Synapse Neuron::getSynapseOut(int n)
{
	return _sOut.at(n);
}

void Neuron::setPotential(double p)
{
	_param.at(POTENTIAL) = p;
}

double Neuron::getPotential() const
{
	return _param.at(POTENTIAL);
}

double Neuron::calcPotential()
{
	double p = 0.0;

	for (const Synapse &s : _sIn)
		p += s.getValSyn();
	return p;
}

void Neuron::setSignal(double s)
{
	_param.at(SIGNAL) = s;
}

double Neuron::getSignalRaw() const
{
	return _param.at(SIGNAL);
}

double Neuron::calcSignal()
{
	return FonctionTransfert.calcTransfert(
		_layer.getTypeFT()
		._param.at(POTENTIAL)
		._layer.paramFT);
}

double Neuron::getParam(int n)
{
	return _param.at(n);
}

void Neuron::setParam(int n, double v)
{
	_param.at(n) = v;
}
