#ifndef ethernetclient_h
#define ethernetclient_h
#include "Arduino.h"	
#include "Print.h"
#include "Client.h"
#include "IPAddress.h"

class EthernetClient : public Client {

public:
  EthernetClient();
  virtual int connect(void *con_ptr , IPAddress ip, uint16_t port); //adding the pointer to the connection
  virtual size_t write(const uint8_t *buf, size_t size);
  virtual int read();
  virtual int read(uint8_t *buf, size_t size);
  virtual void stop();
  virtual uint8_t connected();

  //uint8_t status();
  //EthernetClient(uint8_t sock);
  //virtual int connect(const char *host, uint16_t port);
  //virtual size_t write(uint8_t);
  //virtual int available();
  //virtual int peek();
  //virtual void flush();
//  virtual operator bool();
//  virtual bool operator==(const bool value) { return bool() == value; }
//  virtual bool operator!=(const bool value) { return bool() != value; }
//  virtual bool operator==(const EthernetClient&);
//  virtual bool operator!=(const EthernetClient& rhs) { return !this->operator==(rhs); };
//  uint8_t getSocketNumber();

  friend class EthernetServer;
  
  //using Print::write;

private:
  static uint16_t _srcport;
  uint8_t _sock;
};

#endif
