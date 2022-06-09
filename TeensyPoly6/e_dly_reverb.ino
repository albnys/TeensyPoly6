//Main ENVELOPE
env1.attack(envAtt);
env2.attack(envAtt);
env3.attack(envAtt);
env4.attack(envAtt);
env5.attack(envAtt);
env6.attack(envAtt);

env1.decay(envDec);
env2.decay(envDec);
env3.decay(envDec);
env4.decay(envDec);
env5.decay(envDec);
env6.decay(envDec);

env1.sustain(envSus);
env2.sustain(envSus);
env3.sustain(envSus);
env4.sustain(envSus);
env5.sustain(envSus);
env6.sustain(envSus);

env1.release(envRel);
env2.release(envRel);
env3.release(envRel);
env4.release(envRel);
env5.release(envRel);
env6.release(envRel);



//delay
dlyL.delay(0, dlyTimeL);
dlyMixL.gain(1, dlyAmt * 0.9);

dlyR.delay(0, dlyTimeR);
dlyMixR.gain(1, (dlyAmt / 1.4 ) * 0.9);


//reverb
fxL.gain(1, revMix);
fxR.gain(1, revMix);

reverb.roomsize(revSize);


//output gain reduction
fxL.gain(0, outGain - revMix / 1.6);
fxL.gain(2, outGain - revMix / 1.6);

fxR.gain(0, outGain - revMix / 1.6);
fxR.gain(2, outGain - revMix / 1.6);
