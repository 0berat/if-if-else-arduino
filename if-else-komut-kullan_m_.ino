
#define led1 3
#define led2 4
#define led3 5
int but1 = 8;
int but2 = 9;



int butstate1;
int butstate2;


void setup() {
  pinMode(but1,INPUT);
  pinMode(but2,INPUT);
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
        butstate1 = digitalRead(but1);
        butstate2 = digitalRead(but2);


    if(butstate1 == HIGH) //buton 1 e bastığımızda  sadece led1 yanar.
digitalWrite(led1,HIGH);  //buton  2 ye bastığımızda sadece led2 yanar.

    else if ( butstate2 == HIGH){ //eğer süslü parantez kullanmadan yaparsan burada altındake kodu çalıştırır sadece geri kalan kodlar ise normal komut satırında ki işlevini görür.
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);    
}
    else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    }
}
