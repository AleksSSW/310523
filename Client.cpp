#include "Client.h"

Client::Client(int id)
{
	_id = id;
}


void Client:: ShowId() {
	std::cout << "ID: " << _id << '\n';
}
