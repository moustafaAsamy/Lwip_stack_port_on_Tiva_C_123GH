
#include "Ethernet.h"

EthernetClass Ethernet;

void EthernetClass::begin(uint8_t *mac_address, IPAddress local_ip ,IPAddress gateway ,IPAddress subnet )
{
}
IPAddress EthernetClass::localIP()
{
  IPAddress ret;
  return ret;
}

IPAddress EthernetClass::subnetMask()
{
  IPAddress ret;
  return ret;
}

IPAddress EthernetClass::gatewayIP()
{
  IPAddress ret;
  return ret;
}


