//============================================================================
// Name        : main.cpp
// Author      : Francisco Maria / Jo�o Gama Amaral
// Version     :
// Copyright   :
// Description : Main file of the first project of AEDA class.
//============================================================================

#include "Libraries.h"
#include "Interface.h"
#include "ImportInfo.h"


void importInfo(MovingCompany& company){

	importCountries(company);
	importCountriesZones(company);
	importClients(company);
	importServices(company);

}

void terminateProgram(){
	std::cout << "\n\n\t\tProgram terminated." << std::endl;
}

int main() {

	//int numberofExistentClients;  --> Esta varia�vel tem o valor de quantos clientes existiam no fich antes da exec do prog de forma a saber quantos novos foram criados e quais sao precisos escrever
	MovingCompany company("EletroMoving, S.A.", "Great company with moving.", 10, 9, 1995);

	importInfo(company);

	//company.printClientServices(1);
	std::cout << company.getClients()[0]->getServicesRequested()[1]->getDeliveryEndDate();
	//run(company);

	terminateProgram();
	//DELETE DE TUDO!!!!!

	return 0;
}
