//array aus zahlen, die werte werden später mit zufallszahlen belegt
int simon[8]={0,0,0,0,0,0,0,0};
//Status integer um anzuzeigen ob als nächstes input oder outpu kommt
int status=0;
// integer um die runde und damit die anzahl der sensoren anzuzeigen
int runde=1;
//MAX um ein ende zu definieren
#define MAX 7

void function sensorOut(int round){
//Der string mit randomisierten Zahlen wird einzelnd durchgegeangen
//In der ersten Runde nur vier Sensoren, in der zweiten fünf etc
for(int k=0;k<=round;k++){
//für jede Zahl wird eine SimonSays funktion aufgerufen
//Jeder Ziffer wird eine funktion zugewiesen
  switch (simon[k])[
    case 1:
    //hier funktionsaufruf des ersten Sensor
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
  ]
}
//status Variable wird auf 1 gesetzt
status=1;
//der Delay hier kann/sollte als countdown auf dem Display ausgegeben werden um nach dem abspielen der Sensoren den Rundenbeginn anzuzeigen
delay(100);
}

void function sensorIn(int round){
//Nachdem die Ausgewählten Sensoren abgespielt wurden ,muss hier der Input in der gleichen Reihenfolge aufgenommen werden
  switch (simon[k])[
    case 1:
    //hier funktionsaufruf des ersten Input
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
  ]
}
status=0;
if(runde <=MAX){runde++;}
else{Serial.println("ENDE");}
}

void setup() {
  // array wird angelegt
for(int i=0;i<=7;i++) {simon[i]= random(1,8);}

Serial.begin(9600);
}

void loop() {
  
  Serial.print("Hallo");
  // put your main code here, to run repeatedly:
  for(int j=0;j<=7;j++){
    Serial.print("i=");
    Serial.println(j);
    Serial.println(simon[j]);};
    //Wenn status 0 ist werden sensoren abgespielt, am ende der funktion wird status auf 1 gesetzte
    if(status==0){
    sensorOut(runde);
    };
    //ist status 1 wewrden sensoren aufegnommen, am ende wird die rundenzahl erhöht und der status auf 1 gesetzte
    if(status==1){
    sensorIn(runde);
    }

}
