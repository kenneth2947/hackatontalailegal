
char phone_no[]="+50244521157";
int led=2;
void setup() {
  pinMode(led,INPUT);
  Serial.begin (9600);
}
void loop()
{
  
  if(digitalRead (led)== HIGH)

{
 Serial.begin(9600);
delay(300); 

Serial.println("AT+CMGF=1");    
delay(2000);
Serial.print("AT+CMGS=\"");
Serial.print(phone_no); 
Serial.write(0x22);
Serial.write(0x0D);  // hex equivalent of Carraige return    
Serial.write(0x0A);  // hex equivalent of newline
delay(2000);
Serial.print("La seccion C del bosque, esta en posible amenaza");
delay(500);
Serial.println (char(26));//the ASCII code of the ctrl+z is 26
} 
}

  


