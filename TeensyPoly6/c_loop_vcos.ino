void loop() {
  usbMIDI.read();
  MIDI.read();

  if (voices < 0) {
    voices = 0;
  }
  
  //Serial.println(AudioMemoryUsageMax());

  //cross mod
  modMix1.gain(0, crossMod);
  modMix2.gain(0, crossMod);
  modMix3.gain(0, crossMod);
  modMix4.gain(0, crossMod);
  modMix5.gain(0, crossMod);
  modMix6.gain(0, crossMod);

  //voice 1 frequencies
  vcoA1.frequency(noteFreqs[note1freq] * octave * bend);
  vcoB1.frequency(noteFreqs[note1freq] * octave * octaveB * tuneB * bend);
  vcoC1.frequency(noteFreqs[note1freq] * octave * octaveC * tuneC * bend);
  sub1.frequency(noteFreqs[note1freq] / 2 * octave * bend);

  vcoA2.frequency(noteFreqs[note2freq] * octave * bend);
  vcoB2.frequency(noteFreqs[note2freq] * octave * octaveB * tuneB * bend);
  vcoC2.frequency(noteFreqs[note2freq] * octave * octaveC * tuneC * bend);
  sub2.frequency(noteFreqs[note2freq] / 2 * octave * bend);

  vcoA3.frequency(noteFreqs[note3freq] * octave * bend);
  vcoB3.frequency(noteFreqs[note3freq] * octave * octaveB * tuneB * bend);
  vcoC3.frequency(noteFreqs[note3freq] * octave * octaveC * tuneC * bend);
  sub3.frequency(noteFreqs[note3freq] / 2 * octave * bend);

  vcoA4.frequency(noteFreqs[note4freq] * octave * bend);
  vcoB4.frequency(noteFreqs[note4freq] * octave * octaveB * tuneB * bend);
  vcoC4.frequency(noteFreqs[note4freq] * octave * octaveC * tuneC * bend);
  sub4.frequency(noteFreqs[note4freq] / 2 * octave * bend);

  vcoA5.frequency(noteFreqs[note5freq] * octave * bend);
  vcoB5.frequency(noteFreqs[note5freq] * octave * octaveB * tuneB * bend);
  vcoC5.frequency(noteFreqs[note5freq] * octave * octaveC * tuneC * bend);
  sub5.frequency(noteFreqs[note5freq] / 2 * octave * bend);

  vcoA6.frequency(noteFreqs[note6freq] * octave * bend);
  vcoB6.frequency(noteFreqs[note6freq] * octave * octaveB * tuneB * bend);
  vcoC6.frequency(noteFreqs[note6freq] * octave * octaveC * tuneC * bend);
  sub6.frequency(noteFreqs[note6freq] / 2 * octave * bend);



  //vco Mixer
  voiceMix1.gain(0, vcoAvol * mainVol);
  voiceMix1.gain(1, vcoBvol * mainVol);
  voiceMix1.gain(2, vcoCvol * mainVol);
  voiceMix1.gain(3, Subvol * mainVol);

  voiceMix2.gain(0, vcoAvol * mainVol);
  voiceMix2.gain(1, vcoBvol * mainVol);
  voiceMix2.gain(2, vcoCvol * mainVol);
  voiceMix2.gain(3, Subvol * mainVol);

  voiceMix3.gain(0, vcoAvol * mainVol);
  voiceMix3.gain(1, vcoBvol * mainVol);
  voiceMix3.gain(2, vcoCvol * mainVol);
  voiceMix3.gain(3, Subvol * mainVol);

  voiceMix4.gain(0, vcoAvol * mainVol);
  voiceMix4.gain(1, vcoBvol * mainVol);
  voiceMix4.gain(2, vcoCvol * mainVol);
  voiceMix4.gain(3, Subvol * mainVol);

  voiceMix5.gain(0, vcoAvol * mainVol);
  voiceMix5.gain(1, vcoBvol * mainVol);
  voiceMix5.gain(2, vcoCvol * mainVol);
  voiceMix5.gain(3, Subvol * mainVol);

  voiceMix6.gain(0, vcoAvol * mainVol);
  voiceMix6.gain(1, vcoBvol * mainVol);
  voiceMix6.gain(2, vcoCvol * mainVol);
  voiceMix6.gain(3, Subvol * mainVol);



  //vco A shape
  if (shapeA == 0) {
    vcoA1.begin(WAVEFORM_PULSE);
    vcoA2.begin(WAVEFORM_PULSE);
    vcoA3.begin(WAVEFORM_PULSE);
    vcoA4.begin(WAVEFORM_PULSE);
    vcoA5.begin(WAVEFORM_PULSE);
    vcoA6.begin(WAVEFORM_PULSE);
  } else if (shapeA == 1) {
    vcoA1.begin(WAVEFORM_SAWTOOTH);
    vcoA1.amplitude(vcoVol);
    vcoA2.begin(WAVEFORM_SAWTOOTH);
    vcoA2.amplitude(vcoVol);
    vcoA3.begin(WAVEFORM_SAWTOOTH);
    vcoA3.amplitude(vcoVol);
    vcoA4.begin(WAVEFORM_SAWTOOTH);
    vcoA4.amplitude(vcoVol);
    vcoA5.begin(WAVEFORM_SAWTOOTH);
    vcoA5.amplitude(vcoVol);
    vcoA6.begin(WAVEFORM_SAWTOOTH);
    vcoA6.amplitude(vcoVol);
  } else if (shapeA == 2) {
    vcoA1.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoA1.amplitude(vcoVol * 1.5);
    vcoA2.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoA2.amplitude(vcoVol * 1.5);
    vcoA3.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoA3.amplitude(vcoVol * 1.5);
    vcoA4.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoA4.amplitude(vcoVol * 1.5);
    vcoA5.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoA5.amplitude(vcoVol * 1.5);
    vcoA6.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoA6.amplitude(vcoVol * 1.5);
  }



  //vco B shape
  if (shapeB == 0) {
    vcoB1.begin(WAVEFORM_PULSE);
    vcoB2.begin(WAVEFORM_PULSE);
    vcoB3.begin(WAVEFORM_PULSE);
    vcoB4.begin(WAVEFORM_PULSE);
    vcoB5.begin(WAVEFORM_PULSE);
    vcoB6.begin(WAVEFORM_PULSE);
  } else if (shapeB == 1) {
    vcoB1.begin(WAVEFORM_SAWTOOTH);
    vcoB1.amplitude(vcoVol);
    vcoB2.begin(WAVEFORM_SAWTOOTH);
    vcoB2.amplitude(vcoVol);
    vcoB3.begin(WAVEFORM_SAWTOOTH);
    vcoB3.amplitude(vcoVol);
    vcoB4.begin(WAVEFORM_SAWTOOTH);
    vcoB4.amplitude(vcoVol);
    vcoB5.begin(WAVEFORM_SAWTOOTH);
    vcoB5.amplitude(vcoVol);
    vcoB6.begin(WAVEFORM_SAWTOOTH);
    vcoB6.amplitude(vcoVol);
  } else if (shapeB == 2) {
    vcoB1.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoB1.amplitude(vcoVol * 1.5);
    vcoB2.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoB2.amplitude(vcoVol * 1.5);
    vcoB3.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoB3.amplitude(vcoVol * 1.5);
    vcoB4.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoB4.amplitude(vcoVol * 1.5);
    vcoB5.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoB5.amplitude(vcoVol * 1.5);
    vcoB6.begin(WAVEFORM_TRIANGLE_VARIABLE);
    vcoB6.amplitude(vcoVol * 1.5);
  }



  //Vco C shapes
  switch (shapeC) {
    case 1 ... 32:
      vcoC1.arbitraryWaveform(wave1, 2000);
      vcoC2.arbitraryWaveform(wave1, 2000);
      vcoC3.arbitraryWaveform(wave1, 2000);
      vcoC4.arbitraryWaveform(wave1, 2000);
      vcoC5.arbitraryWaveform(wave1, 2000);
      vcoC6.arbitraryWaveform(wave1, 2000);
      break;
    case 37 ... 69:
      vcoC1.arbitraryWaveform(wave2, 2000);
      vcoC2.arbitraryWaveform(wave2, 2000);
      vcoC3.arbitraryWaveform(wave2, 2000);
      vcoC4.arbitraryWaveform(wave2, 2000);
      vcoC5.arbitraryWaveform(wave2, 2000);
      vcoC6.arbitraryWaveform(wave2, 2000);
      break;
    case 73 ... 105:
      vcoC1.arbitraryWaveform(wave3, 2000);
      vcoC2.arbitraryWaveform(wave3, 2000);
      vcoC3.arbitraryWaveform(wave3, 2000);
      vcoC4.arbitraryWaveform(wave3, 2000);
      vcoC5.arbitraryWaveform(wave3, 2000);
      vcoC6.arbitraryWaveform(wave3, 2000);
      break;
    case 109 ... 141:
      vcoC1.arbitraryWaveform(wave4, 2000);
      vcoC2.arbitraryWaveform(wave4, 2000);
      vcoC3.arbitraryWaveform(wave4, 2000);
      vcoC4.arbitraryWaveform(wave4, 2000);
      vcoC5.arbitraryWaveform(wave4, 2000);
      vcoC6.arbitraryWaveform(wave4, 2000);
      break;
    case 145 ... 177:
      vcoC1.arbitraryWaveform(wave5, 2000);
      vcoC2.arbitraryWaveform(wave5, 2000);
      vcoC3.arbitraryWaveform(wave5, 2000);
      vcoC4.arbitraryWaveform(wave5, 2000);
      vcoC5.arbitraryWaveform(wave5, 2000);
      vcoC6.arbitraryWaveform(wave5, 2000);
      break;
    case 181 ... 212:
      vcoC1.arbitraryWaveform(wave6, 2000);
      vcoC2.arbitraryWaveform(wave6, 2000);
      vcoC3.arbitraryWaveform(wave6, 2000);
      vcoC4.arbitraryWaveform(wave6, 2000);
      vcoC5.arbitraryWaveform(wave6, 2000);
      vcoC6.arbitraryWaveform(wave6, 2000);
      break;
    case 217 ... 248 :
      vcoC1.arbitraryWaveform(wave7, 2000);
      vcoC2.arbitraryWaveform(wave7, 2000);
      vcoC3.arbitraryWaveform(wave7, 2000);
      vcoC4.arbitraryWaveform(wave7, 2000);
      vcoC5.arbitraryWaveform(wave7, 2000);
      vcoC6.arbitraryWaveform(wave7, 2000);
      break;
    case 253 ... 285:
      vcoC1.arbitraryWaveform(wave8, 2000);
      vcoC2.arbitraryWaveform(wave8, 2000);
      vcoC3.arbitraryWaveform(wave8, 2000);
      vcoC4.arbitraryWaveform(wave8, 2000);
      vcoC5.arbitraryWaveform(wave8, 2000);
      vcoC6.arbitraryWaveform(wave8, 2000);
      break;
    case 289 ... 320:
      vcoC1.arbitraryWaveform(wave9, 2000);
      vcoC2.arbitraryWaveform(wave9, 2000);
      vcoC3.arbitraryWaveform(wave9, 2000);
      vcoC4.arbitraryWaveform(wave9, 2000);
      vcoC5.arbitraryWaveform(wave9, 2000);
      vcoC6.arbitraryWaveform(wave9, 2000);
      break;
    case 325 ... 357:
      vcoC1.arbitraryWaveform(wave10, 2000);
      vcoC2.arbitraryWaveform(wave10, 2000);
      vcoC3.arbitraryWaveform(wave10, 2000);
      vcoC4.arbitraryWaveform(wave10, 2000);
      vcoC5.arbitraryWaveform(wave10, 2000);
      vcoC6.arbitraryWaveform(wave10, 2000);
      break;
    case 361 ... 393:
      vcoC1.arbitraryWaveform(wave11, 2000);
      vcoC2.arbitraryWaveform(wave11, 2000);
      vcoC3.arbitraryWaveform(wave11, 2000);
      vcoC4.arbitraryWaveform(wave11, 2000);
      vcoC5.arbitraryWaveform(wave11, 2000);
      vcoC6.arbitraryWaveform(wave11, 2000);
      break;
    case 397 ... 429:
      vcoC1.arbitraryWaveform(wave12, 2000);
      vcoC2.arbitraryWaveform(wave12, 2000);
      vcoC3.arbitraryWaveform(wave12, 2000);
      vcoC4.arbitraryWaveform(wave12, 2000);
      vcoC5.arbitraryWaveform(wave12, 2000);
      vcoC6.arbitraryWaveform(wave12, 2000);
      break;
    case 433 ... 465:
      vcoC1.arbitraryWaveform(wave13, 2000);
      vcoC2.arbitraryWaveform(wave13, 2000);
      vcoC3.arbitraryWaveform(wave13, 2000);
      vcoC4.arbitraryWaveform(wave13, 2000);
      vcoC5.arbitraryWaveform(wave13, 2000);
      vcoC6.arbitraryWaveform(wave13, 2000);
      break;
    case 469 ... 500:
      vcoC1.arbitraryWaveform(wave14, 2000);
      vcoC2.arbitraryWaveform(wave14, 2000);
      vcoC3.arbitraryWaveform(wave14, 2000);
      vcoC4.arbitraryWaveform(wave14, 2000);
      vcoC5.arbitraryWaveform(wave14, 2000);
      vcoC6.arbitraryWaveform(wave14, 2000);
      break;
    case 505 ... 537:
      vcoC1.arbitraryWaveform(wave15, 2000);
      vcoC2.arbitraryWaveform(wave15, 2000);
      vcoC3.arbitraryWaveform(wave15, 2000);
      vcoC4.arbitraryWaveform(wave15, 2000);
      vcoC5.arbitraryWaveform(wave15, 2000);
      vcoC6.arbitraryWaveform(wave15, 2000);
      break;
    case 541 ... 573:
      vcoC1.arbitraryWaveform(wave16, 2000);
      vcoC2.arbitraryWaveform(wave16, 2000);
      vcoC3.arbitraryWaveform(wave16, 2000);
      vcoC4.arbitraryWaveform(wave16, 2000);
      vcoC5.arbitraryWaveform(wave16, 2000);
      vcoC6.arbitraryWaveform(wave16, 2000);
      break;
    case 577 ... 609:
      vcoC1.arbitraryWaveform(wave17, 2000);
      vcoC2.arbitraryWaveform(wave17, 2000);
      vcoC3.arbitraryWaveform(wave17, 2000);
      vcoC4.arbitraryWaveform(wave17, 2000);
      vcoC5.arbitraryWaveform(wave17, 2000);
      vcoC6.arbitraryWaveform(wave17, 2000);
      break;
    case 613 ... 645:
      vcoC1.arbitraryWaveform(wave18, 2000);
      vcoC2.arbitraryWaveform(wave18, 2000);
      vcoC3.arbitraryWaveform(wave18, 2000);
      vcoC4.arbitraryWaveform(wave18, 2000);
      vcoC5.arbitraryWaveform(wave18, 2000);
      vcoC6.arbitraryWaveform(wave18, 2000);
      break;
    case 649 ... 680:
      vcoC1.arbitraryWaveform(wave19, 2000);
      vcoC2.arbitraryWaveform(wave19, 2000);
      vcoC3.arbitraryWaveform(wave19, 2000);
      vcoC4.arbitraryWaveform(wave19, 2000);
      vcoC5.arbitraryWaveform(wave19, 2000);
      vcoC6.arbitraryWaveform(wave19, 2000);
      break;
    case 685 ... 717:
      vcoC1.arbitraryWaveform(wave20, 2000);
      vcoC2.arbitraryWaveform(wave20, 2000);
      vcoC3.arbitraryWaveform(wave20, 2000);
      vcoC4.arbitraryWaveform(wave20, 2000);
      vcoC5.arbitraryWaveform(wave20, 2000);
      vcoC6.arbitraryWaveform(wave20, 2000);
      break;
    case 721 ... 752:
      vcoC1.arbitraryWaveform(wave21, 2000);
      vcoC2.arbitraryWaveform(wave21, 2000);
      vcoC3.arbitraryWaveform(wave21, 2000);
      vcoC4.arbitraryWaveform(wave21, 2000);
      vcoC5.arbitraryWaveform(wave21, 2000);
      vcoC6.arbitraryWaveform(wave21, 2000);
      break;
    case 757 ... 789:
      vcoC1.arbitraryWaveform(wave22, 2000);
      vcoC2.arbitraryWaveform(wave22, 2000);
      vcoC3.arbitraryWaveform(wave22, 2000);
      vcoC4.arbitraryWaveform(wave22, 2000);
      vcoC5.arbitraryWaveform(wave22, 2000);
      vcoC6.arbitraryWaveform(wave22, 2000);
      break;
    case 793 ... 825:
      vcoC1.arbitraryWaveform(wave23, 2000);
      vcoC2.arbitraryWaveform(wave23, 2000);
      vcoC3.arbitraryWaveform(wave23, 2000);
      vcoC4.arbitraryWaveform(wave23, 2000);
      vcoC5.arbitraryWaveform(wave23, 2000);
      vcoC6.arbitraryWaveform(wave23, 2000);
      break;
    case 829 ... 860:
      vcoC1.arbitraryWaveform(wave24, 2000);
      vcoC2.arbitraryWaveform(wave24, 2000);
      vcoC3.arbitraryWaveform(wave24, 2000);
      vcoC4.arbitraryWaveform(wave24, 2000);
      vcoC5.arbitraryWaveform(wave24, 2000);
      vcoC6.arbitraryWaveform(wave24, 2000);
      break;
    case 865 ... 896:
      vcoC1.arbitraryWaveform(wave25, 2000);
      vcoC2.arbitraryWaveform(wave25, 2000);
      vcoC3.arbitraryWaveform(wave25, 2000);
      vcoC4.arbitraryWaveform(wave25, 2000);
      vcoC5.arbitraryWaveform(wave25, 2000);
      vcoC6.arbitraryWaveform(wave25, 2000);
      break;
    case 901 ... 933:
      vcoC1.arbitraryWaveform(wave26, 2000);
      vcoC2.arbitraryWaveform(wave26, 2000);
      vcoC3.arbitraryWaveform(wave26, 2000);
      vcoC4.arbitraryWaveform(wave26, 2000);
      vcoC5.arbitraryWaveform(wave26, 2000);
      vcoC6.arbitraryWaveform(wave26, 2000);
      break;
    case 937 ... 966:
      vcoC1.arbitraryWaveform(wave27, 2000);
      vcoC2.arbitraryWaveform(wave27, 2000);
      vcoC3.arbitraryWaveform(wave27, 2000);
      vcoC4.arbitraryWaveform(wave27, 2000);
      vcoC5.arbitraryWaveform(wave27, 2000);
      vcoC6.arbitraryWaveform(wave27, 2000);
      break;
    case 970 ... 1024:
      vcoC1.arbitraryWaveform(wave28, 2000);
      vcoC2.arbitraryWaveform(wave28, 2000);
      vcoC3.arbitraryWaveform(wave28, 2000);
      vcoC4.arbitraryWaveform(wave28, 2000);
      vcoC5.arbitraryWaveform(wave28, 2000);
      vcoC6.arbitraryWaveform(wave28, 2000);
      break;
  }
