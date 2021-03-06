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

#include "ports/config.h"
#include "interface/lwip_int.h"

#if ECU1
#include "interface/lwip_int.h"
#include "string.h"
ip_addr_t ip_addr ;
ip_addr_t Remote_ip_addr ={0xfbb03014 } ;
ip_addr_t net_mask = { 0xfbb00000};
ip_addr_t  gw_addr = { 0xfbb02526};
struct udp_pcb * Udp_ptr = NULL;
uint8_t buffer[100]={0};
u16_t port_1 =1010;
u16_t port_remote =2020;


extern void send(const uint8_t* data, int length) ;
int main()
{

    ip_addr.addr = 0xfbb03020;
    Remote_ip_addr.addr=htonl(Remote_ip_addr.addr);
    ECU_int(&g_sNetIF, 0 ,  &ip_addr, &net_mask, &gw_addr);
    memset(buffer,5,100);
    Udp_ptr = udp_new();
    err_t result1 =  udp_bind(Udp_ptr , &ip_addr ,port_1);
    err_t result2 =  udp_connect(Udp_ptr, &Remote_ip_addr,port_remote);
    Udp_ptr->recv = UDP_recv;
    send(buffer, 100);
    while(1)
    {

    }
}





#endif



#if ECU2
#include "interface/lwip_int.h"
#include "string.h"
ip_addr_t ip_addr ;
ip_addr_t Remote_ip_addr ={0xfbb03020} ;
ip_addr_t net_mask = { 0xfbb00000};
ip_addr_t  gw_addr = { 0xfbb02526};
struct udp_pcb * Udp_ptr = NULL;
uint8_t buffer[100]={0};
u16_t port_1 =2020;
u16_t port_remote =1010;


extern void send(const uint8_t* data, int length) ;
int main()
{

    ip_addr.addr = 0xfbb03014;
    Remote_ip_addr.addr=htonl(Remote_ip_addr.addr);
    ECU_int(&g_sNetIF, 0 ,  &ip_addr, &net_mask, &gw_addr);
    memset(buffer,8,100);
    Udp_ptr = udp_new();
    err_t result1 =  udp_bind(Udp_ptr , &ip_addr ,port_1);
    err_t result2 =  udp_connect(Udp_ptr, &Remote_ip_addr,port_remote);
    Udp_ptr->recv = UDP_recv;

    while(1)
    {

    }
}
#endif












void send(const uint8_t* data, int length)
{
    struct pbuf *p;
    if (   (p= pbuf_alloc(PBUF_udp, length,PBUF_RAM) )== NULL) { return ERR_MEM;}  /* not enough space */           // Length of data only and payload point to the start of data

    memcpy(p->payload,(u8_t*)data ,length);
    err_t n= udp_send(Udp_ptr, p);
    pbuf_free(p);
}






























