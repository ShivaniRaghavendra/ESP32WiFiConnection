# WiFi Network Scanner and Connection Indicator with ESP32

This project scans for available **WiFi networks** and connects to a predefined network. An **LED** provides a visual indication of the WiFi connection status.

## Features
- Scans for nearby WiFi networks and displays **SSID & signal strength (RSSI)**.
- Connects to a predefined **WiFi network**.
- Uses an **LED** to indicate connection status:
  - **Fast blinking** when WiFi is disconnected.
  - **Slow blinking** when WiFi is connected.
- Displays real-time connection status and **local IP address** on the **Serial Monitor**.

## Components Used
- **ESP32**
- **LED** (connected to GPIO 4)

## Circuit Connections
| Component | ESP32 Pin |
|-----------|-----------|
| LED | GPIO 4 |

## Installation & Setup
### 1. Upload the Code
1. Open the **Arduino IDE**.
2. Copy and paste the provided code.
3. Connect the ESP32 and upload the sketch.

### 2. Open Serial Monitor
- Set baud rate to **115200**.
- Observe WiFi scan results, connection status, and **local IP address**.

## How It Works
### **WiFi Scanner**
1. ESP32 **scans for WiFi networks**.
2. Displays **SSID and signal strength (RSSI)** on the **Serial Monitor**.
3. Identifies if networks are **open or encrypted**.

### **WiFi Connection & LED Status**
1. ESP32 attempts to **connect to a predefined WiFi network**.
2. If **not connected**, the **LED blinks quickly**.
3. If **connected**, the **LED blinks slowly**.
4. Displays the **local IP address** on the **Serial Monitor**.

## Example Output
```
Scan Start
3 Networks Found!
1: HomeWiFi (-50 dBm) *
2: GuestWiFi (-70 dBm) *
3: OpenHotspot (-80 dBm) 

Connecting to WiFi...
WiFi Connected!
Local IP: 192.168.1.100
```

## Future Enhancements
- Add **WiFi reconnection logic** if disconnected.
- Display scan results on an **OLED screen**.
- Implement a **web interface** for WiFi configuration.

## License
This project is open-source under the MIT License.

