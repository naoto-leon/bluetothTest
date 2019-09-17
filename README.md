# Bluetooth_Test
バカでも出来るESP32によるブルートース接続
ESP32 Bluetooth   

### -環境-  

#### □ ＥＳＰ－ＷＲＯＯＭ－３２Ｄ  
#### □ Mac  
#### □ Arduino  

### [1]arduinoの環境設定を開き追加のポートマネージャーに下記のURLをコピペ  
[https://dl.espressif.com/dl/package_esp32_index.json]  

### [2]ボードマネージャーを開き、検索にespを入力。esp32 by Espressif Systemsをインストール。  

### [3]ポート認識の為に下記のurlより適当なドライバをインストール。  
https://jp.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers  

### [4]ポート認識がされるので、自身のポートを選択。  

### [5]下記のコードをコピペ、検証、マイコンに書き込む。  

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

### [6]

