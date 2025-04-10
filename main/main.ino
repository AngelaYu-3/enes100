#include "movement.h"
#include "sensors.h"

uint32_t interval = 1000;

void setup() {
  // put your setup code here, to run once:
  delay(500);
  Serial.begin(9600);
  wifi_setup();
  // ultra_setup();
  // color_setup();
  // motor_setup();
}

void loop() {
  // *** wifi test ***
  // testing wifi receive
  wifi_get_X();
  wifi_get_Y();
  wifi_get_theta();
  // testing wifi transmit
  wifi_transmit_length(100);
  wifi_transmit_height(100);


  // **** ultrasonic test ****
  // ultra_get_distance();
  // delay(1000);


  // **** color test ***
  // is_red();
  // delay(100);
  // color_setup();
  // put your main code here, to run repeatedly:


  // *** motor test ***
  /* control_motor_A(100, true);
  delay(1000);
  control_motor_A(100, false);
  delay(1000);
  stop_motor_A();*/
}
