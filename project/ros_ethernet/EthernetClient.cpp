
#include "EthernetClient.h"
#include "stdint.h"
//uint16_t EthernetClient::_srcport = 49152;      //Use IANA recommended ephemeral port range 49152-65535
extern int16_t recv(uint8_t s, uint8_t *buf, int16_t len);
EthernetClient::EthernetClient()
{
}
int EthernetClient::connect(void *con_ptr ,IPAddress ip, uint16_t port)
{
  return 0;
  return 1;
}
size_t EthernetClient::write(const uint8_t *buf, size_t size)
{
  return 0;
  return size;
}
int EthernetClient::read()
{
  uint8_t b;
  if ( recv(_sock, &b, 1) > 0 )
  {
    // recv worked
    return b;
  }
  else
  {
    // No data available
    return -1;
  }
}
int EthernetClient::read(uint8_t *buf, size_t size)
{
  return recv(_sock, buf, size);
}
void EthernetClient::stop()
{
}
uint8_t EthernetClient::connected()
{
}

