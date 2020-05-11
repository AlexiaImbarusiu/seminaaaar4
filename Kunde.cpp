#include "Kunde.h"

Kunde::Kunde(int id, string name)
{
	Id = id;
	Name = name;
}

int Kunde::get_id()
{
	return Id;
}

void Kunde::set_id(int id)
{
	Id = id;
}

string Kunde::get_name()
{
	return Name;
}

void Kunde::set_name(string name)
{
	Name = name;
}

Kunde::~Kunde()
{
}
