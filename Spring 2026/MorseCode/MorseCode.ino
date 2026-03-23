String message = "bro";
int t = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  morse("fun");
}

void loop() {
  // put your main code here, to run repeatedly:

}

void morse( String str )
{
  for( int i = 0; i < str.length(); i++ )
  {
    char let = str.charAt(i);
    if( let == 'a' ){ a(); }
    else if( let == 'b' ){ b(); }
    else if( let == 'c' ){ c(); }
    else if( let == 'd' ){ d(); }
    else if( let == 'e' ){ e(); }
    else if( let == 'f' ){ f(); }
    else if( let == 'g' ){ g(); }
    else if( let == 'h' ){ h(); }
    else if( let == 'i' ){ ii(); }
    else if( let == 'j' ){ j(); }
    else if( let == 'k' ){ k(); }
    else if( let == 'l' ){ l(); }
    else if( let == 'm' ){ m(); }
    else if( let == 'n' ){ n(); }
    else if( let == 'o' ){ o(); }
    else if( let == 'p' ){ p(); }
    else if( let == 'q' ){ q(); }
    else if( let == 'r' ){ r(); }
    else if( let == 's' ){ s(); }
    else if( let == 't' ){ tt(); }
    else if( let == 'u' ){ u(); }
    else if( let == 'v' ){ v(); }
    else if( let == 'w' ){ w(); }
    else if( let == 'x' ){ x(); }
    else if( let == 'y' ){ y(); }
    else if( let == 'z' ){ z(); }
  }
}

void a(){ dot(); dash(); }
void b(){ dash(); dot(); dot(); dot(); }
void c(){ dash(); dot(); dash(); dot(); }
void d(){ dash(); dot(); dot(); }
void e(){ dot(); }
void f(){ dot(); dot(); dash(); dot(); }
void g(){ dash(); dash(); dot(); }
void h(){ dot(); dot(); dot(); }
void ii(){ dot(); dot(); }
void j(){ dot(); dash(); dash(); dash();}
void k(){ dash(); dot(); dash();}
void l(){ dot(); dash(); dot(); dot();}
void m(){ dash(); dash();}
void n(){ dash(); dot();}
void o(){ dash(); dash(); dash();}
void p(){ dot(); dash(); dash(); dot();}
void q(){ dash(); dash(); dot(); dash();}
void r(){ dot(); dash(); dot(); }
void s(){ dot(); dot(); dot();}
void tt(){ dash();}
void u(){ dot(); dot(); dash(); }
void v(){ dot(); dot(); dot(); dash();}
void w(){ dot(); dash(); dash(); }
void x(){ dash(); dot(); dot(); dash();}
void y(){ dash(); dot(); dash(); dash();}
void z(){ dash(); dash(); dot(); dot();}


void dot()
{
  digitalWrite(12, HIGH);
  delay(t);
  digitalWrite(12,LOW);
  delay(t);
}

void dash()
{
  digitalWrite(12, HIGH);
  delay(3*t);
  digitalWrite(12,LOW);
  delay(3*t);
}
void printMessage()
{
  for( int i = 0; i < message.length(); i++ )
  {
    Serial.println( message.charAt(i) );
  }
}
