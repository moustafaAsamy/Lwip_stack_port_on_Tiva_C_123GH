#ifndef ethernet_h
#define ethernet_h

#include "stdint.h"
#include "IPAddress.h"
#include "EthernetClient.h"





class EthernetClass {
public:
  void begin(uint8_t *mac_address, IPAddress local_ip ,IPAddress gateway ,IPAddress subnet );
  IPAddress localIP();
  IPAddress subnetMask();
  IPAddress gatewayIP();
  friend class EthernetClient;
};

extern EthernetClass Ethernet;

#endif
