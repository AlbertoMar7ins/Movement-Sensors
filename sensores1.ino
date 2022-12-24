int clients = 0; //variável p/ armazenar o n° total de clientes

void setup() 
{  
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, OUTPUT); //led verde
  pinMode(13, OUTPUT); //led vermelho
}
void loop() 
{int sinalPir = digitalRead(10);
  	if(sinalPir == HIGH)
  		{	clients++;
    	delay(2000);
  		}
  	if (clients <=8)
  		{
  		digitalWrite(12, HIGH);
    	digitalWrite(13, LOW);
 		 }
 	 else 
  		{
  		digitalWrite(12, LOW);
   		digitalWrite(13, HIGH);
 		 }
  
int sinalPir2 = digitalRead(11);
  	 if(sinalPir2 == HIGH)
  		{
  		clients--;
    	delay(2000);
  		}
  	if (clients >=8)
 		 {
 		 digitalWrite(12, LOW);
   		 digitalWrite(13, HIGH);
  		}
  	else 
  		{
  		digitalWrite(12, HIGH);
 	   	digitalWrite(13, LOW);
  		}
  Serial.println(clients);
} 