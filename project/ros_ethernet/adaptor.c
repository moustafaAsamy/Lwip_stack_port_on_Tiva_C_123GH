/*
 * adaptor.c
 *
 *  Created on: Apr 28, 2021
 *      Author: Lenovo PC
 */




/**
 * @brief   This function is an application I/F function which is used to receive the data in TCP mode.
 *      It continues to wait for data as much as the application wants to receive.
 *
 * @return  received data size for success else -1.
 */
int16_t recv(SOCKET s, uint8_t *buf, int16_t len);



uint16_t send(SOCKET s, const uint8_t * buf, uint16_t len);
