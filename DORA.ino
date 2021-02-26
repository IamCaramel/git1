#include <Keypad.h>
#include <avr/pgmspace.h>
#include "dora.h"

char keymap[4][4]={{'1','2','3','A'},{'4','5','6','B'},{'7','8','9','C'},{'E','0','F','D'}};

byte col[4]={6,5,4,3};
byte row[4]={10,9,8,7};

Keypad mypad=Keypad(makeKeymap(keymap),row,col,4,4);

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char key=mypad.getKey();
  while(key){
      switch(key){
        case 49:
        key=0;
        while(1){
          delay(1000);
          for(int i=0;i<118;i++){
           key=mypad.getKey();
           if(key) break;
           tone(2,pgm_read_word(&song1[i]),pgm_read_word(&duration1[i]));
           delay(pgm_read_word(&duration1[i]));
           tone(2,0,100);
           delay(10);
           key=mypad.getKey();
           if(key) break;
         }
         if(key) break;
        }
        break;
        case 50:
        key=0;
        while(1){
          delay(1000);
          for(int i=0;i<66;i++){
           key=mypad.getKey();
           if(key) break;
           tone(2,pgm_read_word(&song2[i]),pgm_read_word(&duration2[i]));
           delay(pgm_read_word(&duration2[i]));
           tone(2,0,100);
           delay(10);
           key=mypad.getKey();
           if(key) break;
         }
         if(key) break;
        }
        break;
        case 51:
        key=0;
        while(1){
          delay(1000);
          for(int i=0;i<92;i++){
           key=mypad.getKey();
           if(key) break;
           tone(2,pgm_read_word(&song3[i]),pgm_read_word(&duration3[i]));
           delay(pgm_read_word(&duration3[i]));
           tone(2,0,100);
           delay(10);
           key=mypad.getKey();
           if(key) break;
         }
         if(key) break;
        }
        break;
        case 52:
        key=0;
        while(1){
          delay(1000);
          for(int i=0;i<120;i++){
           key=mypad.getKey();
           if(key) break;
           tone(2,pgm_read_word(&song4[i]),pgm_read_word(&duration4[i]));
           delay(pgm_read_word(&duration4[i]));
           tone(2,0,100);
           delay(10);
           key=mypad.getKey();
           if(key) break;
         }
         if(key) break;
        }
        break;
        case 53:
        key=0;
        while(1){
          delay(1000);
          for(int i=0;i<89;i++){
           key=mypad.getKey();
           if(key) break;
           tone(2,pgm_read_word(&song5[i]),pgm_read_word(&duration5[i])/2*3);
           delay(pgm_read_word(&duration5[i])/2*3);
           tone(2,0,100);
           delay(10);
           key=mypad.getKey();
           if(key) break;
         }
         if(key) break;
        }
        break;
        case 54:
        key=0;
        while(1){
          delay(1000);
          for(int i=0;i<145;i++){
           key=mypad.getKey();
           if(key) break;
           tone(2,pgm_read_word(&song6[i]),pgm_read_word(&duration6[i]));
           delay(pgm_read_word(&duration6[i]));
           tone(2,0,100);
           delay(10);
           key=mypad.getKey();
           if(key) break;
         }
         if(key) break;
        }
        break;
        case 55:
        key=0;
        while(1){
          delay(1000);
          for(int i=0;i<207;i++){
           key=mypad.getKey();
           if(key) break;
           tone(2,pgm_read_word(&song7[i]),2*pgm_read_word(&duration7[i]));
           delay(2*pgm_read_word(&duration7[i]));
           tone(2,0,100);
           delay(10);
           key=mypad.getKey();
           if(key) break;
         }
         if(key) break;
        }
        break;
        case 56:
        key=0;
        while(1){
          delay(1000);
          for(int i=0;i<121;i++){
           key=mypad.getKey();
           if(key) break;
           tone(2,pgm_read_word(&song8[i]),pgm_read_word(&duration8[i]));
           delay(pgm_read_word(&duration8[i]));
           tone(2,0,100);
           delay(10);
           key=mypad.getKey();
           if(key) break;
         }
         if(key) break;
        }
        break;
        case 57:
        key=0;
        while(1){
          delay(1000);
          for(int i=0;i<81;i++){
           key=mypad.getKey();
           if(key) break;
           tone(2,pgm_read_word(&song9[i]),pgm_read_word(&duration9[i]));
           delay(pgm_read_word(&duration9[i]));
           tone(2,0,100);
           delay(10);
           key=mypad.getKey();
           if(key) break;
         }
         if(key) break;
        }
        break;
        case 48:
        key=0;
        while(1){
          delay(1000);
          for(int i=0;i<86;i++){
           key=mypad.getKey();
           if(key) break;
           tone(2,pgm_read_word(&song0[i]),pgm_read_word(&duration0[i]));
           delay(pgm_read_word(&duration0[i]));
           tone(2,0,100);
           delay(10);
           key=mypad.getKey();
           if(key) break;
         }
         if(key) break;
        }
        break;
        case 65:
        key=0;
        digitalWrite(11,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(13,HIGH);
        while(1){
          key=mypad.getKey();
          if(key) break;
        }
        break;
        case 66:
        key=0;
        while(1){
          key=mypad.getKey();
          if(key) break;
          digitalWrite(11,HIGH);
          delay(500);
          key=mypad.getKey();
          if(key) break;
          digitalWrite(11,LOW);
          digitalWrite(12,HIGH);
          delay(500);
          key=mypad.getKey();
          if(key) break;
          digitalWrite(12,LOW);
          digitalWrite(13,HIGH);
          delay(500);
          key=mypad.getKey();
          if(key) break;
          digitalWrite(13,LOW);
        }
        break;
        case 67:
        key=0;
        while(1){
          key=mypad.getKey();
          if(key) break;
          digitalWrite(11,HIGH);
          digitalWrite(12,HIGH);
          digitalWrite(13,HIGH);
          delay(500);
          key=mypad.getKey();
          if(key) break;
          digitalWrite(11,LOW);
          digitalWrite(12,LOW);
          digitalWrite(13,LOW);
          delay(500);
        }
        break;
        case 68:
        key=0;
        while(1){
          key=mypad.getKey();
          if(key) break;
          digitalWrite(11,HIGH);
          digitalWrite(12,LOW);
          digitalWrite(13,HIGH);
          delay(500);
          key=mypad.getKey();
          if(key) break;
          digitalWrite(11,LOW);
          digitalWrite(12,HIGH);
          digitalWrite(13,LOW);
          delay(500);
        }
        break;
        case 69:
        key=0;
        break;
        case 70:
        key=0;
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
        digitalWrite(13,LOW);
        while(1){
          key=mypad.getKey();
          if(key) break;
        }
        break;
      }
    }
}
