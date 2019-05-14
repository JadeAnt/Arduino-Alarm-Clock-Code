#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:

  int ticks, hours, mins, i, j;

 typedef enum{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}days_of_week;

  days_of_week today;
  
  if(ticks < 60){
    ticks++;
  }
  else
    ticks = 0;
  
  if(ticks >= 59){
    if(mins < 60)
      mins++;
    else
      mins = 0;
  }
  
  if(mins >= 59){
    if(hours <= 12)
      hours++;
    else
      hours = 1;
  }
  
  
  lcd.setCursor(0,0);
  lcd.print("Today: ");
  
  lcd.setCursor(0,1);
  lcd.print("%d:%d:%d", hours, mins, ticks);
  
  lcd.clear();
  
}
