#include "Singleton.h"
Singleton* Singleton::instance = nullptr;

Singleton::Singleton()
{
	id = 1;
}


Singleton::Singleton(int id)
{
	this->id = id;
}


Singleton& Singleton::createur() {
	if (!instance) {
		instance = new Singleton();
	}
	return *instance;
}


Singleton::~Singleton()
{
	if (instance)
		delete instance;
}

