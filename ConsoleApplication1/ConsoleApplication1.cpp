// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "ServerNetwork.h"

using namespace std;

int main()
{
    
	cout << "Hello World";
	ServerNetwork* newNetwork;
	newNetwork = new ServerNetwork();
	int unsigned client_id = 0;
	while (true) {
		if (newNetwork->acceptNewClient(client_id)) {
			printf("I have a connection\n");
			return false;
		}
	}
	
	return 0;


}

