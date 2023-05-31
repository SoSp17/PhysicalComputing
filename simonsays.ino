int simon[8]={0,0,0,0,0,0,0,0};
//Test
void setup() {
  // put your setup code here, to run once:
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

for(int k=0;k<=4;k++){
  switch (simon[k])[
    case 1:
    case 2:
    case 3:
  ]
}


delay(100);
}
