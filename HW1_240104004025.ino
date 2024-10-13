void dot(void);
void dash(void);
void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600); // Seri iletişimi başlat

  //ÖDEVİN İLK KISMI

    //"H"
  for(int i = 0; i < 4; i++)
  {
    dot();
  }
  delay(500);

  //E
  dot();
  delay(500);

  //L
  dot();
  dash();

  for(int i = 0; i < 2; i++)  //".."
  {
    dot();
  }
  delay(500);

    //L
  dot();
  dash();

  for(int i = 0; i < 2; i++)  //".."
  {
    dot();
  }
  delay(500);

  //"O"
  for(int i = 0; i < 3; i++)
  {
    dash();
  }
  delay(500);

  //","
    dash();
    dash();
    dot();
    dot();
    dash();
    dash();
    delay(500);

  //"W"
  dot();

  for(int i = 0; i < 2; i++)
  {
    dash();
  }
  delay(500);

  //"O"
  for(int i = 0; i < 3; i++)
  {
    dash();
  }
  delay(500);

  //"R"
  dot();
  dash();
  dot();
  delay(500);

  //"L"
  dot();
  dash();

  for(int i = 0; i < 2; i++)  //".."
  {
    dot();
  }
  delay(500);

  //"D"
  dash();

  for(int i = 0; i < 2; i++)  //".."
  {
    dot();
  }
  delay(500);
}



void loop() {
    if (Serial.available() > 0) // Seri porta veri geldi mi kontrol et
  {  
    char inputChar = Serial.read(); // Gelen karakteri oku

    if (inputChar == 'a' || inputChar == 'A')  // Eğer gelen karakter 'a' ise
    {
      dot();
      dash();
      delay(500);
    }

    else if (inputChar == 'b' || inputChar == 'B')  // Eğer gelen karakter 'b' ise
    {
      dash();
      dot();
      dot();
      dot();
      delay(500);
    }

    else if (inputChar == 'c' || inputChar == 'C')  // Eğer gelen karakter 'c' ise
    {
      dash();
      dot();
      dash();
      dot();
      delay(500);
    }

    else if (inputChar == 'd' || inputChar == 'D')  // Eğer gelen karakter 'd' ise
    {
      dash();
      dot();
      dot();
      delay(500);
    }

    else if (inputChar == 'e' || inputChar == 'E')  // Eğer gelen karakter 'e' ise
    {
      dot();
      delay(500);
    }

    else if (inputChar == 'f' || inputChar == 'F')  // Eğer gelen karakter 'f' ise
    {
      dot();
      dot();
      dash();
      dot();
      delay(500);
    }

    else if (inputChar == 'g' || inputChar == 'G')  // Eğer gelen karakter 'g' ise
    {
      dash();
      dash();
      dot();
      delay(500);
    }

    else if (inputChar == 'h' || inputChar == 'H')  // Eğer gelen karakter 'h' ise
    {
      dot();
      dot();
      dot();
      dot();
      delay(500);
    }

    else if (inputChar == 'i' || inputChar == 'I')  // Eğer gelen karakter 'i' ise
    {
      dot();
      dot();
      delay(500);
    }

    else if (inputChar == 'j' || inputChar == 'J')  // Eğer gelen karakter 'j' ise
    {
      dot();
      dot();
      dot();
      delay(500);
    }

    else if (inputChar == 'k' || inputChar == 'K')  // Eğer gelen karakter 'k' ise
    {
      dash();
      dot();
      dash();
      delay(500);
    }

    else if (inputChar == 'l' || inputChar == 'L')  // Eğer gelen karakter 'l' ise
    {
      dot();
      dash();
      dot();
      dot();
      delay(500);
    }

    else if (inputChar == 'm' || inputChar == 'M')  // Eğer gelen karakter 'm' ise
    {
      dash();
      dash();
      delay(500);
    }

    else if (inputChar == 'n' || inputChar == 'N')  // Eğer gelen karakter 'n' ise
    {
      dash();
      dot();
      delay(500);
    }

    else if (inputChar == 'o' || inputChar == 'O')  // Eğer gelen karakter 'o' ise
    {
      dash();
      dash();
      dash();
      delay(500);
    }

    else if (inputChar == 'p' || inputChar == 'P')  // Eğer gelen karakter 'p' ise
    {
      dot();
      dash();
      dash();
      dot();
      delay(500);
    }

    else if (inputChar == 'q' || inputChar == 'Q')  // Eğer gelen karakter 'q' ise
    {
      dash();
      dash();
      dot();
      dash();
      delay(500);
    }

    else if (inputChar == 'r' || inputChar == 'R')  // Eğer gelen karakter 'r' ise
    {
      dot();
      dash();
      dot();
      delay(500);
    }

    else if (inputChar == 's' || inputChar == 'S')  // Eğer gelen karakter 's' ise
    {
      dot();
      dot();
      dot();
      delay(500);
    }

    else if (inputChar == 't' || inputChar == 'T')  // Eğer gelen karakter 't' ise
    {
      dash();
      delay(500);
    }

    else if (inputChar == 'u' || inputChar == 'U')  // Eğer gelen karakter 'u' ise
    {
      dot();
      dot();
      dash();
      delay(500);
    }

    else if (inputChar == 'v' || inputChar == 'V')  // Eğer gelen karakter 'v' ise
    {
      dot();
      dot();
      dot();
      dash();
      delay(500);
    }

    else if (inputChar == 'w' || inputChar == 'W')  // Eğer gelen karakter 'w' ise
    {
      dot();
      dash();
      dash();
      delay(500);
    }

    else if (inputChar == 'x' || inputChar == 'X')  // Eğer gelen karakter 'x' ise
    {
      dash();
      dot();
      dot();
      dash();
      delay(500);
    }

    else if (inputChar == 'y' || inputChar == 'Y')  // Eğer gelen karakter 'y' ise
    {
      dash();
      dot();
      dash();
      dash();
      delay(500);
    }

    else if (inputChar == 'z' || inputChar == 'Z')  // Eğer gelen karakter 'z' ise
    {
      dash();
      dash();
      dot();
      dot();
      delay(500);
    }

    else if (inputChar == ',')  // Eğer gelen karakter ',' ise
    {
      dash();
      dash();
      dot();
      dot();
      dash();
      dash();
      delay(500);
    }
        
    else if (inputChar == ' ')  // Eğer gelen karakter 'SPACE' ise
    {
      delay(1000);
    }

  }
}

void dot(void)  //Mors alfabesinde kullanılan "." kısa süreli ışığın yanması
{
  digitalWrite(8, HIGH);
  delay(250);
  digitalWrite(8, LOW);
  delay(250);
}

void dash(void) //Mors alfabesinde kullanılan "-" uzun süreli ışığın yanması
{
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  delay(250);
}
