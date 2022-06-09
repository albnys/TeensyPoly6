void setup() {
  Serial.begin(9600);
  AudioMemory(470);

  //Midi setup
  usbMIDI.begin();
  usbMIDI.setHandleNoteOn(myNoteOn);
  usbMIDI.setHandleNoteOff(myNoteOff);
  MIDI.setHandleNoteOn(myNoteOn);
  MIDI.setHandleNoteOff(myNoteOff);
  MIDI.begin(MIDI_CHANNEL_OMNI);


  //Switches
  pinMode(1, INPUT_PULLDOWN); //poly
  pinMode(2, INPUT_PULLDOWN); //shape A
  pinMode(3, INPUT_PULLDOWN); //shape A
  pinMode(4, INPUT_PULLDOWN); //shabe B
  pinMode(5, INPUT_PULLDOWN); //shape B
  pinMode(6, INPUT_PULLDOWN); //main oct
  pinMode(7, INPUT_PULLDOWN); //main oct
  pinMode(8, INPUT_PULLDOWN); //oct B
  pinMode(10, INPUT_PULLDOWN); //oct C
  pinMode(11, INPUT_PULLDOWN); //oct C
  pinMode(12, INPUT_PULLDOWN); //oct B
  pinMode(13, INPUT_PULLDOWN); //filt Mode

  pinMode(24, INPUT_PULLDOWN); //lfo dest
  pinMode(25, INPUT_PULLDOWN); //lfo dest
  pinMode(26, INPUT_PULLDOWN); //lfo shape
  pinMode(27, INPUT_PULLDOWN); //lfo shape

  pinMode(44, INPUT_PULLDOWN); //
  pinMode(45, INPUT_PULLDOWN); //
  pinMode(46, INPUT_PULLDOWN); //
  pinMode(48, INPUT_PULLDOWN); //
  pinMode(49, INPUT_PULLDOWN); //


  //Mux setup
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(30, OUTPUT);

  digitalWrite(28, 0);
  digitalWrite(29, 0);
  digitalWrite(30, 0);






  //vco setup
  vcoA1.begin(vcoVol, 150, WAVEFORM_SAWTOOTH);
  vcoB1.begin(vcoVol, 150, WAVEFORM_SQUARE);
  vcoC1.begin(vcoVol * 1.5, 150, WAVEFORM_ARBITRARY);
  sub1.begin(vcoVol * 1.5, 150, WAVEFORM_TRIANGLE);

  vcoA2.begin(vcoVol, 150, WAVEFORM_SAWTOOTH);
  vcoB2.begin(vcoVol, 150, WAVEFORM_SQUARE);
  vcoC2.begin(vcoVol * 1.5, 150, WAVEFORM_ARBITRARY);
  sub2.begin(vcoVol * 1.5, 150, WAVEFORM_TRIANGLE);

  vcoA3.begin(vcoVol, 150, WAVEFORM_SAWTOOTH);
  vcoB3.begin(vcoVol, 150, WAVEFORM_SQUARE);
  vcoC3.begin(vcoVol * 1.5, 150, WAVEFORM_ARBITRARY);
  sub3.begin(vcoVol * 1.5, 150, WAVEFORM_TRIANGLE);

  vcoA4.begin(vcoVol, 150, WAVEFORM_SAWTOOTH);
  vcoB4.begin(vcoVol, 150, WAVEFORM_SQUARE);
  vcoC4.begin(vcoVol * 1.5, 150, WAVEFORM_ARBITRARY);
  sub4.begin(vcoVol * 1.5, 150, WAVEFORM_TRIANGLE);

  vcoA5.begin(vcoVol, 150, WAVEFORM_SAWTOOTH);
  vcoB5.begin(vcoVol, 150, WAVEFORM_SQUARE);
  vcoC5.begin(vcoVol * 1.5, 150, WAVEFORM_ARBITRARY);
  sub5.begin(vcoVol * 1.5, 150, WAVEFORM_TRIANGLE);

  vcoA6.begin(vcoVol, 150, WAVEFORM_SAWTOOTH);
  vcoB6.begin(vcoVol, 150, WAVEFORM_SQUARE);
  vcoC6.begin(vcoVol * 1.5, 150, WAVEFORM_ARBITRARY);
  sub6.begin(vcoVol * 1.5, 150, WAVEFORM_TRIANGLE);


  //filter
  filter1.octaveControl(7);
  filterEnv1.sustain(0);

  filter2.octaveControl(7);
  filterEnv2.sustain(0);

  filter3.octaveControl(7);
  filterEnv3.sustain(0);

  filter4.octaveControl(7);
  filterEnv4.sustain(0);

  filter5.octaveControl(7);
  filterEnv5.sustain(0);

  filter6.octaveControl(7);
  filterEnv6.sustain(0);


  //lfo A
  lfoA1.begin(WAVEFORM_SINE);
  lfoA2.begin(WAVEFORM_SINE);
  lfoA3.begin(WAVEFORM_SINE);
  lfoA4.begin(WAVEFORM_SINE);
  lfoA5.begin(WAVEFORM_SINE);
  lfoA6.begin(WAVEFORM_SINE);

  //lfo B
  lfoB1.begin(0.5, 1, WAVEFORM_TRIANGLE);
  lfoB2.begin(0.5, 1, WAVEFORM_TRIANGLE);
  lfoB3.begin(0.5, 1, WAVEFORM_TRIANGLE);
  lfoB4.begin(0.5, 1, WAVEFORM_TRIANGLE);
  lfoB5.begin(0.5, 1, WAVEFORM_TRIANGLE);
  lfoB6.begin(0.5, 1, WAVEFORM_TRIANGLE);




  //dly
  dlyFiltL.frequency(4000);
  dlyFiltR.frequency(3000);

  dlyMixL.gain(0, 0.75);
  dlyMixL.gain(0, 0.75);


  dlyL.disable(1);
  dlyL.disable(2);
  dlyL.disable(3);
  dlyL.disable(4);
  dlyL.disable(5);
  dlyL.disable(6);
  dlyL.disable(7);

  dlyR.disable(1);
  dlyR.disable(2);
  dlyR.disable(3);
  dlyR.disable(4);
  dlyR.disable(5);
  dlyR.disable(6);
  dlyR.disable(7);


  //reverb
  reverb.roomsize(0.9);
  reverb.damping(0.8);




  //LFO DESTINATION DISCONNECT
  patchCord7.disconnect(); //vcoA
  patchCord8.disconnect(); //vcoB
  patchCord9.disconnect(); //vcoC
  patchCord10.disconnect(); //sub
  patchCord15.disconnect(); //vcoA
  patchCord16.disconnect(); //vcoB
  patchCord17.disconnect(); //vcoC
  patchCord18.disconnect(); //sub
  patchCord20.disconnect(); //vcoA
  patchCord21.disconnect(); //vcoB
  patchCord22.disconnect(); //vcoC
  patchCord23.disconnect(); //sub
  patchCord25.disconnect(); //vcoA
  patchCord26.disconnect(); //vcoB
  patchCord27.disconnect(); //vcoC
  patchCord28.disconnect(); //sub
  patchCord36.disconnect(); //vcoA
  patchCord37.disconnect(); //vcoB
  patchCord38.disconnect(); //vcoC
  patchCord39.disconnect(); //sub
  patchCord41.disconnect(); //vcoA
  patchCord42.disconnect(); //vcoB
  patchCord43.disconnect(); //vcoC
  patchCord44.disconnect(); //sub

  patchCord11.disconnect(); //filter
  patchCord19.disconnect(); //filter
  patchCord24.disconnect(); //filter
  patchCord29.disconnect(); //filter
  patchCord40.disconnect(); //filter
  patchCord45.disconnect(); //filter

}
