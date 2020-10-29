// Autores: Caio Henrique Pardim, Guilherme Hernandes, Silfarny Alexandre,Talles Ramos, Vinicius Eduardo e Walace Vinicius
// Projeto referente a avaliação de microprocessadores
// Professor: Alisson Rodolfo Leite 

int ledvermelho = 0;
int ledverde = 2;
int ledamarelo = 1;

void setup() {
  pinMode (ledvermelho, OUTPUT);
  pinMode (ledverde, OUTPUT);
  pinMode (ledamarelo, OUTPUT);
}

void loop() {
  digitalWrite (ledvermelho,HIGH);
  digitalWrite (ledverde,LOW);
  digitalWrite (ledamarelo,LOW);
  delay (5000);
  digitalWrite (ledvermelho,LOW);
  digitalWrite (ledverde,HIGH);
  digitalWrite (ledamarelo,LOW);
  delay (5000);
  digitalWrite (ledvermelho,LOW);
  digitalWrite (ledverde,LOW);
  digitalWrite (ledamarelo,HIGH);
  delay (2500);

  digitalWrite (ledvermelho,HIGH);
  digitalWrite (ledverde,LOW);
  digitalWrite (ledamarelo,LOW);
  delay (10000);
  digitalWrite (ledvermelho,LOW);
  digitalWrite (ledverde,HIGH);
  digitalWrite (ledamarelo,LOW);
  delay (10000);
  digitalWrite (ledvermelho,LOW);
  digitalWrite (ledverde,LOW);
  digitalWrite (ledamarelo,HIGH);
  delay (4000);

  digitalWrite (ledvermelho,HIGH);
  digitalWrite (ledverde,LOW);
  digitalWrite (ledamarelo,LOW);
  delay (6000);
  digitalWrite (ledvermelho,LOW);
  digitalWrite (ledverde,HIGH);
  digitalWrite (ledamarelo,LOW);
  delay (6000);
  digitalWrite (ledvermelho,LOW);
  digitalWrite (ledverde,LOW);
  digitalWrite (ledamarelo,HIGH);
  delay (3000);

  digitalWrite (ledvermelho,HIGH);
  digitalWrite (ledverde,LOW);
  digitalWrite (ledamarelo,LOW);
  delay (1000);
  digitalWrite (ledvermelho,LOW);
  digitalWrite (ledverde,HIGH);
  digitalWrite (ledamarelo,LOW);
  delay (1000);
  digitalWrite (ledvermelho,LOW);
  digitalWrite (ledverde,LOW);
  digitalWrite (ledamarelo,HIGH);
  delay (500);

}
