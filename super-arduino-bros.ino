
int C  = 0;
int Cs = 1;
int D  = 2;
int Ds = 3;
int E  = 4;
int F  = 5;
int Fs = 6;
int G  = 7;
int Gs = 8;
int A  = 9;
int As = 10;
int B  = 11;

int Db = Cs;
int Eb = Ds;
int Gb = Fs;
int Ab = Gs;
int Bb = As;

int X = -1;

float frequencies[] = {
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

int leds[] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
int buzzer = A0;

int bpm;
float R;

void setBpm(int value) {
	bpm = value;
	R = 60000.0f / (float) bpm;
}

void play(int note, float duration) {

	int intDuration = (int) round(duration);

	if (note != X) {

		for (int i = 0; i < 12; i++) {
			if (i == note) digitalWrite(leds[i], HIGH);
			else digitalWrite(leds[i], LOW);
		}

		int frequency = (int) round(frequencies[note]);
		tone(buzzer, frequency, intDuration);
	}

	delay(intDuration);
	noTone(buzzer);
}

void setup() {

	pinMode(buzzer, OUTPUT);

	for (int i = 0; i < 12; i++) {
		pinMode(leds[i], OUTPUT);
	}
}

void loop() {
	overworld();
	deathSound();
}

void deathSound() {

	setBpm(100);

	play(C, R/16.0f);
	play(Cs,R/16.0f);
	play(D, R/8.0f);
	play(X, R/4.0f);
	play(X, R/2.0f);

	play(B, R/4.0f);
	play(F, R/4.0f);
	play(X, R/4.0f);
	play(F, R/4.0f);

	play(F, R/3.0f);
	play(E, R/3.0f);
	play(D, R/3.0f);

	play(C, R/4.0f);
	play(E, R/4.0f);
	play(E, R/4.0f);
	play(E, R/4.0f);

	play(C, R/4.0f);
	play(X, R/4.0f);
	play(X, R/2.0f);
}

void overworld() {

	setBpm(100);

	overworld_1();
	overworld_2();
	overworld_2();
	overworld_3();
	overworld_3();
}

void overworld_1() {

	play(E, R/4.0f);
	play(E, R/4.0f);
	play(X, R/4.0f);
	play(E, R/4.0f);

	play(X, R/4.0f);
	play(C, R/4.0f);
	play(E, R/4.0f);
	play(X, R/4.0f);

	play(G, R/4.0f);
	play(X, R/4.0f);
	play(X, R/2.0f);

	play(G, R/4.0f);
	play(X, R/4.0f);
	play(X, R/2.0f);
}

void overworld_2() {

	play(C, R/4.0f);
	play(X, R/4.0f);
	play(X, R/4.0f);
	play(G, R/4.0f);

	play(X, R/2.0f);
	play(E, R/4.0f);
	play(X, R/4.0f);

	play(X, R/4.0f);
	play(A, R/4.0f);
	play(X, R/4.0f);
	play(B, R/4.0f);

	play(X, R/4.0f);
	play(Bb,R/4.0f);
	play(A, R/4.0f);
	play(X, R/4.0f);

	play(G, R/3.0f);
	play(E, R/3.0f);
	play(G, R/3.0f);

	play(A, R/4.0f);
	play(X, R/4.0f);
	play(F, R/4.0f);
	play(G, R/4.0f);

	play(X, R/4.0f);
	play(E, R/4.0f);
	play(X, R/4.0f);
	play(C, R/4.0f);

	play(D, R/4.0f);
	play(B, R/4.0f);
	play(X, R/2.0f);
}

void overworld_3() {

	overworld_3_a();
	overworld_3_b();

	overworld_3_a();
	overworld_3_c();

	overworld_3_a();
	overworld_3_b();

	overworld_3_d();
}

void overworld_3_a() {

	play(A, R/4.0f);
	play(X, R/4.0f);
	play(G, R/4.0f);
	play(Gb,R/4.0f);

	play(F, R/4.0f);
	play(Ds,R/4.0f);
	play(A, R/4.0f);
	play(E, R/4.0f);
}

void overworld_3_b() {

	play(D, R/4.0f);
	play(G, R/4.0f);
	play(A, R/4.0f);
	play(C, R/4.0f);

	play(A, R/4.0f);
	play(A, R/4.0f);
	play(C, R/4.0f);
	play(E, R/4.0f);
}

void overworld_3_c() {

	play(X, R/4.0f);
	play(C, R/4.0f);
	play(X, R/4.0f);
	play(C, R/4.0f);

	play(C, R/4.0f);
	play(X, R/4.0f);
	play(E, R/4.0f);
	play(X, R/4.0f);
}

void overworld_3_d() {

	play(A, R/4.0f);
	play(X, R/4.0f);
	play(Eb,R/4.0f);
	play(X, R/4.0f);

	play(X, R/4.0f);
	play(D, R/4.0f);
	play(X, R/2.0f);

	play(C, R/4.0f);
	play(X, R/4.0f);
	play(X, R/4.0f);
	play(E, R/4.0f);

	play(E, R/4.0f);
	play(X, R/4.0f);
	play(A, R/4.0f);
	play(X, R/4.0f);
}
