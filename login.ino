#include "DigiKeyboard.h"
const int facebook = 2;
const int instagram = 1;
const int gmail = 0;
int fac_state,insta_state, gmail_state;
void setup() {
  // don't need to set anything up to use DigiKeyboard
  pinMode (facebook, INPUT);
  pinMode (instagram, INPUT); 
  pinMode (gmail, INPUT);
}
void loop() {
  fac_state  = digitalRead(facebook);
  insta_state  = digitalRead(instagram);
  gmail_state = digitalRead(gmail); 
  buttons();
}
void buttons()
{
   //Facebook
  if (fac_state == LOW){
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://www.facebook.com/login/device-based/regular/login/?login_attempt=1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("strikegroup15@gmail.com");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.print("Strikeddj@15");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  }
  //Instagram
  if (insta_state == LOW){
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://www.instagram.com/accounts/login/?hl=en");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("strikedevelopers");
  DigiKeyboard.delay(1000);
  DigiKeyboard.write('\t');
  DigiKeyboard.print("Strikeddj@15");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  }
  //Gmail
  if (gmail_state == LOW){
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://accounts.google.com/ServiceLogin/identifier?service=mail&passive=true&rm=false&continue=https%3A%2F%2Fmail.google.com%2Fmail%2F&ss=1&scc=1&ltmpl=default&ltmplcache=2&emr=1&osid=1&flowName=GlifWebSignIn&flowEntry=ServiceLogin");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("strikegroup15@gmail.com");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.print("Strikeddj@15");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  }
}
