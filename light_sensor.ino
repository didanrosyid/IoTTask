#include <M5Stack.h> /*memasukkan library M5Stack*/
const int Analog = 36; /*menentukan pin 36 sebagai analog*/
const int Digtal = 2; /*menentukan pin 2 sebagai digital*/
void setup() { /*inisialisasi fungsi void*/
// put your setup code here, to run once:
M5.begin(); /*untuk menjalankan program pada board M5*/
pinMode(Digtal, INPUT_PULLUP); /*mengkonfigurasi pin digital sebagai input*/
dacWrite(25, 0); /*inisialisasi pin digital to analog converter pada pin 25*/
M5.Lcd.setCursor(100, 0, 4); 
M5.Lcd.print("LUMINOSITY"); /*menampilkan LUMINOSITY pada lcd*/
}
uint16_t a_data; /*mencetak data a_data*/
uint16_t d_data; /*mencetak data b_data*/
void loop() {
// put your main code here, to run repeatedly:
a_data = analogRead(Analog); /*pendefinisian a_data membaca data analog*/
d_data = digitalRead(Digtal); /*pendefinisian d_data membaca data digital*/
Serial.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); /*menampilkan a_data dan d_data pada serial*/
M5.Lcd.setCursor(30, 120, 4); /*posisi tampilan data pada lcd*/
M5.Lcd.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); /*menampilkan a_data dan d_data pada lcd*/
delay(200); /*delay pembacaan data*/
}
