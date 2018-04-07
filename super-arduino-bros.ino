
int C  = 0;
int Cs = 1;  int Db = Cs;
int D  = 2;
int Ds = 3;  int Eb = Ds;
int E  = 4;
int F  = 5;
int Fs = 6;  int Gb = Fs;
int G  = 7;
int Gs = 8;  int Ab = Gs;
int A  = 9;
int As = 10; int Bb = As;
int B  = 11;

int notePins[] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
int buzzerPin = A0;

float noteFrequencies[] = {
	2112.00000000000f,
	2237.58606720000f,
	2370.63987127252f,
	2511.60546700199f,
	2660.95331404687f,
	2819.18184705537f,
	2986.81913914501f,
	3164.42466429791f,
	3352.59116455352f,
	3551.94662823048f,
	3763.15638577961f,
	3986.92533026287f
};

void setup() {

	pinMode(buzzerPin, OUTPUT);
	for (int i = 0; i < 12; i++) pinMode(notePins[i], OUTPUT);

	overworld();
	deathSound();

	for (int i = 0; i < 12; i++) pinMode(notePins[i], INPUT);
}

int bpm;
float R;

void setBpm(int _bpm) {
	bpm = _bpm;
	R = 60000.0f / (float) bpm;
}

void play(int note, float duration) {
	
	int _duration = (int) round(duration);

	if (note > -1) {

		for (int i = 0; i < 12; i++) {
			if (i == note) digitalWrite(notePins[i], HIGH);
			else digitalWrite(notePins[i], LOW);
		}
		
		int _frequency = (int) round(noteFrequencies[note]);
		tone(buzzerPin, _frequency, _duration);
	}

	delay(_duration);
	noTone(buzzerPin);
}

void deathSound() {

	setBpm(100);

	play(C,  R/16.0f);
	play(Cs, R/16.0f);
	play(D,  R/8.0f);
	play(-1, R/4.0f);
	play(-1, R/2.0f);

	play(B,  R/4.0f);
	play(F,  R/4.0f);
	play(-1, R/4.0f);
	play(F,  R/4.0f);

	play(F,  R/3.0f);
	play(E,  R/3.0f);
	play(D,  R/3.0f);

	play(C,  R/4.0f);
	play(E,  R/4.0f);
	play(E,  R/4.0f);
	play(E,  R/4.0f);

	play(C,  R/4.0f);
	play(-1, R/4.0f);
	play(-1, R/2.0f);
}

void overworld() {

	setBpm(100);
	
	overworld_parte_1();
	overworld_parte_2();
	overworld_parte_2();
	overworld_parte_3();
	overworld_parte_3();
}

void overworld_parte_1() {

	play(E,  R/4.0f);
	play(E,  R/4.0f);
	play(-1, R/4.0f);
	play(E,  R/4.0f);

	play(-1, R/4.0f);
	play(C,  R/4.0f);
	play(E,  R/4.0f);
	play(-1, R/4.0f);

	play(G,  R/4.0f);
	play(-1, R/4.0f);
	play(-1, R/2.0f);

	play(G,  R/4.0f);
	play(-1, R/4.0f);
	play(-1, R/2.0f);
}

void overworld_parte_2() {

	play(C,  R/4.0f);
	play(-1, R/4.0f);
	play(-1, R/4.0f);
	play(G,  R/4.0f);

	play(-1, R/2.0f);
	play(E,  R/4.0f);
	play(-1, R/4.0f);

	play(-1, R/4.0f);
	play(A,  R/4.0f);
	play(-1, R/4.0f);
	play(B,  R/4.0f);

	play(-1, R/4.0f);
	play(Bb, R/4.0f);
	play(A,  R/4.0f);
	play(-1, R/4.0f);

	play(G,  R/3.0f);
	play(E,  R/3.0f);
	play(G,  R/3.0f);

	play(A,  R/4.0f);
	play(-1, R/4.0f);
	play(F,  R/4.0f);
	play(G,  R/4.0f);

	play(-1, R/4.0f);
	play(E,  R/4.0f);
	play(-1, R/4.0f);
	play(C,  R/4.0f);

	play(D,  R/4.0f);
	play(B,  R/4.0f);
	play(-1, R/2.0f);
}

void overworld_parte_3() {

	overworld_parte_3_a();
	overworld_parte_3_b();

	overworld_parte_3_a();
	overworld_parte_3_c();

	overworld_parte_3_a();
	overworld_parte_3_b();

	overworld_parte_3_d();
}

void overworld_parte_3_a() {

	play(A,  R/4.0f);
	play(-1, R/4.0f);
	play(G,  R/4.0f);
	play(Gb, R/4.0f);

	play(F,  R/4.0f);
	play(Ds, R/4.0f);
	play(A,  R/4.0f);
	play(E,  R/4.0f);
}

void overworld_parte_3_b() {

	play(D,  R/4.0f);
	play(G,  R/4.0f);
	play(A,  R/4.0f);
	play(C,  R/4.0f);

	play(A,  R/4.0f);
	play(A,  R/4.0f);
	play(C,  R/4.0f);
	play(E,  R/4.0f);
}

void overworld_parte_3_c() {

	play(-1, R/4.0f);
	play(C,  R/4.0f);
	play(-1, R/4.0f);
	play(C,  R/4.0f);

	play(C,  R/4.0f);
	play(-1, R/4.0f);
	play(E,  R/4.0f);
	play(-1, R/4.0f);
}

void overworld_parte_3_d() {

	play(A,  R/4.0f);
	play(-1, R/4.0f);
	play(Eb, R/4.0f);
	play(-1, R/4.0f);

	play(-1, R/4.0f);
	play(D,  R/4.0f);
	play(-1, R/2.0f);

	play(C,  R/4.0f);
	play(-1, R/4.0f);
	play(-1, R/4.0f);
	play(E,  R/4.0f);

	play(E,  R/4.0f);
	play(-1, R/4.0f);
	play(A,  R/4.0f);
	play(-1, R/4.0f);
}

void loop() {

	boolean buzzing = false;

	for (int i = 0; i < 12; i++) {

		if (digitalRead(notePins[i]) == HIGH) {
			buzzing = true;
			tone(buzzerPin, noteFrequencies[i]);
		}
	}

	if (!buzzing) {
		noTone(buzzerPin);
	}

}
