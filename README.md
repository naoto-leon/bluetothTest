# Bluetooth_Test
誰でも出来るESP32によるブルートース接続
ESP32 Bluetooth   

<img width="300" alt="esptop" src="https://user-images.githubusercontent.com/43961147/65029327-81e3be80-d978-11e9-91eb-f43ca7172b08.png">

### -環境-  

#### □ ＥＳＰ－ＷＲＯＯＭ－３２Ｄ  
#### □ ブレッドボード  
#### □ Mac  
#### □ Arduino  

### [1]arduinoの環境設定を開き追加のポートマネージャーに下記のURLをコピペ  
[https://dl.espressif.com/dl/package_esp32_index.json]  

<img width="400" alt="esp1" src="https://user-images.githubusercontent.com/43961147/65027941-2a445380-d976-11e9-9b6e-c9d299d10377.png">

### [2]ボードマネージャーを開き、検索にespを入力。esp32 by Espressif Systemsをインストール。  

<img width="400" alt="esp2" src="https://user-images.githubusercontent.com/43961147/65027946-2b758080-d976-11e9-9196-b6e63629efb7.png">

### [3]ポート認識の為に下記のurlより適当なドライバをインストール。  
https://jp.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers  


### [4]ポート認識がされるので、自身のポートを選択。  

<img width="400" alt="esp3" src="https://user-images.githubusercontent.com/43961147/65027948-2ca6ad80-d976-11e9-99f6-65c36afac4f0.png">

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

### [6] 自身のpcのBluetooth設定を開きESP32に接続  



### [7] 再度シリアルポートを開きESP32に接続    

<img width="400" alt="esp5" src="https://user-images.githubusercontent.com/43961147/65027961-316b6180-d976-11e9-8702-57e0bec16c28.png">

### [8] シリアルモニタを開き通信を確認。  

<img width="400" alt="esp6" src="https://user-images.githubusercontent.com/43961147/65027963-329c8e80-d976-11e9-8194-5e75822f8cc9.png">

### [補足]  

電源供給をpcからでなく充電バッテリーとかに変えればBlueTooth接続をより確認出来るかと思います。  










