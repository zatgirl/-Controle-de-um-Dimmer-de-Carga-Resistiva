int LDR = A0;                
int dimmer = 3;
int valorLDR = 0;  
 
void setup(){ 
  pinMode(dimmer, OUTPUT);      
} 
 
void loop(){ 
  valorLDR = analogRead(LDR);  
  digitalWrite(dimmer, HIGH);       
  delay(100);    
  digitalWrite(dimmer, LOW);                  
}
