/*
 * main.c
 *
 *  Created on: Mar 29, 2021
 *      Author: Lenovo PC
 */


//#include "src/include/lwip/opt.h"
//#include "src/include/lwip/udp.h"
//#include "src/include/lwip/mem.h"
//#include "src/include/lwip/memp.h"
//#include "src/include/lwip/dns.h"

#include "interface/lwip_int.h"

ip_addr_t ip_addr ;
ip_addr_t net_mask = { 0xfbb00000};
ip_addr_t  gw_addr = { 0xfbb02526};


int main()
{

    ip_addr.addr = 0xfbb03020;
     ECU_int(&g_sNetIF, 0 ,  &ip_addr, &net_mask, &gw_addr);
}
