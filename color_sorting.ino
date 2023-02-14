#include<Wire.h>
#include<Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SERVOMIN 125
#define SERVOMAX 550
int x;
int pulse1=0;
int pulse2=0;
int pulse3=0;
int pulse4=0;
int current1;
int previous1;
int current2;
int previous2;
int current3;
int previous3;
int current4;
int previous4;

void setup() 
{
  Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(60);
  yield();
  previous1 = 550;
  previous2 = 380;
  previous3 = 260;
  previous4 = 130;
  pwm.setPWM(1,0,previous1);
  delay(2000);
  pwm.setPWM(2,0,previous2);
  delay(2000);
  pwm.setPWM(3,0,previous3);
  delay(2000);
  pwm.setPWM(4,0,previous4);
  delay(2000);
}

void loop() 
{
while(Serial.available())
 {
  x =Serial.read();
  if(x == '5')
   {
  
   }
  else if(x == '1')
   {
  current3= 125;
  if(current3 != previous3)
  {
    if(current3>previous3)
    {
      for(int i=previous3; i<=current3; i++)
      {pwm.setPWM(3,0,i);
        delay(5);}    
      previous3 = current3; 
    }
    if(current3<previous3)
    {
      for(int j=previous3; j>=current3; j--)
      {pwm.setPWM(3,0,j);
        delay(5);}
       previous3 = current3;
    }
  }

  current2= 510;
  if(current2 != previous2)
  {
    if(current2>previous2)
    {
      for(int i=previous2; i<=current2; i++)
      {pwm.setPWM(2,0,i);
        delay(5);}    
      previous2 = current2; 
    }
    if(current2<previous2)
    {
      for(int j=previous2; j>=current2; j--)
      {pwm.setPWM(2,0,j);
        delay(5);}
       previous2 = current2;
    } 
  }

  current4= 290;
  if(current4 != previous4)
  {
    if(current4>previous4)
    {
      for(int i=previous4; i<=current4; i++)
      {pwm.setPWM(4,0,i);
        delay(5);}    
      previous4 = current4; 
    }
    if(current4<previous4)
    {
      for(int j=previous4; j>=current4; j--)
      {pwm.setPWM(4,0,j);
        delay(5);}
       previous4 = current4;
    }
  }

  current2= 430;
  if(current2 != previous2)
  {
    if(current2>previous2)
    {
      for(int i=previous2; i<=current2; i++)
      {pwm.setPWM(2,0,i);
        delay(5);}    
      previous2 = current2; 
    }
    if(current2<previous2)
    {
      for(int j=previous2; j>=current2; j--)
      {pwm.setPWM(2,0,j);
        delay(5);}
       previous2 = current2;
    } 
  }
  
  current3= 260;
  if(current3 != previous3)
  {
    if(current3>previous3)
    {
      for(int i=previous3; i<=current3; i++)
      {pwm.setPWM(3,0,i);
        delay(5);}    
      previous3 = current3; 
    }
    if(current3<previous3)
    {
      for(int j=previous3; j>=current3; j--)
      {pwm.setPWM(3,0,j);
        delay(5);}
       previous3 = current3;
    }
  }

  current1= 455;
  if(current1 != previous1)
  {
    if(current1>previous1)
    {
      for(int i=previous1; i<=current1; i++)
      {pwm.setPWM(1,0,i);
        delay(5);}    
      previous1 = current1; 
    }
    if(current1<previous1)
    {
      for(int j=previous1; j>=current1; j--)
      {pwm.setPWM(1,0,j);
        delay(5);}
       previous1 = current1;
    }
  }

  current4= 130;
  if(current4 != previous4)
  {
    if(current4>previous4)
    {
      for(int i=previous4; i<=current4; i++)
      {pwm.setPWM(4,0,i);
        delay(5);}    
      previous4 = current4; 
    }
    if(current4<previous4)
    {
      for(int j=previous4; j>=current4; j--)
      {pwm.setPWM(4,0,j);
        delay(5);}
       previous4 = current4;
    }
  }

  current1= 550;
  if(current1 != previous1)
  {
    if(current1>previous1)
    {
      for(int i=previous1; i<=current1; i++)
      {pwm.setPWM(1,0,i);
        delay(5);}    
      previous1 = current1; 
    }
    if(current1<previous1)
    {
      for(int j=previous1; j>=current1; j--)
      {pwm.setPWM(1,0,j);
        delay(5);}
       previous1 = current1;
    }
  }
   }
  else if(x == '0')
   {
    current3= 125;
  if(current3 != previous3)
  {
    if(current3>previous3)
    {
      for(int i=previous3; i<=current3; i++)
      {pwm.setPWM(3,0,i);
        delay(5);}    
      previous3 = current3; 
    }
    if(current3<previous3)
    {
      for(int j=previous3; j>=current3; j--)
      {pwm.setPWM(3,0,j);
        delay(5);}
       previous3 = current3;
    }
  }

  current2= 510;
  if(current2 != previous2)
  {
    if(current2>previous2)
    {
      for(int i=previous2; i<=current2; i++)
      {pwm.setPWM(2,0,i);
        delay(5);}    
      previous2 = current2; 
    }
    if(current2<previous2)
    {
      for(int j=previous2; j>=current2; j--)
      {pwm.setPWM(2,0,j);
        delay(5);}
       previous2 = current2;
    } 
  }

  current4= 400;
  if(current4 != previous4)
  {
    if(current4>previous4)
    {
      for(int i=previous4; i<=current4; i++)
      {pwm.setPWM(4,0,i);
        delay(5);}    
      previous4 = current4; 
    }
    if(current4<previous4)
    {
      for(int j=previous4; j>=current4; j--)
      {pwm.setPWM(4,0,j);
        delay(5);}
       previous4 = current4;
    }
  }

  current2= 430;
  if(current2 != previous2)
  {
    if(current2>previous2)
    {
      for(int i=previous2; i<=current2; i++)
      {pwm.setPWM(2,0,i);
        delay(5);}    
      previous2 = current2; 
    }
    if(current2<previous2)
    {
      for(int j=previous2; j>=current2; j--)
      {pwm.setPWM(2,0,j);
        delay(5);}
       previous2 = current2;
    } 
  }
  
  current3= 260;
  if(current3 != previous3)
  {
    if(current3>previous3)
    {
      for(int i=previous3; i<=current3; i++)
      {pwm.setPWM(3,0,i);
        delay(5);}    
      previous3 = current3; 
    }
    if(current3<previous3)
    {
      for(int j=previous3; j>=current3; j--)
      {pwm.setPWM(3,0,j);
        delay(5);}
       previous3 = current3;
    }
  }

  current1= 455;
  if(current1 != previous1)
  {
    if(current1>previous1)
    {
      for(int i=previous1; i<=current1; i++)
      {pwm.setPWM(1,0,i);
        delay(5);}    
      previous1 = current1; 
    }
    if(current1<previous1)
    {
      for(int j=previous1; j>=current1; j--)
      {pwm.setPWM(1,0,j);
        delay(5);}
       previous1 = current1;
    }
  }

  current4= 130;
  if(current4 != previous4)
  {
    if(current4>previous4)
    {
      for(int i=previous4; i<=current4; i++)
      {pwm.setPWM(4,0,i);
        delay(5);}    
      previous4 = current4; 
    }
    if(current4<previous4)
    {
      for(int j=previous4; j>=current4; j--)
      {pwm.setPWM(4,0,j);
        delay(5);}
       previous4 = current4;
    }
  }

  current1= 550;
  if(current1 != previous1)
  {
    if(current1>previous1)
    {
      for(int i=previous1; i<=current1; i++)
      {pwm.setPWM(1,0,i);
        delay(5);}    
      previous1 = current1; 
    }
    if(current1<previous1)
    {
      for(int j=previous1; j>=current1; j--)
      {pwm.setPWM(1,0,j);
        delay(5);}
       previous1 = current1;
    }
  }
   }
  delay(10);
 }
}
