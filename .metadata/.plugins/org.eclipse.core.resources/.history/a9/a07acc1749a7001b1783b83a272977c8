/*
 * lwip_int.h
 *
 *  Created on: Sep 29, 2019
 *      Author: lenovo
 */

#ifndef LWIP_LWIP_INT_H_
#define LWIP_LWIP_INT_H_

#include "utils/lwiplib.h"

//#include "lwip/opt.h"
//#include "lwip/pbuf.h"
//#include "lwip/ip_addr.h"
//#include "lwip/netif.h"
//#include "lwip/ip.h"
//#include "lwip/tcp.h"
//#include <lwip/etharp.h>
//#include "lwip/tcp_impl.h"
//#include "lwip/udp.h"
//#include "string.h"


//extern struct netif netIf_List[5] ;
void ECU_int(struct netif *netif, u8_t controller_id ,  ip_addr_t *ipaddr, ip_addr_t *netmask,ip_addr_t *gw);
void UDP_recv(void *arg, struct udp_pcb *pcb, struct pbuf *p,ip_addr_t *addr, u16_t port);
//extern udp_recv_fn recv ;

void print(const char *pcString);
void application_timer(void);
void SimpleDelay(void);
void timer(void);
void ECU_START_RX(void);
void ECU_START_TX(void);
void app_task_tx_udp(void);


#endif /* LWIP_LWIP_INT_H_ */
