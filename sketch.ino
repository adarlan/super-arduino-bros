
int portSpeak(7);

float C[] =    {16.5,             33,               66,               132,              264,              528,              1056,             2112,             4224            };
float Csus[] = {17.48114115,      34.9622823,       69.9245646,       139.8491292,      279.6982584,      559.3965168,      1118.7930336,     2237.5860672,     4475.1721344    };
float D[] =    {18.5206239943166, 37.0412479886331, 74.0824959772663, 148.164991954533, 296.329983909065, 592.65996781813,  1185.31993563626, 2370.63987127252, 4741.27974254504};
float Dsus[] = {19.621917710953,  39.243835421906,  78.4876708438121, 156.975341687624, 313.950683375248, 627.901366750497, 1255.80273350099, 2511.60546700199, 5023.21093400397};
float E[] =    {20.7886977659912, 41.5773955319824, 83.1547910639648, 166.30958212793,  332.619164255859, 665.238328511718, 1330.47665702344, 2660.95331404687, 5321.90662809374};
float F[] =    {22.0248581801201, 44.0497163602402, 88.0994327204804, 176.198865440961, 352.397730881922, 704.795461763843, 1409.59092352769, 2819.18184705537, 5638.36369411075};
float Fsus[] = {23.3345245245704, 46.6690490491408, 93.3380980982816, 186.676196196563, 373.352392393127, 746.704784786253, 1493.40956957251, 2986.81913914501, 5973.63827829002};
float G[] =    {24.7220676898274, 49.4441353796548, 98.8882707593096, 197.776541518619, 395.553083037238, 791.106166074477, 1582.21233214895, 3164.42466429791, 6328.84932859581};
float Gsus[] = {26.1921184730744, 52.3842369461487, 104.768473892297, 209.536947784595, 419.07389556919,  838.14779113838,  1676.29558227676, 3352.59116455352, 6705.18232910704};
float A[] =    {27.7495830330506, 55.4991660661013, 110.998332132203, 221.996664264405, 443.99332852881,  887.986657057621, 1775.97331411524, 3551.94662823048, 7103.89325646096};
float Asus[] = {29.3996592639032, 58.7993185278065, 117.598637055613, 235.197274111226, 470.394548222452, 940.789096444904, 1881.57819288981, 3763.15638577961, 7526.31277155923};
float B[] =    {31.1478541426786, 62.2957082853573, 124.591416570715, 249.182833141429, 498.365666282858, 996.731332565717, 1993.46266513143, 3986.92533026287, 7973.85066052573};

float Db[] =   {17.48114115,      34.9622823,       69.9245646,       139.8491292,      279.6982584,      559.3965168,      1118.7930336,     2237.5860672,     4475.1721344    };
float Eb[] =   {19.621917710953,  39.243835421906,  78.4876708438121, 156.975341687624, 313.950683375248, 627.901366750497, 1255.80273350099, 2511.60546700199, 5023.21093400397};
float Gb[] =   {23.3345245245704, 46.6690490491408, 93.3380980982816, 186.676196196563, 373.352392393127, 746.704784786253, 1493.40956957251, 2986.81913914501, 5973.63827829002};
float Ab[] =   {26.1921184730744, 52.3842369461487, 104.768473892297, 209.536947784595, 419.07389556919,  838.14779113838,  1676.29558227676, 3352.59116455352, 6705.18232910704};
float Bb[] =   {29.3996592639032, 58.7993185278065, 117.598637055613, 235.197274111226, 470.394548222452, 940.789096444904, 1881.57819288981, 3763.15638577961, 7526.31277155923};


int i = 7; // oitava... como é que define isso numa partitura?

float R1 =  ((float) 1);
float R2 =  ((float) 1) / ((float) 2);
float R3 =  ((float) 1) / ((float) 3);
float R4 =  ((float) 1) / ((float) 4);
float R8 =  ((float) 1) / ((float) 8);
float R16 = ((float) 1) / ((float) 6);

void overworld() {
  
  Serial.println("\nSuper Mario Bros (1985) Overworld / Main Theme");
  
  float bpm = 100;
  float notes[] =     {    E[i], E[i], 0,  E[i],    0,  C[i], E[i], 0,     G[i], 0,  0,     G[i-1], 0,  0,     C[i], 0,  0,  G[i-1],    0,  E[i-1], 0,     0,  A[i], 0,  B[i],    0,  Bb[i], A[i], 0,     G[i-1], E[i], G[i],    A[i+1], 0,  F[i], G[i],    0,  E[i], 0,  C[i],    D[i], B[i], 0,     C[i], 0,  0,  G[i-1],    0,  E[i-1], 0,     0,  A[i], 0,  B[i],    0,  Bb[i], A[i], 0,     G[i-1], E[i], G[i],    A[i+1], 0,  F[i], G[i],    0,  E[i], 0,  C[i],    D[i], B[i], 0,     A[i-2],  0,  G[i], Gb[i],    F[i], Dsus[i], A[i-1], E[i],    D[i-2],  G[i-1], A[i], C[i],    A[i-1],  A[i], C[i], E[i],    A[i-2],  0,  G[i], Gb[i],    F[i], Dsus[i], A[i-1], E[i],    0,  C[i+1], 0,  C[i+1],    C[i+1], 0,  E[i-2], 0,     A[i-2],  0,  G[i], Gb[i],    F[i], Dsus[i], A[i-1], E[i],    D[i-2],  G[i-1], A[i], C[i],    A[i-1],  A[i], C[i], E[i],    A[i-2], 0,  Eb[i], 0,     0,  D[i], 0,     C[i], 0,  0,  E[i],    E[i-2], 0,  A[i-2], 0,     A[i-2],  0,  G[i], Gb[i],    F[i], Dsus[i], A[i-1], E[i],    D[i-2],  G[i-1], A[i], C[i],    A[i-1],  A[i], C[i], E[i],    A[i-2],  0,  G[i], Gb[i],    F[i], Dsus[i], A[i-1], E[i],    0,  C[i+1], 0,  C[i+1],    C[i+1], 0,  E[i-2], 0,     A[i-2],  0,  G[i], Gb[i],    F[i], Dsus[i], A[i-1], E[i],    D[i-2],  G[i-1], A[i], C[i],    A[i-1],  A[i], C[i], E[i],    A[i-2], 0,  Eb[i], 0,     0,  D[i], 0,     C[i], 0,  0,  E[i],    E[i-2], 0,  A[i-2], 0     };
  float durations[] = {    R4,   R4,   R4, R4,      R4, R4,   R4,   R4,    R4,   R4, R2,    R4,     R4, R2,    R4,   R4, R4, R4,        R2, R4,     R4,    R4, R4,   R4, R4,      R4, R4,    R4,   R4,    R3,     R3,   R3,      R4,     R4, R4,   R4,      R4, R4,   R4, R4,      R4,   R4,   R2,    R4,   R4, R4, R4,        R2, R4,     R4,    R4, R4,   R4, R4,      R4, R4,    R4,   R4,    R3,     R3,   R3,      R4,     R4, R4,   R4,      R4, R4,   R4, R4,      R4,   R4,   R2,    R4,      R4, R4,   R4,       R4,   R4,      R4,     R4,      R4,      R4,     R4,   R4,      R4,      R4,   R4,   R4,      R4,      R4, R4,   R4,       R4,   R4,      R4,     R4,      R4, R4,     R4, R4,        R4,     R4, R4,     R4,    R4,      R4, R4,   R4,       R4,   R4,      R4,     R4,      R4,      R4,     R4,   R4,      R4,      R4,   R4,   R4,      R4,     R4, R4,    R4,    R4, R4,   R2,    R4,   R4, R4, R4,      R4,     R4, R4,     R4,    R4,      R4, R4,   R4,       R4,   R4,      R4,     R4,      R4,      R4,     R4,   R4,      R4,      R4,   R4,   R4,      R4,      R4, R4,   R4,       R4,   R4,      R4,     R4,      R4, R4,     R4, R4,        R4,     R4, R4,     R4,    R4,      R4, R4,   R4,       R4,   R4,      R4,     R4,      R4,      R4,     R4,   R4,      R4,      R4,   R4,   R4,      R4,     R4, R4,    R4,    R4, R4,   R2,    R4,   R4, R4, R4,      R4,     R4, R4,     R4    };
  
  // duração de um compasso em milissegundos
  float reference = 60000 / bpm;
  Serial.print("Reference time: ");
  Serial.print(reference);
  Serial.println("ms ");
  
  for (int n = 0; n < (sizeof(notes) / sizeof(*notes)); n++) {
    
    int note = notes[n];
    int duration = (int) round(durations[n] * reference);
    
    Serial.print(note);
    Serial.print("Hz ");
    Serial.print(duration);
    Serial.println("ms ");
    
    if (note > 0)
      tone(portSpeak, note, duration); // isso aqui executa como se fosse uma thread
    
    delay(duration);
  }
  noTone(portSpeak);
}

void deathSound() {
  
  Serial.println("\nSuper Mario Bros (1985) Death Sound");
  
  float bpm = 100;
  float notes[] =     {    C[i], Csus[i], D[i], 0,  0,    B[i], F[i], 0,  F[i],    F[i], E[i], D[i],    C[i], E[i-1], E[i-2], E[i-1],    C[i-1], 0,  0     };
  float durations[] = {    R16,  R16,     R8,   R4, R2,   R4,   R4,   R4, R4,      R3,   R3,   R3,      R4,   R4,     R4,     R4,        R4,     R4, R2    };
  
  // duração de um compasso em milissegundos
  float reference = 60000 / bpm;
  Serial.print("Reference time: ");
  Serial.print(reference);
  Serial.println("ms ");
  
  for (int n = 0; n < (sizeof(notes) / sizeof(*notes)); n++) {
    
    int note = notes[n];
    int duration = (int) round(durations[n] * reference);
    
    Serial.print(note);
    Serial.print("Hz ");
    Serial.print(duration);
    Serial.println("ms ");
    
    if (note > 0)
      tone(portSpeak, note, duration); // isso aqui executa como se fosse uma thread
    
    delay(duration);
  }
  noTone(portSpeak);
}

void starman() {
  
  Serial.println("\nSuper Mario Bros (1985) Starman Theme");
  
  float bpm = 75;
  float notes[] =     {    C[i], C[i], C[i], D[i-1], C[i],    0,  C[i], D[i-1], C[i], D[i-1], C[i],    B[i], B[i], B[i], C[i-1], B[i],    0,  B[i], C[i-1], B[i], C[i-1], B[i]     };
  float durations[] = {    R4,   R4,   R4,   R8,     R8,      R8, R4,   R8,     R8,   R8,     R4,      R4,   R4,   R4,   R8,     R8,      R8, R4,   R8,     R8,   R8,     R4       };
  
  // duração de um compasso em milissegundos
  float reference = 60000 / bpm;
  Serial.print("Reference time: ");
  Serial.print(reference);
  Serial.println("ms ");
  
  for (int n = 0; n < (sizeof(notes) / sizeof(*notes)); n++) {
    
    int note = notes[n];
    int duration = (int) round(durations[n] * reference);
    
    Serial.print(note);
    Serial.print("Hz ");
    Serial.print(duration);
    Serial.println("ms ");
    
    if (note > 0)
      tone(portSpeak, note, duration); // isso aqui executa como se fosse uma thread
    
    delay(duration);
  }
  noTone(portSpeak);
}

void printOverworld() {
  
  Serial.println("\nSuper Mario Bros (1985) Overworld / Main Theme");
  
  String notes[]={"E[i]","E[i]","0","E[i]","0","C[i]","E[i]","0","G[i]","0","0","G[i-1]","0","0","C[i]","0","0","G[i-1]","0","E[i-1]","0","0","A[i]","0","B[i]","0","Bb[i]","A[i]","0","G[i-1]","E[i]","G[i]","A[i+1]","0","F[i]","G[i]","0","E[i]","0","C[i]","D[i]","B[i]","0","C[i]","0","0","G[i-1]","0","E[i-1]","0","0","A[i]","0","B[i]","0","Bb[i]","A[i]","0","G[i-1]","E[i]","G[i]","A[i+1]","0","F[i]","G[i]","0","E[i]","0","C[i]","D[i]","B[i]","0","A[i-2]","0","G[i]","Gb[i]","F[i]","Dsus[i]","A[i-1]","E[i]","D[i-2]","G[i-1]","A[i]","C[i]","A[i-1]","A[i]","C[i]","E[i]","A[i-2]","0","G[i]","Gb[i]","F[i]","Dsus[i]","A[i-1]","E[i]","0","C[i+1]","0","C[i+1]","C[i+1]","0","E[i-2]","0","A[i-2]","0","G[i]","Gb[i]","F[i]","Dsus[i]","A[i-1]","E[i]","D[i-2]","G[i-1]","A[i]","C[i]","A[i-1]","A[i]","C[i]","E[i]","A[i-2]","0","Eb[i]","0","0","D[i]","0","C[i]","0","0","E[i]","E[i-2]","0","A[i-2]","0","A[i-2]","0","G[i]","Gb[i]","F[i]","Dsus[i]","A[i-1]","E[i]","D[i-2]","G[i-1]","A[i]","C[i]","A[i-1]","A[i]","C[i]","E[i]","A[i-2]","0","G[i]","Gb[i]","F[i]","Dsus[i]","A[i-1]","E[i]","0","C[i+1]","0","C[i+1]","C[i+1]","0","E[i-2]","0","A[i-2]","0","G[i]","Gb[i]","F[i]","Dsus[i]","A[i-1]","E[i]","D[i-2]","G[i-1]","A[i]","C[i]","A[i-1]","A[i]","C[i]","E[i]","A[i-2]","0","Eb[i]","0","0","D[i]","0","C[i]","0","0","E[i]","E[i-2]","0","A[i-2]","0"};
  String durations[]={"R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/2","R/4","R/4","R/2","R/4","R/4","R/4","R/4","R/2","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/3","R/3","R/3","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/2","R/4","R/4","R/4","R/4","R/2","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/3","R/3","R/3","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/2","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/2","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/2","R/4","R/4","R/4","R/4","R/4","R/4","R/4","R/4"};
  
  for (int n = 0; n < (sizeof(notes) / sizeof(*notes)); n++) {
    Serial.print("m.play(");
    Serial.print(notes[n]);
    Serial.print(", ");
    Serial.print(durations[n]);
    Serial.println(");");
  }
}

void setup() {
  Serial.begin(9600);
  printOverworld();
  overworld();
  //starman();
  deathSound();
}

void loop() {
}

