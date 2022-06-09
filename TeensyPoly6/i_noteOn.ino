void myNoteOn(byte channel, byte note, byte velocity) {

  if (digitalRead(1) == 1) { //POLYPHONIC mode
    switch (voices) {
      case 0 ... 5:
        if (env1on == false) {
          note1freq = note;
          env1.noteOn();
          filterEnv1.noteOn();
          lfoAenv1.noteOn();
          env1on = true;

        } else if (env2on == false) {
          note2freq = note;
          env2.noteOn();
          filterEnv2.noteOn();
          lfoAenv2.noteOn();
          env2on = true;

        } else if (env3on == false) {
          note3freq = note;
          env3.noteOn();
          filterEnv3.noteOn();
          lfoAenv3.noteOn();
          env3on = true;

        } else if (env4on == false) {
          note4freq = note;
          env4.noteOn();
          filterEnv4.noteOn();
          lfoAenv4.noteOn();
          env4on = true;

        } else if (env5on == false) {
          note5freq = note;
          env5.noteOn();
          filterEnv5.noteOn();
          lfoAenv5.noteOn();
          env5on = true;

        } else if (env6on == false) {
          note6freq = note;
          env6.noteOn();
          filterEnv6.noteOn();
          lfoAenv6.noteOn();
          env6on = true;

        }
        voices++;
        break;
    }


  } else if (digitalRead(1) == 0) { //MONOPHONIC mode
    note1freq = note;
    env1.noteOn();
    filterEnv1.noteOn();
    lfoAenv1.noteOn();
    voices++;
  }
}


void myNoteOff(byte channel, byte note, byte velocity) {
  if (digitalRead(1) == 1) { //POLYPHONIC mode
    switch (voices) {
      case 0 ... 6:
        if (note1freq == note) {
          env1.noteOff();
          filterEnv1.noteOff();
          lfoAenv1.noteOff();
          env1on = false;
        } else if (note2freq == note) {
          env2.noteOff();
          filterEnv2.noteOff();
          lfoAenv2.noteOff();
          env2on = false;
        } else if (note3freq == note) {
          env3.noteOff();
          filterEnv3.noteOff();
          lfoAenv3.noteOff();
          env3on = false;
        } else if (note4freq == note) {
          env4.noteOff();
          filterEnv4.noteOff();
          lfoAenv4.noteOff();
          env4on = false;
        } else if (note5freq == note) {
          env5.noteOff();
          filterEnv5.noteOff();
          lfoAenv5.noteOff();
          env5on = false;
        } else if (note6freq == note) {
          env6.noteOff();
          filterEnv6.noteOff();
          lfoAenv6.noteOff();
          env6on = false;
        }
        voices--;
        break;

    }



  } else if (digitalRead(1) == 0) { //MONOPHONIC mode
    if (note1freq == note) {
      env1.noteOff();
      filterEnv1.noteOff();
      lfoAenv1.noteOff();
      voices--;
    }
  }
}
