#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Shreya Sharma
 * @date 2026-02-20
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */



// TODO 1:
// Define LDR analog pin (Use A0)
const int ldrPin = A0;

// TODO 2:
// Create variable to store sensor reading
int ldrValue = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("LDR Light Detection System Initialized...");
}

void loop() {

    // TODO 5:
    // Read analog value from LDR
    ldrValue = analogRead(ldrPin);

    // TODO 6:
    // Print raw ADC value
    Serial.print("LDR Value: ");
    Serial.println(ldrValue);

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)

    if (ldrValue < 500) {
        Serial.println("Status: BRIGHT");
    } else {
        Serial.println("Status: DARK");
    }

    // Small delay for stability
    delay(1000);
}