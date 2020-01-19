int pins[]={1,2,3,4,5,6,7,8,9};
void setup() {

  int i=0;
  
  for(i=0;i<9;i++)
  {
    pinMode(pins[i],OUTPUT);
  }
}
          
void loop() 
{ 
  int ledpinsA[]={1,2,3,4,5,6,7,9};
  int ledpinsB[]={1,2,3,4,5,6,7,8,9};
  int ledpinsC[]={1,2,3,4,7,8,9};
  int ledpinsD[]={1,2,3,4,6,7,8,9};
  int ledpinsE[]={1,2,3,4,5,7,8,9};
  int ledpinsF[]={1,2,3,4,5,7};
  int ledpinsG[]={1,2,4,5,6,7,8,9};
  int ledpinsH[]={1,4,7,5,3,6,9};
  int ledpinsI[]={1,2,3,5,7,8,9};
  int ledpinsJ[]={1,2,3,5,7,8};
  int ledpinsK[]={1,4,7,5,3,9};
  int ledpinsL[]={1,4,7,8,9};
  int ledpinsM[]={1,4,7,5,3,6,9};
  int ledpinsN[]={1,4,7,5,3,6,9};
  int ledpinsO[]={1,2,3,4,6,7,8,9};
  int ledpinsP[]={1,2,3,4,5,6,7};
  int ledpinsQ[]={1,2,3,4,5,6,7,8};
  int ledpinsR[]={1,2,3,4,5,6,7,9};
  int ledpinsS[]={1,2,3,5,7,8,9};
  int ledpinsT[]={1,2,3,5,8};
  int ledpinsU[]={1,4,7,8,9,3,6};
  int ledpinsV[]={1,4,8,3,6};
  int ledpinsW[]={1,4,7,5,9,6,3};
  int ledpinsX[]={1,7,5,3,9};
  int ledpinsY[]={1,5,8,3};
  int ledpinsZ[]={1,2,3,5,7,8,9};
  int i;
  char alphabet[]="PUNIT";
  char ch;
  for(int d=0;d<26;d++)
  {
    ch=alphabet[d];
    switch(ch)
    {
      case 'A':
      for(i=0;i<8;i++)
      {
        digitalWrite(ledpinsA[i],HIGH);
      }
      delay(1000);
     
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'B':
    for(i=0;i<9;i++)
      {
        digitalWrite(ledpinsB[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'C':
    
    for(i=0;i<7;i++)
      {
        digitalWrite(ledpinsC[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'D':
    
    for(i=0;i<8;i++)
      {
        digitalWrite(ledpinsD[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'E':
    
    for(i=0;i<8;i++)
      {
        digitalWrite(ledpinsE[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'F':
    
    for(i=0;i<6;i++)
      {
        digitalWrite(ledpinsF[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'G':
    
    for(i=0;i<8;i++)
      {
        digitalWrite(ledpinsG[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'H':
    
    for(i=0;i<7;i++)
      {
        digitalWrite(ledpinsH[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'I':
    
    for(i=0;i<7;i++)
      {
        digitalWrite(ledpinsI[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'J':
    
    for(i=0;i<6;i++)
      {
        digitalWrite(ledpinsJ[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'K':
    
    for(i=0;i<6;i++)
      {
        digitalWrite(ledpinsK[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'L':
    
    for(i=0;i<5;i++)
      {
        digitalWrite(ledpinsL[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'M':
    
    for(i=0;i<7;i++)
      {
        digitalWrite(ledpinsM[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'N':
    
    for(i=0;i<7;i++)
      {
        digitalWrite(ledpinsN[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'O':
    
    for(i=0;i<8;i++)
      {
        digitalWrite(ledpinsO[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'P':
    
    for(i=0;i<7;i++)
      {
        digitalWrite(ledpinsP[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'Q':
    
    for(i=0;i<8;i++)
      {
        digitalWrite(ledpinsQ[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'R':
    
    for(i=0;i<8;i++)
      {
        digitalWrite(ledpinsR[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'S':
    
    for(i=0;i<7;i++)
      {
        digitalWrite(ledpinsS[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'T':
    
    for(i=0;i<5;i++)
      {
        digitalWrite(ledpinsT[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'U':
    
    for(i=0;i<7;i++)
      {
        digitalWrite(ledpinsU[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'V':
    
    for(i=0;i<5;i++)
      {
        digitalWrite(ledpinsV[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'W':
    
    for(i=0;i<7;i++)
      {
        digitalWrite(ledpinsW[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'X':
    
    for(i=0;i<5;i++)
      {
        digitalWrite(ledpinsX[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'Y':
    
    for(i=0;i<4;i++)
      {
        digitalWrite(ledpinsY[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
    case 'Z':
    
    for(i=0;i<7;i++)
      {
        digitalWrite(ledpinsZ[i],HIGH);
      }
      delay(1000);
      for(i=0;i<9;i++)
      {
        digitalWrite(pins[i],LOW);
      }
     break;
     default:
     digitalWrite(13,HIGH);
     break;
  }
                       // wait for a second
  }
  }
