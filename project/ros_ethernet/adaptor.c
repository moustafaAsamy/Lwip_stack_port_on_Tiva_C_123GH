/*
 * adaptor.c
 *
 *  Created on: Apr 28, 2021
 *      Author: Lenovo PC
 */

#include "stdint.h"

/**
 * @brief   This function is an application I/F function which is used to receive the data in TCP mode.
 *      It continues to wait for data as much as the application wants to receive.
 *
 * @return  received data size for success else -1.
 */
int16_t recv(uint8_t _sock, uint8_t *buf, int16_t len)
{
    //int16_t ret = read();// return no of bytes
//    / The connection is still up, but there's no data waiting to be read
//          ret = -1;
//    else if (ret > len)
//      {
//        ret = len;
//      }
//
//      if ( ret > 0 )
//      {
//          return ret;
//      }
}



uint16_t send(uint8_t _sock, const uint8_t * buf, uint16_t len)
{
    //@return 1 for success else 0.
}
