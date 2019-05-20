#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:

  int ticks, hours, mins, i, j;
  char day[10];

 typedef enum{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}days_of_week;

  days_of_week today;
  
  switch(today){
      
      case Sunday:
        day[10] = "Sunday";
        break;
      
      case Monday:
        day[10] = "Sunday";
        break;
      
      case Tuesday:
        day[10] = "Sunday";
        break;
      
      case Wednesday:
        day[10] = "Sunday";
        break;
      
      case Thursday:
        day[10] = "Sunday";
        break;
     
      case Friday:
        day[10] = "Friday";
        break
        
       case Saturday:
         day[10] = "Saturday";
         break;
  
  }
  
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
  lcd.print("Today: %s", day);
  
  lcd.setCursor(0,1);
  lcd.print("%d:%d:%d", hours, mins, ticks);
  
  lcd.clear();
  
}
