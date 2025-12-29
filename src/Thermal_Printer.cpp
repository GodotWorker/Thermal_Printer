#include <Thermal_Printer.h>

Thermal_Printer tp;

void setup() {
  Serial.begin(115200);
  tp.tpScan("JK01", 10);  // scan for JK01
  if (tp.tpConnect()) {
    Serial.println("Connected!");
    tp.tpPrintLine("Hello from JK01 printer!");
    tp.tpFeed(5);
  } else {
    Serial.println("Failed to connect");
  }
}

void loop() {}
