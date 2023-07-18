#include <Servo.h>
int input=0, n=3, m=3, p=1;
Servo SER1,SER2A,SER2B,SER3A,SER3B,SER4A,SER4B,SER6;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos;    // variable to store the servo position

void setup() {
 
  SER1.attach(2);    // attaches the servo on respective pins to the servo object
  SER2A.attach(3);
  SER2B.attach(4);
  //SER3A.attach(5);
  SER3B.attach(6);
  SER4A.attach(7);
  SER4B.attach(8);
  SER6.attach(10);
  Serial.begin(9600);
}

void loop() {
  
  SER1.write(90);
  SER2A.write(90);
  SER2B.write(90);
 // SER3A.write(90);
  SER3B.write(90);
  SER4A.write(90);
  SER4B.write(90);
  SER6.write(0);


 if (Serial.available() >0){
          input = Serial.read();
           Serial.println(input);
             
        if(input == 51){
          if(n==3){
          
  for (pos = 0; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40); 

 for (pos = 90; pos <= 130; pos += 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);
 
   for (pos = 90; pos >= 24; pos -= 1) {
   // SER3A.write(pos);
    SER3B.write(pos);
    delay(40);
    
  }
delay(40);

  for (pos = 90; pos >= 18; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

   for (pos = 120; pos >= 0; pos -= 1) {
    SER6.write(pos);
   delay(40);
  }
  delay(40);


   for (pos = 18; pos <= 160; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

     for (pos = 130; pos >= 90; pos -= 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);

  for (pos = 24; pos <= 90; pos += 1) {
   // SER3A.write(pos);
     SER3B.write(pos);
    delay(40);
      }
delay(40); 

for (pos = 0 ; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);

for (pos = 160; pos >= 90; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

for (pos = 120 ; pos >= 0; pos -= 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);

n=n-1;
            }




          else if(n==2){
              
   for (pos = 0; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40); 

 for (pos = 90; pos <= 128; pos += 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);
 
   for (pos = 90; pos >= 22; pos -= 1) {
   // SER3A.write(pos);
    SER3B.write(pos);
    delay(40);
    
  }
delay(40);

  for (pos = 90; pos >= 16; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

   for (pos = 120; pos >= 0; pos -= 1) {
    SER6.write(pos);
   delay(40);
  }
  delay(40);


   for (pos = 16; pos <= 160; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

     for (pos = 128; pos >= 90; pos -= 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);

  for (pos = 22; pos <= 90; pos += 1) {
   // SER3A.write(pos);
     SER3B.write(pos);
    delay(40);
      }
delay(40); 

for (pos = 0 ; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);

for (pos = 160; pos >= 90; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

for (pos = 120 ; pos >= 0; pos -= 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);

n=n-1;
          }


else if(n==1)
{
              
   for (pos = 0; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40); 

 for (pos = 90; pos <= 126; pos += 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);
 
   for (pos = 90; pos >= 20; pos -= 1) {
   // SER3A.write(pos);
    SER3B.write(pos);
    delay(40);
    
  }
delay(40);

  for (pos = 90; pos >= 14; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

   for (pos = 120; pos >= 0; pos -= 1) {
    SER6.write(pos);
   delay(40);
  }
  delay(40);


   for (pos = 14; pos <= 160; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

     for (pos = 126; pos >= 90; pos -= 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);

  for (pos = 20; pos <= 90; pos += 1) {
   // SER3A.write(pos);
     SER3B.write(pos);
    delay(40);
      }
delay(40); 

for (pos = 0 ; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);

for (pos = 160; pos >= 90; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

for (pos = 120 ; pos >= 0; pos -= 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);

n=n-1;
          }

          else{
          Serial.println("Khatam!! ");
          }
input =0;
        }








        else if(input == 49){
       if(m==3){   

  for (pos = 90; pos >= 0; pos -= 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);
          
  for (pos = 0; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40); 

 for (pos = 90; pos <= 130; pos += 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);
 
   for (pos = 90; pos >= 24; pos -= 1) {
   // SER3A.write(pos);
    SER3B.write(pos);
    delay(40);
    
  }
delay(40);

  for (pos = 90; pos >= 18; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

   for (pos = 120; pos >= 0; pos -= 1) {
    SER6.write(pos);
   delay(40);
  }
  delay(40);


   for (pos = 18; pos <= 90; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

     for (pos = 128; pos >= 90; pos -= 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);

  for (pos = 22; pos <= 90; pos += 1) {
   // SER3A.write(pos);
     SER3B.write(pos);
    delay(40);
    
  }
delay(40); 

for (pos = 0; pos <= 90; pos += 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);

for (pos = 90; pos <= 160; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

for (pos = 0 ; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);



for (pos = 160; pos >= 90; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

 

for (pos = 120 ; pos >= 0; pos -= 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);
m=m-1;
}

          else if(m==2){   

  for (pos = 90; pos >= 0; pos -= 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);
          
  for (pos = 0; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40); 

 for (pos = 90; pos <= 128; pos += 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);
 
   for (pos = 90; pos >= 22; pos -= 1) {
   // SER3A.write(pos);
    SER3B.write(pos);
    delay(40);
    
  }
delay(40);

  for (pos = 90; pos >= 16; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

   for (pos = 120; pos >= 0; pos -= 1) {
    SER6.write(pos);
   delay(40);
  }
  delay(40);


   for (pos = 16; pos <= 90; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

     for (pos = 128; pos >= 90; pos -= 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);

  for (pos = 22; pos <= 90; pos += 1) {
   // SER3A.write(pos);
     SER3B.write(pos);
    delay(40);
    
  }
delay(40); 

for (pos = 0; pos <= 90; pos += 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);

for (pos = 90; pos <= 160; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

for (pos = 0 ; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);



for (pos = 160; pos >= 90; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

 

for (pos = 120 ; pos >= 0; pos -= 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);
m=m-1;
}

       else if(m==1){   

  for (pos = 90; pos >= 0; pos -= 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);
          
  for (pos = 0; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40); 

 for (pos = 90; pos <= 126; pos += 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);
 
   for (pos = 90; pos >= 20; pos -= 1) {
   // SER3A.write(pos);
    SER3B.write(pos);
    delay(40);
    
  }
delay(40);

  for (pos = 90; pos >= 14; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

   for (pos = 120; pos >= 0; pos -= 1) {
    SER6.write(pos);
   delay(40);
  }
  delay(40);


   for (pos = 14; pos <= 90; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

     for (pos = 126; pos >= 90; pos -= 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);

  for (pos = 20; pos <= 90; pos += 1) {
   // SER3A.write(pos);
     SER3B.write(pos);
    delay(40);
    
  }
delay(40); 

for (pos = 0; pos <= 90; pos += 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);

for (pos = 90; pos <= 160; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

for (pos = 0 ; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);



for (pos = 160; pos >= 90; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

 

for (pos = 120 ; pos >= 0; pos -= 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);
m=m-1;
}

 else{
          Serial.println("Khatam!! ");
          }
input =0;
        }




        else if(input == 50){
       if(p==3){   

  for (pos = 90; pos >= 45; pos -= 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);
          
  for (pos = 0; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40); 

 for (pos = 90; pos <= 130; pos += 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);
 
   for (pos = 90; pos >= 24; pos -= 1) {
   // SER3A.write(pos);
    SER3B.write(pos);
    delay(40);
    
  }
delay(40);

  for (pos = 90; pos >= 18; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

   for (pos = 120; pos >= 0; pos -= 1) {
    SER6.write(pos);
   delay(40);
  }
  delay(40);


   for (pos = 18; pos <= 90; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

     for (pos = 128; pos >= 90; pos -= 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);

  for (pos = 22; pos <= 90; pos += 1) {
   // SER3A.write(pos);
     SER3B.write(pos);
    delay(40);
    
  }
delay(40); 

for (pos = 0; pos <= 90; pos += 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);

for (pos = 90; pos <= 160; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

for (pos = 0 ; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);



for (pos = 160; pos >= 90; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

 

for (pos = 120 ; pos >= 0; pos -= 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);
p=p-1;
}

          else if(p==2){   

  for (pos = 90; pos >= 45; pos -= 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);
          
  for (pos = 0; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40); 

 for (pos = 90; pos <= 128; pos += 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);
 
   for (pos = 90; pos >= 22; pos -= 1) {
   // SER3A.write(pos);
    SER3B.write(pos);
    delay(40);
    
  }
delay(40);

  for (pos = 90; pos >= 16; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

   for (pos = 120; pos >= 0; pos -= 1) {
    SER6.write(pos);
   delay(40);
  }
  delay(40);


   for (pos = 16; pos <= 90; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

     for (pos = 128; pos >= 90; pos -= 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);

  for (pos = 22; pos <= 90; pos += 1) {
   // SER3A.write(pos);
     SER3B.write(pos);
    delay(40);
    
  }
delay(40); 

for (pos = 0; pos <= 90; pos += 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);

for (pos = 90; pos <= 160; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

for (pos = 0 ; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);



for (pos = 160; pos >= 90; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

 

for (pos = 120 ; pos >= 0; pos -= 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);
p=p-1;
}

       else if(p==1){   

  for (pos = 90; pos >= 45; pos -= 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);
          
  for (pos = 0; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40); 

 for (pos = 90; pos <= 126; pos += 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);
 
   for (pos = 90; pos >= 20; pos -= 1) {
   // SER3A.write(pos);
    SER3B.write(pos);
    delay(40);
    
  }
delay(40);

  for (pos = 90; pos >= 14; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

   for (pos = 120; pos >= 0; pos -= 1) {
  mySerial.println("AT+CNMI=2,2,0,0,0"); // AT Command to receive a live SMS
  delay(1000);
 }
 */

    SER6.write(pos);
   delay(40);
  }
  delay(40);


   for (pos = 14; pos <= 90; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

     for (pos = 126; pos >= 90; pos -= 1) {
    SER4A.write(pos);
    SER4B.write(pos);
    delay(40);
  }
delay(40);

  for (pos = 20; pos <= 90; pos += 1) {
   // SER3A.write(pos);
     SER3B.write(pos);
    delay(40);
    
  }
delay(40); 

for (pos = 0; pos <= 90; pos += 1) {
   SER1.write(pos);
   delay(40); 
  }
delay(40);

for (pos = 90; pos <= 160; pos += 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40);

for (pos = 0 ; pos <= 120; pos += 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);



for (pos = 160; pos >= 90; pos -= 1) {
   SER2A.write(pos);
   SER2B.write(pos);
   delay(40);
  }
delay(40); 

 

for (pos = 120 ; pos >= 0; pos -= 1) {
   SER6.write(pos);
   delay(40); 
  }
delay(40);
p=p-1;
}

 else{
          Serial.println("Khatam!! ");
          }
input =0;
        }


 }
 }
