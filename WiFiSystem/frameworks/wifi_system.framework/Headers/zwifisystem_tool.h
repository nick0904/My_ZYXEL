//
//  zwifisystem_tool.h
//  wifi_system
//
//  Created by Kevin on 16/05/2017.
//
//

#ifndef zwifisystem_tool_h
#define zwifisystem_tool_h

#include <stdio.h>

int encryptedHash(char *data, const unsigned char *pkey, long pkey_len, char **outHash);
int getPublicKey(const char *certStr , unsigned char **key, long *keyLen);
int getCommonName(const char *certStr , char **name);
int getMacFromEchoServer(const char *serverIP, char *outMac, int macLen);

#endif /* zwifisystem_tool_h */
