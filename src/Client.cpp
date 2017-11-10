/*
 * Client.cpp
 *
 *  Created on: 01/11/2017
 *      Author: Francisco Maria / Jo�o Gama Amaral
 */

#include "Client.h"

int Client::numberOfClients = 0;

/*
 *  Client constructor
 */

Client::Client(std::string name, long int nif, std::string address, std::string zipCode, int firstDay, int firstMonth, int firstYear):
				address(Address(address, zipCode, "Porto", "Portugal")), joiningDate(Date(firstDay, firstMonth, firstYear)){
	numberOfClients++;
	this->id = numberOfClients;
	this->name = name;
	this->NIF = nif;
}

int Client::getId() const{ return id; }

long int Client::getNIF() const{ return NIF; }

std::string Client::getName() const{ return name; }

const Address& Client::getAddress() const{ return address; }

std::string Client::getZipCode() const{ return address.getZipCode(); }

bool Client::operator ==(const Client& c1){
	if(this->id == c1.getId() && this->name == c1.getName()) return true;
	return false;
}

const Date& Client::getJoiningDate() const{ return joiningDate; }

int Client::getNumberOfClients(){ return numberOfClients; }

/*
 * Company Constructor
 */

int Company::numberOfCompanies = 0;

Company::Company(std::string name, long int nif, std::string address, std::string zipCode, int firstDay, int firstMonth, int firstYear)
: Client(name, nif, address, zipCode, firstDay, firstMonth, firstYear){
	numberOfCompanies++;
}

int Company::getNumberOfCompanies(){ return numberOfCompanies; }



/*
 *  Particular constructor
 */

int Particular::numberOfParticulars = 0;

Particular::Particular(std::string name, int age, long int nif, std::string address, std::string zipCode, int firstDay, int firstMonth, int firstYear)
: Client(name, nif, address, zipCode, firstDay, firstMonth, firstYear){
	this->age = age;
	numberOfParticulars++;
}

int Particular::getAge() const{ return age; }

int Particular::getNumberOfParticulars(){ return numberOfParticulars; }







