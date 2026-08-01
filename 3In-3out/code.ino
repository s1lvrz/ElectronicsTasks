int led[3]={5, 6, 7};
int buttons[3] = {2, 3, 4};

void setup()
{
	for(int i=0; i<3; i++)
    {
    	pinMode(led[i], OUTPUT);
        pinMode(buttons[i], INPUT);
        
    }
  
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    
}

void loop()
{  if(digitalRead(4)==LOW)
      digitalWrite(7, HIGH);
 	else 
      digitalWrite(7, LOW);
 
 if(digitalRead(3)==LOW)
      digitalWrite(6, HIGH);
 	else 
      digitalWrite(6, LOW);
    
 if(digitalRead(2)==LOW)
      digitalWrite(5, HIGH);
 	else 
      digitalWrite(5, LOW);

}
