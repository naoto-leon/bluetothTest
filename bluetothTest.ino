#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;

void setup() {
  SerialBT.begin("ESP32"); //Bluetooth device name
}

void loop() {
  SerialBT.println("Hello");
  delay(1000);
}
