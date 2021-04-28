

/**
 * main.c
 */
#include "ros_lib\ros\msg.h"
#include "ros_lib\ros\Publisher.h"
#include "ros_lib\ros\msg.h"
#include "ros_lib\ros\ros.h"
#include "ros_lib/std_msgs/String.h"
#include "ros_lib\ros\node_handle.h"

//extern void send(const uint8_t* data, int length);
//extern uint8_t buffer[100];


 //_c_int00 data
///ros_lib/std_msgs String.h
//  HardwareSerial  Serial;

//unsigned long millis();
//ros::Publisher c;
//class Msg;
//ros::NodeHandle nh;
//std_msgs::String str_msg;
//ros::Publisher chatter("chatter", &str_msg);
//char hello[13] = "hello world!";
//int main(void)
//{
//	 nh.initNode();
//       nh.advertise(chatter);
//
//
//
//
//
//while(1)
//{
////    extern bool configured_ ;
//
//  str_msg.data = hello;
//  chatter.publish( &str_msg );
//  nh.spinOnce();
////  //delay(1000);
//}
//millis

//}
//HardwareSerial

//Serial
//ros::normalizeSecNSec
 ///HardwareSerial::begin

//ros::normalizeSecNSec


unsigned long millis()
{

}


#include <driverlib/rom_map.h>
#include <stdbool.h>
   #include <stdint.h>
   // TivaC specific includes
   extern "C"
   {
     #include <driverlib/sysctl.h>
     #include <driverlib/gpio.h>
   }
   // ROS includes
//   #include <ros.h>
  // #include <std_msgs/String.h>

   // ROS nodehandle
   ros::NodeHandle nh;

   std_msgs::String str_msg;
   ros::Publisher chatter("chatter", &str_msg);
   char hello[13] = "Hello world!";

   int main(void)
   {
     // TivaC application specific code
     //FPUEnable();
     //MAP_FPULazyStackingEnable();
     // TivaC system clock configuration. Set to 80MHz.
    MAP_SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);

     // ROS nodehandle initialization and topic registration
//     nh.initNode();
//     nh.advertise(chatter);

//     while (1)
//     {
//       // Publish message to be transmitted.
//       str_msg.data = hello;
//       chatter.publish(&str_msg);
//
//       // Handle all communications and callbacks.
//       nh.spinOnce();
//
//       // Delay for a bit.
//       nh.getHardware()->delay(100);
//     }
    }


//#include <stdbool.h>
//   2 #include <stdint.h>
//   3 // TivaC specific includes
//   4 extern "C"
//   5 {
//   6   #include <driverlib/sysctl.h>
//   7   #include <driverlib/gpio.h>
//   8   #include "buttons.h"
//   9 }
//  10 // ROS includes
//  11 #include <ros.h>
//  12 // Custom ROS message
//  13 #include "rosserial_tivac_tutorials/Buttons.h"
//  14
//  15 // ROS nodehandle
//  16 ros::NodeHandle nh;
//  17
//  18 rosserial_tivac_tutorials::Buttons button_msg;
//  19 ros::Publisher button_publisher("button_state", &button_msg);
//  20
//  21 int main(void)
//  22 {
//  23   // TivaC application specific code
//  24   MAP_FPUEnable();
//  25   MAP_FPULazyStackingEnable();
//  26   // TivaC system clock configuration. Set to 80MHz.
//  27   MAP_SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
//  28
//  29   uint8_t button_debounced_delta;
//  30   uint8_t button_raw_state;
//  31   ButtonsInit();
//  32
//  33   // ROS nodehandle initialization and topic registration
//  34   nh.initNode();
//  35   nh.advertise(button_publisher);
//  36
//  37   while (1)
//  38   {
//  39     uint8_t button_debounced_state = ButtonsPoll(&button_debounced_delta, &button_raw_state);
//  40     // Publish message to be transmitted.
//  41     button_msg.sw1.data = button_debounced_state & LEFT_BUTTON;
//  42     button_msg.sw2.data = button_debounced_state & RIGHT_BUTTON;
//  43     button_publisher.publish(&button_msg);
//  44
//  45     // Handle all communications and callbacks.
//  46     nh.spinOnce();
//  47
//  48     // Delay for a bit.
//  49     nh.getHardware()->delay(100);
//  50   }
//  51 }