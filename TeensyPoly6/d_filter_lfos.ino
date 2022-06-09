
//filter
filter1.frequency(cut);
filter1.resonance(res);

filter2.frequency(cut);
filter2.resonance(res);

filter3.frequency(cut);
filter3.resonance(res);

filter4.frequency(cut);
filter4.resonance(res);

filter5.frequency(cut);
filter5.resonance(res);

filter6.frequency(cut);
filter6.resonance(res);


//filter env
filterEnv1.attack(filtAtt);
filterEnv1.decay(filtDec);
filterEnv1.release(filtDec);
dc1.amplitude(filtAmt);

filterEnv2.attack(filtAtt);
filterEnv2.decay(filtDec);
filterEnv2.release(filtDec);
dc2.amplitude(filtAmt);

filterEnv3.attack(filtAtt);
filterEnv3.decay(filtDec);
filterEnv3.release(filtDec);
dc3.amplitude(filtAmt);

filterEnv4.attack(filtAtt);
filterEnv4.decay(filtDec);
filterEnv4.release(filtDec);
dc4.amplitude(filtAmt);

filterEnv5.attack(filtAtt);
filterEnv5.decay(filtDec);
filterEnv5.release(filtDec);
dc5.amplitude(filtAmt);

filterEnv6.attack(filtAtt);
filterEnv6.decay(filtDec);
filterEnv6.release(filtDec);
dc6.amplitude(filtAmt);


//filter mode
if (filterMode == 1) {
  filterMode1.gain(0, 1);
  filterMode1.gain(1, 0);
  filterMode2.gain(0, 1);
  filterMode2.gain(1, 0);
  filterMode3.gain(0, 1);
  filterMode3.gain(1, 0);
  filterMode4.gain(0, 1);
  filterMode4.gain(1, 0);
  filterMode5.gain(0, 1);
  filterMode5.gain(1, 0);
  filterMode6.gain(0, 1);
  filterMode6.gain(1, 0);
} else if (filterMode == 0) {
  filterMode1.gain(0, 0);
  filterMode1.gain(1, 1);
  filterMode2.gain(0, 0);
  filterMode2.gain(1, 1);
  filterMode3.gain(0, 0);
  filterMode3.gain(1, 1);
  filterMode4.gain(0, 0);
  filterMode4.gain(1, 1);
  filterMode5.gain(0, 0);
  filterMode5.gain(1, 1);
  filterMode6.gain(0, 0);
  filterMode6.gain(1, 1);
}




//lfo A params
lfoA1.amplitude(lfoAamp);
lfoA1.frequency(lfoAfreq);
lfoAenv1.delay(lfoAdel);
lfoAenv1.attack(lfoAatt);
lfoAenv1.decay(lfoAdec);
lfoAenv1.release(lfoArel);
lfoAenv1.sustain(lfoAsus);

lfoA2.amplitude(lfoAamp);
lfoA2.frequency(lfoAfreq);
lfoAenv2.delay(lfoAdel);
lfoAenv2.attack(lfoAatt);
lfoAenv2.decay(lfoAdec);
lfoAenv2.release(lfoArel);
lfoAenv2.sustain(lfoAsus);

lfoA3.amplitude(lfoAamp);
lfoA3.frequency(lfoAfreq);
lfoAenv3.delay(lfoAdel);
lfoAenv3.attack(lfoAatt);
lfoAenv3.decay(lfoAdec);
lfoAenv3.release(lfoArel);
lfoAenv3.sustain(lfoAsus);

lfoA4.amplitude(lfoAamp);
lfoA4.frequency(lfoAfreq);
lfoAenv4.delay(lfoAdel);
lfoAenv4.attack(lfoAatt);
lfoAenv4.decay(lfoAdec);
lfoAenv4.release(lfoArel);
lfoAenv4.sustain(lfoAsus);

lfoA5.amplitude(lfoAamp);
lfoA5.frequency(lfoAfreq);
lfoAenv5.delay(lfoAdel);
lfoAenv5.attack(lfoAatt);
lfoAenv5.decay(lfoAdec);
lfoAenv5.release(lfoArel);
lfoAenv5.sustain(lfoAsus);

lfoA6.amplitude(lfoAamp);
lfoA6.frequency(lfoAfreq);
lfoAenv6.delay(lfoAdel);
lfoAenv6.attack(lfoAatt);
lfoAenv6.decay(lfoAdec);
lfoAenv6.release(lfoArel);
lfoAenv6.sustain(lfoAsus);




//lfo shape switch
if (lfoAshape == 0) {
  lfoA1.begin(WAVEFORM_SINE);
  lfoA2.begin(WAVEFORM_SINE);
  lfoA3.begin(WAVEFORM_SINE);
  lfoA4.begin(WAVEFORM_SINE);
  lfoA5.begin(WAVEFORM_SINE);
  lfoA6.begin(WAVEFORM_SINE);
} else if (lfoAshape == 1) {
  lfoA1.begin(WAVEFORM_SAWTOOTH_REVERSE);
  lfoA2.begin(WAVEFORM_SAWTOOTH_REVERSE);
  lfoA3.begin(WAVEFORM_SAWTOOTH_REVERSE);
  lfoA4.begin(WAVEFORM_SAWTOOTH_REVERSE);
  lfoA5.begin(WAVEFORM_SAWTOOTH_REVERSE);
  lfoA6.begin(WAVEFORM_SAWTOOTH_REVERSE);
} else if (lfoAshape == 2) {
  lfoA1.begin(WAVEFORM_SAMPLE_HOLD);
  lfoA2.begin(WAVEFORM_SAMPLE_HOLD);
  lfoA3.begin(WAVEFORM_SAMPLE_HOLD);
  lfoA4.begin(WAVEFORM_SAMPLE_HOLD);
  lfoA5.begin(WAVEFORM_SAMPLE_HOLD);
  lfoA6.begin(WAVEFORM_SAMPLE_HOLD);
}


//lfo A read
unsigned long currTime = millis();
if (currTime - prevTime >= readInt) {
  ampMod = lfoAread1.read();
  prevTime = currTime;
}
finalMix.gain(0, (1 - (ampMod * 3.2)));
finalMix.gain(1, (1 - (ampMod * 3.2)));





//lfo B params
lfoB1.amplitude(lfoBamp);
lfoB1.frequency(lfoBfreq);

lfoB2.amplitude(lfoBamp);
lfoB2.frequency(lfoBfreq);

lfoB3.amplitude(lfoBamp);
lfoB3.frequency(lfoBfreq);

lfoB4.amplitude(lfoBamp);
lfoB4.frequency(lfoBfreq);

lfoB5.amplitude(lfoBamp);
lfoB5.frequency(lfoBfreq);

lfoB6.amplitude(lfoBamp);
lfoB6.frequency(lfoBfreq);



//LFO A DESTINATION
if (lfoAdest == 0) { //lfo - pitch
  patchCord7.connect(); //vcoA
  patchCord8.connect(); //vcoB
  patchCord9.connect(); //vcoC
  patchCord10.connect(); //sub
  patchCord15.connect(); //vcoA
  patchCord16.connect(); //vcoB
  patchCord17.connect(); //vcoC
  patchCord18.connect(); //sub
  patchCord20.connect(); //vcoA
  patchCord21.connect(); //vcoB
  patchCord22.connect(); //vcoC
  patchCord23.connect(); //sub
  patchCord25.connect(); //vcoA
  patchCord26.connect(); //vcoB
  patchCord27.connect(); //vcoC
  patchCord28.connect(); //sub
  patchCord36.connect(); //vcoA
  patchCord37.connect(); //vcoB
  patchCord38.connect(); //vcoC
  patchCord39.connect(); //sub
  patchCord41.connect(); //vcoA
  patchCord42.connect(); //vcoB
  patchCord43.connect(); //vcoC
  patchCord44.connect(); //sub

  patchCord11.disconnect(); //filter
  patchCord19.disconnect(); //filter
  patchCord24.disconnect(); //filter
  patchCord29.disconnect(); //filter
  patchCord40.disconnect(); //filter
  patchCord45.disconnect(); //filter

  patchCord12.disconnect(); //lfoAread.


} if (lfoAdest == 1) { //lfo - filter

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

  patchCord11.connect(); //filter
  patchCord19.connect(); //filter
  patchCord24.connect(); //filter
  patchCord29.connect(); //filter
  patchCord40.connect(); //filter
  patchCord45.connect(); //filter

  patchCord12.disconnect(); //lfoAread.



} if (lfoAdest == 2) { //lfo - amp

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

  patchCord12.connect(); //lfoAread.
}
