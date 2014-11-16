#include <TimerOne.h>  // Carefull with pins 9, 10, 11 !

#define Allr { \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}  \
}
#define Allb { \
    {2, 2, 2, 2, 2, 2, 2, 2}, \
    {2, 2, 2, 2, 2, 2, 2, 2}, \
    {2, 2, 2, 2, 2, 2, 2, 2}, \
    {2, 2, 2, 2, 2, 2, 2, 2}, \
    {2, 2, 2, 2, 2, 2, 2, 2}, \
    {2, 2, 2, 2, 2, 2, 2, 2}, \
    {2, 2, 2, 2, 2, 2, 2, 2}, \
    {2, 2, 2, 2, 2, 2, 2, 2}  \
}
#define Allv { \
    {3, 3, 3, 3, 3, 3, 3, 3}, \
    {3, 3, 3, 3, 3, 3, 3, 3}, \
    {3, 3, 3, 3, 3, 3, 3, 3}, \
    {3, 3, 3, 3, 3, 3, 3, 3}, \
    {3, 3, 3, 3, 3, 3, 3, 3}, \
    {3, 3, 3, 3, 3, 3, 3, 3}, \
    {3, 3, 3, 3, 3, 3, 3, 3}, \
    {3, 3, 3, 3, 3, 3, 3, 3}  \
}
#define RV { \
    {1, 1, 1, 1, 3, 3, 3, 3}, \
    {1, 1, 1, 1, 3, 3, 3, 3}, \
    {1, 1, 1, 1, 3, 3, 3, 3}, \
    {1, 1, 1, 1, 3, 3, 3, 3}, \
    {3, 3, 3, 3, 1, 1, 1, 1}, \
    {3, 3, 3, 3, 1, 1, 1, 1}, \
    {3, 3, 3, 3, 1, 1, 1, 1}, \
    {3, 3, 3, 3, 1, 1, 1, 1}  \
}
#define VR { \
    {3, 3, 3, 3, 1, 1, 1, 1}, \
    {3, 3, 3, 3, 1, 1, 1, 1}, \
    {3, 3, 3, 3, 1, 1, 1, 1}, \
    {3, 3, 3, 3, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 3, 3, 3, 3}, \
    {1, 1, 1, 1, 3, 3, 3, 3}, \
    {1, 1, 1, 1, 3, 3, 3, 3}, \
    {1, 1, 1, 1, 3, 3, 3, 3}  \
}
#define SINUS { \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 3, 3, 1, 1, 1, 1, 1}, \
    {3, 1, 1, 3, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 3, 1, 1, 3}, \
    {1, 1, 1, 1, 1, 3, 3, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}  \
}
#define SPACE { \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}  \
}
#define exlam { \
    {0, 0, 0, 3, 0, 0, 0, 0}, \
    {0, 0, 0, 3, 0, 0, 0, 0}, \
    {0, 0, 0, 3, 0, 0, 0, 0}, \
    {0, 0, 0, 3, 0, 0, 0, 0}, \
    {0, 0, 0, 3, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 3, 0, 0, 0, 0}  \
}
#define chiffre7 { \
    {0, 2, 2, 2, 2, 2, 2, 0}, \
    {0, 0, 0, 0, 0, 0, 2, 0}, \
    {0, 0, 0, 0, 0, 0, 2, 0}, \
    {0, 0, 0, 0, 0, 2, 0, 0}, \
    {0, 0, 0, 0, 2, 0, 0, 0}, \
    {0, 0, 0, 2, 0, 0, 0, 0}, \
    {0, 0, 2, 0, 0, 0, 0, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}  \
}
#define lettreB  { \
    {0, 2, 2, 2, 2, 0, 0, 0}, \
    {0, 2, 0, 0, 0, 2, 0, 0}, \
    {0, 2, 0, 0, 0, 2, 0, 0}, \
    {0, 2, 2, 2, 2, 2, 0, 0}, \
    {0, 2, 0, 0, 0, 0, 2, 0}, \
    {0, 2, 0, 0, 0, 0, 2, 0}, \
    {0, 2, 0, 0, 0, 0, 2, 0}, \
    {0, 2, 2, 2, 2, 2, 2, 0}  \
}
#define lettreb  { \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 0, 0, 0}, \
    {0, 0, 3, 3, 3, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 3, 0, 0}, \
    {0, 0, 3, 0, 0, 3, 0, 0}, \
    {0, 0, 3, 3, 3, 0, 0, 0}  \
}
#define lettreE  { \
    {0, 2, 2, 2, 2, 2, 2, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 2, 2, 2, 2, 2, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 2, 2, 2, 2, 2, 0}  \
}
#define lettreH { \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 1, 1, 1, 1, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}  \
}
#define lettreLr { \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 1, 1, 1, 1, 1, 0}  \
}
#define lettreLb { \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 0, 0, 0, 0, 0, 0}, \
    {0, 2, 2, 2, 2, 2, 2, 0}  \
}
#define lettreN { \
    {0, 3, 0, 0, 0, 0, 3, 0}, \
    {0, 3, 0, 0, 0, 0, 3, 0}, \
    {0, 3, 3, 0, 0, 0, 3, 0}, \
    {0, 3, 0, 3, 0, 0, 3, 0}, \
    {0, 3, 0, 0, 3, 0, 3, 0}, \
    {0, 3, 0, 0, 0, 3, 3, 0}, \
    {0, 3, 0, 0, 0, 0, 3, 0}, \
    {0, 3, 0, 0, 0, 0, 3, 0}  \
}
#define lettreO { \
    {0, 0, 0, 3, 3, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 3, 0, 0}, \
    {0, 3, 0, 0, 0, 0, 3, 0}, \
    {0, 3, 0, 0, 0, 0, 3, 0}, \
    {0, 3, 0, 0, 0, 0, 3, 0}, \
    {0, 3, 0, 0, 0, 0, 3, 0}, \
    {0, 0, 3, 0, 0, 3, 0, 0}, \
    {0, 0, 0, 3, 3, 0, 0, 0}  \
}
#define lettreo { \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 3, 3, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 3, 0, 0}, \
    {0, 0, 3, 0, 0, 3, 0, 0}, \
    {0, 0, 0, 3, 3, 0, 0, 0}  \
}
#define lettreQ { \
    {0, 0, 0, 3, 3, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 3, 0, 0}, \
    {0, 3, 0, 0, 0, 0, 3, 0}, \
    {0, 3, 0, 0, 0, 0, 3, 0}, \
    {0, 3, 0, 0, 0, 0, 3, 0}, \
    {0, 3, 0, 0, 3, 0, 3, 0}, \
    {0, 0, 3, 0, 0, 3, 0, 0}, \
    {0, 0, 0, 3, 3, 0, 3, 0}  \
}
#define lettreR { \
    {0, 3, 3, 3, 3, 0, 0, 0}, \
    {0, 3, 0, 0, 0, 3, 0, 0}, \
    {0, 3, 0, 0, 0, 3, 0, 0}, \
    {0, 3, 0, 0, 0, 3, 0, 0}, \
    {0, 3, 3, 3, 3, 0, 0, 0}, \
    {0, 3, 0, 0, 3, 0, 0, 0}, \
    {0, 3, 0, 0, 0, 3, 0, 0}, \
    {0, 3, 0, 0, 0, 0, 3, 0}  \
}
#define lettret { \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 0, 0, 0}, \
    {0, 0, 3, 3, 3, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 0, 0, 0}, \
    {0, 0, 3, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 3, 3, 3, 0, 0}  \
}
#define lettreU { \
    {0, 2, 0, 0, 0, 0, 2, 0}, \
    {0, 2, 0, 0, 0, 0, 2, 0}, \
    {0, 2, 0, 0, 0, 0, 2, 0}, \
    {0, 2, 0, 0, 0, 0, 2, 0}, \
    {0, 2, 0, 0, 0, 0, 2, 0}, \
    {0, 2, 0, 0, 0, 0, 2, 0}, \
    {0, 2, 0, 0, 0, 0, 2, 0}, \
    {0, 0, 2, 2, 2, 2, 0, 0}  \
}

const int numPatterns = 7;
const int numTrames = 4;

byte patterns[numTrames][numPatterns][8][8] = {
  {chiffre7, lettreR, lettreo, lettreb, lettreo, lettret, exlam}, 
  {Allv, SPACE}
};

byte M[8][8] = SPACE;

int pattern = 0;
int trame = 0;
int seq=0;

int demuxPin[4]={
  0,1,2,3};
int enablePin[4]={
  4,5,7,6};

byte redPin=8;
byte bluePin=9;

byte color=0;
byte colorScan=0;

byte balayage=0;

void setup()
{
  //Serial.begin(9600);

  ///////////////// Timer Stuff //////////////////
  
  // Set refresh rate (interrupt timeout period in Microseconds)
  Timer1.initialize(150);
  // Set interrupt routine to be called
  Timer1.attachInterrupt(update);
  
  //////////////////////////////////////////////// 

  //////// Déclaration des pins de sortie ////////
  
  for(int i=0; i<4; i++)
  {
    pinMode(demuxPin[i],OUTPUT);
    digitalWrite(demuxPin[i],LOW);   
  }
  for(int i=0; i<4; i++)
  {
    pinMode(enablePin[i],OUTPUT); 
    digitalWrite(enablePin[i],LOW);
  }
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  
  //////////////////////////////////////////////// 

  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
}

void loop()
{ 
  // Blinking
  trame=1;
  for (int pat=0; pat<2;pat++)
  {
    for (int ligne=0; ligne<8; ligne++)
    {
      for (int colonne=0; colonne<8; colonne++)
      {
        M[ligne][colonne]=patterns[trame][pat][ligne][colonne];
      }
    }
    if (pat==0)
    {
      delay(5); 
    }
    else
    {
      delay(90);  
    }
  }
/*
  // Shifting
  trame=0;
  for (int shift=0; shift<  numPatterns*8; shift++) //...< nb patterns trame*8
  {
    for (int ligne=0; ligne<8; ligne++)
    {
      for (int colonne=0; colonne<8; colonne++)
      {
        M[ligne][colonne]=patterns[trame][(pattern+shift/8+(colonne>(8-shift%8)))%  numPatterns][ligne][(colonne+shift)%8]; //...%8)))%nb patterns trame] - raccord fin de trame
      }
    }
    delay(60);
  }
*/
}

void update()
{

  ////////////////////////////////////////////////////////////////////////////////
  //////////// On éteint tout avant de changer sinon c'est dégueulasse ///////////
  ////////////////////////////////////////////////////////////////////////////////
  for (int i=0; i<4; i++)
  {
      digitalWrite(enablePin[i],HIGH);
  }  
  ////////////////////////////////////////////////////////////////////////////////

  convert_binary(balayage);
  
  
  if (colorScan==0)
    {
      digitalWrite(redPin,HIGH);
      digitalWrite(bluePin,LOW);
    }
    else
    {
      digitalWrite(redPin,LOW);
      digitalWrite(bluePin,HIGH);  
    }
 
  ////////////////////////////////////////////////////////////////////////////////
  ///// Si la couleur scannée est demandée, on active le démux correspondant /////
  ////////////////////////////////////////////////////////////////////////////////
  for (int i=0; i<4; i++)
  {
    if (M[2*i+balayage/8][balayage%8]==3 || (M[2*i+balayage/8][balayage%8]==colorScan+1))
    {
      digitalWrite(enablePin[i],LOW);
    }
    else
    {
      digitalWrite(enablePin[i],HIGH);
    }
  }  
  ////////////////////////////////////////////////////////////////////////////////



  ////////////////////////////////////////////////////////////////////////////////
  //////// Si on a balayé les deux couleurs, on passe à la LED suivante //////////
  //////////////////////////////////////////////////////////////////////////////// 
  if (colorScan==1)
  {
    balayage++;
    if (balayage==16){balayage=0;}

  }
  ////////////////////////////////////////////////////////////////////////////////
  
  colorScan=!colorScan;  
}



void convert_binary( int a )
{
  switch (a)
  {
  case 0 :
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    break;

  case 1 :
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    break;

  case 2 :
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    break;

  case 3 :
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    break;

  case 4 :
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    break;

  case 5 :
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    break;

  case 6 :
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    break;

  case 7 :
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    break;

  case 8 :
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    break;

  case 9 :
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    break;

  case 10 :
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    break;

  case 11 :
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    break;

  case 12 :
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    break;

  case 13 :
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    break;

  case 14 :
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    break;

  case 15 :
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    break;

  }
}





