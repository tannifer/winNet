// Networking libraries

#include "stdafx.h" 
#include "network.h"

int network::sendMessage(SOCKET curSocket, char * message, int messageSize)
{
	return send(curSocket, message, messageSize, 0);
}

int network::receiveMessage(SOCKET curSocket, char * buffer, int bufSize)
{
	return recv(curSocket, buffer, bufSize, 0);
}
