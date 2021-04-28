#ifndef ethernetclient_h
#define ethernetclient_h

#include "IPAddress.h"
#include "string.h"
class EthernetClient
{
public:
  EthernetClient();
  int connect(void *con_ptr , IPAddress ip, uint16_t port); //adding the pointer to the connection
  size_t write(const uint8_t *buf, size_t size);
  int read();
  int read(uint8_t *buf, size_t size);
  void stop();
  uint8_t connected();
private:
  static uint16_t _srcport;
  uint8_t _sock;
};

#endif
