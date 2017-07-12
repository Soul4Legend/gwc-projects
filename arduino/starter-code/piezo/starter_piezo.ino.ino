#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_G4 392

int speakerPin = 8;
// notes for melody
int melody[] = {
  NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_G4,
  NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4

int noteDurations[] {
  4,4,4,4,4,2,4,4,2,4,4,24,4,4,4,4,4,2,4,4,4,4,1
};

void setup() {
  // put your setup code here, to run once:
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int thisNote = 0; thisNote < 25; thisNote++) {
    // Calculate note duration, take one second and divide it by the note type
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(speakerPin, melody[thisNote], noteDuration);

    // pause between your notes, notes duration + 30% works
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(speakerPin);
  }
}
