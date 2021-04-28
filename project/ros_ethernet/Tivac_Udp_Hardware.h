/*
 * Tivac_Udp_Hardware.h
 *
 *  Created on: Apr 28, 2021
 *      Author: Lenovo PC
 */

#ifndef TIVAC_UDP_HARDWARE_H_
#define TIVAC_UDP_HARDWARE_H_


#include <Ethernet.h>
class TIVA_C_HARDWARE {
public:
    TIVA_C_HARDWARE()
  {

  }

  void setConnection(IPAddress &server, int port = 11411)
  {
    server_ = server;
    serverPort_ = port;
  }

  IPAddress getLocalIP()
  {
    return Ethernet.localIP();
  }

  void init()
  {
    if(udp_.connected())
    {
      udp_.stop();
    }
    udp_.connect(server_, serverPort_);
  }

  int read()
  {
    if (udp_.connected())
    {
        return udp_.read();
    }
    else
    {
      udp_.stop();
      udp_.connect(server_, serverPort_);
    }
    return -1;
  }

  void write(const uint8_t* data, int length)
  {
     udp_.write(data, length);
  }

  unsigned long time()
  {
    //return millis();
  }

  bool connected()
  {
    return udp_.connected();
  }

  EthernetClient udp_;

  IPAddress server_;
  uint16_t serverPort_ = 11411;
};


#endif /* TIVAC_UDP_HARDWARE_H_ */