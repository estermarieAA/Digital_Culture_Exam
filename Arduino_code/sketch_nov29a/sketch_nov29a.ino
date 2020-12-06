

const int man = 3;
const int  woman = 4;
const int  parent = 5;
const int  danish = 6;
const int  dutch = 7;
const int  korean = 8;
const int french = 9;
const int spanish = 10;
const int  american = 11;
const int red = 12;


//int manstate;
//int womanstate = LOW;
//int parentstate = LOW;
//int danishstate = LOW;
//int dutchstate = LOW;
//int koreanstate = LOW;
//int frenchstate = LOW;
//int spanishstate = LOW;
//int americanstate = LOW;
//int redstate = LOW;


int lastmessage = -1;


void setup() {
  // put your setup code here, to run once:

 

  pinMode(man, INPUT_PULLUP);
  pinMode(woman, INPUT_PULLUP);
  pinMode(parent, INPUT_PULLUP);
  pinMode(danish, INPUT_PULLUP);
  pinMode(dutch, INPUT_PULLUP);
  pinMode(korean, INPUT_PULLUP);
  pinMode(french, INPUT_PULLUP);
  pinMode(spanish, INPUT_PULLUP);
  pinMode(american, INPUT_PULLUP);
  pinMode(red, INPUT_PULLUP);
  //

  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

 int manstate = digitalRead(man);
 int womanstate = digitalRead(woman);
 int parentstate = digitalRead(parent);
 int danishstate = digitalRead(danish);
 int dutchstate = digitalRead(dutch);
 int koreanstate = digitalRead(korean);
 int frenchstate = digitalRead(french);
 int spanishstate = digitalRead(spanish);
 int americanstate = digitalRead(american);
 int redstate = digitalRead(red);

int newmessage = 0;


  if ( manstate == LOW && parentstate == LOW){
    newmessage = 11;
  }else if ( manstate == LOW && parentstate == LOW && danishstate ==LOW){
    newmessage = 12;
  } else if ( womanstate == LOW && parentstate == LOW){
    newmessage = 13;
  }else if ( womanstate == LOW && parentstate == LOW && danishstate == LOW){
    newmessage = 14;
  }else if ( danishstate == LOW && manstate == LOW){
    newmessage = 15;
  } else if ( danishstate == LOW && womanstate == LOW){
    newmessage = 16;
  }else if ( dutchstate == LOW && manstate == LOW){
    newmessage = 17;
  }else if ( dutchstate == LOW && womanstate == LOW){
    newmessage = 18;
  }else if ( koreanstate == LOW && manstate ==LOW){
    newmessage = 6;
  }else if ( frenchstate == LOW && woman == LOW){
    newmessage = 7;
  }else if ( spanishstate == LOW && womanstate == LOW){
    newmessage = 8;
  } else if ( americanstate == LOW && manstate == LOW){
    newmessage = 9;
  } else if ( manstate == LOW ) {
    newmessage = 1;
    //delay(1000);
  } else if ( womanstate == LOW){
    newmessage = 2;
  } else if ( parentstate == LOW){
    newmessage = 3;
  } else if ( danishstate == LOW){
    newmessage = 4;
  }else if ( dutchstate == LOW){
    newmessage = 5;
  }else if ( koreanstate == LOW){
    newmessage = 6;
  }else if ( frenchstate == LOW){
    newmessage = 7;
  }else if ( spanishstate == LOW){
    newmessage = 8;
  }else if ( americanstate == LOW){
    newmessage = 9;
  } else if ( redstate == LOW){
    newmessage = 10;
  } else {
    newmessage = 0;
  }

  

  if( newmessage != lastmessage){
    Serial.println(newmessage); 
     lastmessage = newmessage;
  }

 delay(500);

  //if (womanstate == HIGH){
  //  Serial.print(2);
  //}
  //
  //if (parentstate == HIGH){
  //  Serial.print(3);
  //}
  //
  //if (danishstate == HIGH){
  //  Serial.print(4);
  //}
  //
  //if( manstate == HIGH && parentstate == HIGH){
  //  Serial.print(5);
  //}
  //
  //if( womanstate == HIGH && parentstate == HIGH){
  //  Serial.print(6);
  //}
  //
  //if(danishstate == HIGH && manstate == HIGH){
  //  Serial.print(7);
  //}
  //
  //if(danishstate == HIGH && womanstate == HIGH){
  //  Serial.print(8);
  //}
  //
  //if( danishstate == HIGH && womanstate == HIGH && parentstate == HIGH){
  //  Serial.print(9);
  //}
  //
  //if( danishstate == HIGH && manstate == HIGH && parentstate == HIGH){
  //  Serial.print(10);
  //}
  //
  //if( dutchstate == HIGH){
  //  Serial.print(11);
  //}
  //
  //if(dutchstate == HIGH && womanstate == HIGH){
  //  Serial.print(12);
  //}
  //
  //if(dutchstate == HIGH && manstate == HIGH){
  //  Serial.print(13);
  //}
  //
  //if(koreanstate == HIGH){
  //  Serial.print(14);
  //}
  //
  //if(koreanstate == HIGH && manstate == HIGH){
  //  Serial.print(14);
  //}
  //
  //if(frenchstate == HIGH){
  //  Serial.print(15);
  //}
  //
  //if(frenchstate == HIGH && womanstate == HIGH){
  //  Serial.print(15);
  //}
  //
  //if(spanishstate == HIGH){
  //  Serial.print(16);
  //}
  //
  //if(spanishstate == HIGH && womanstate == HIGH){
  //  Serial.print(16);
  //}
  //
  //if(americanstate == HIGH){
  //  Serial.print(17);
  //}
  //
  //if(americanstate == HIGH && manstate == HIGH){
  //  Serial.print(17);
  //}
  //
  //if(manstate == LOW && womanstate == LOW && parentstate == LOW && danishstate  == LOW && dutchstate == LOW && koreanstate == LOW && frenchstate == LOW && spanishstate == LOW && americanstate == LOW && redstate == LOW){
  //  Serial.print(18);
  //}
  //
  //if(redstate == HIGH ) {
  //  Serial.print(19);
  //}
}
