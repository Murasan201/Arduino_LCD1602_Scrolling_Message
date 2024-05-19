#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // initialize the Liquid Crystal Display object with the I2C address 0x27, 16 columns and 2 rows

void setup() {
  lcd.init();       // initialize the LCD
  lcd.clear();      // clear the LCD display
  lcd.backlight();  // Make sure backlight is on

  // 初期メッセージを設定します。
  lcd.setCursor(0, 0);
  lcd.print("Hello Arduino");
  
  // 初期メッセージ表示後、少し待ちます。
  delay(2000);
  
  // 画面をクリアします。
  lcd.clear();
}

void loop() {
  String message = "Hello Arduino";
  int messageLength = message.length();

  for (int position = 16; position > -messageLength; position--) {
    lcd.clear();
    lcd.setCursor(position, 0);
    lcd.print(message);
    delay(300);
  }
}
