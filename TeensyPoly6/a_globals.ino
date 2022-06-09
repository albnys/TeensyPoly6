#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       lfoA1;      //xy=153.9333610534668,214.64774894714355
AudioSynthWaveform       lfoA2; //xy=159.33330154418945,472.5476875305176
AudioSynthWaveform       lfoA3; //xy=161.90474319458008,732.6191596984863
AudioSynthWaveform       lfoA4; //xy=161.90474319458008,992.7619819641113
AudioSynthWaveform       lfoA5; //xy=167.30468368530273,1242.6619205474854
AudioSynthWaveform       lfoA6; //xy=169.87612533569336,1512.733392715454
AudioEffectEnvelope      lfoAenv1;      //xy=232.33330917358398,129.3143424987793
AudioSynthWaveform       lfoB1; //xy=278.9333305358887,173.93335914611816
AudioEffectEnvelope      lfoAenv2; //xy=279.3332748413086,472.5476369857788
AudioEffectEnvelope      lfoAenv3; //xy=281.9047164916992,732.6191091537476
AudioEffectEnvelope      lfoAenv4; //xy=281.9047164916992,992.7619314193726
AudioSynthWaveform       lfoB2; //xy=284.3332710266113,431.8332977294922
AudioSynthWaveform       lfoB3; //xy=286.90471267700195,691.9047698974609
AudioSynthWaveform       lfoB4; //xy=286.90471267700195,952.0475921630859
AudioEffectEnvelope      lfoAenv5; //xy=287.3046569824219,1242.6618700027466
AudioEffectEnvelope      lfoAenv6; //xy=289.8760986328125,1512.7333421707153
AudioSynthWaveform       lfoB5; //xy=292.3046531677246,1201.94753074646
AudioSynthWaveform       lfoB6; //xy=294.87609481811523,1472.0190029144287
AudioMixer4              modMix1;         //xy=315.8000030517578,97.93336296081543
AudioAnalyzeRMS          lfoAread1;           //xy=320.53334045410156,248.9333620071411
AudioMixer4              modMix2; //xy=321.19994354248047,355.83330154418945
AudioMixer4              modMix3; //xy=323.7713851928711,615.9047737121582
AudioMixer4              modMix4; //xy=323.7713851928711,876.0475959777832
AudioMixer4              modMix5; //xy=329.17132568359375,1125.9475345611572
AudioMixer4              modMix6; //xy=331.7427673339844,1396.019006729126
AudioSynthWaveformModulated sub1; //xy=470.93334197998047,208.93334197998047
AudioSynthWaveformModulated vcoA1; //xy=471.93334197998047,115.9333381652832
AudioSynthWaveformModulated vcoB1; //xy=471.93334197998047,146.93334770202637
AudioSynthWaveformModulated vcoC1;   //xy=471.9333724975586,177.93337440490723
AudioSynthWaveformModulated sub2; //xy=476.3332824707031,466.8332805633545
AudioSynthWaveformModulated vcoA2; //xy=477.3332824707031,373.8332767486572
AudioSynthWaveformModulated vcoB2; //xy=477.3332824707031,404.8332862854004
AudioSynthWaveformModulated vcoC2; //xy=477.33331298828125,435.83331298828125
AudioSynthWaveformModulated sub3; //xy=478.90472412109375,726.9047527313232
AudioSynthWaveformModulated vcoA3; //xy=479.90472412109375,633.904748916626
AudioSynthWaveformModulated vcoB3; //xy=479.90472412109375,664.9047584533691
AudioSynthWaveformModulated vcoC3; //xy=479.9047546386719,695.90478515625
AudioSynthWaveformModulated sub4; //xy=478.90472412109375,987.0475749969482
AudioSynthWaveformModulated vcoA4; //xy=479.90472412109375,894.047571182251
AudioSynthWaveformModulated vcoB4; //xy=479.90472412109375,925.0475807189941
AudioSynthWaveformModulated vcoC4; //xy=479.9047546386719,956.047607421875
AudioSynthWaveformModulated sub5; //xy=484.3046646118164,1236.9475135803223
AudioSynthWaveformModulated vcoA5; //xy=485.3046646118164,1143.947509765625
AudioSynthWaveformModulated vcoB5; //xy=485.3046646118164,1174.9475193023682
AudioSynthWaveformModulated vcoC5; //xy=485.30469512939453,1205.947546005249
AudioSynthWaveformModulated sub6; //xy=486.87610626220703,1507.018985748291
AudioSynthWaveformModulated vcoA6; //xy=487.87610626220703,1414.0189819335938
AudioSynthWaveformModulated vcoB6;  //xy=487.87610626220703,1445.018991470337
AudioSynthWaveformModulated vcoC6; //xy=487.87613677978516,1476.0190181732178
AudioMixer4              voiceMix1;         //xy=632.9334449768066,160.93334197998047
AudioMixer4              voiceMix2; //xy=638.3333854675293,418.8332805633545
AudioMixer4              voiceMix3; //xy=640.9048271179199,678.9047527313232
AudioMixer4              voiceMix4; //xy=640.9048271179199,939.0475749969482
AudioMixer4              voiceMix5; //xy=646.3047676086426,1188.9475135803223
AudioMixer4              voiceMix6; //xy=648.8762092590332,1459.018985748291
AudioSynthWaveformDc     dc1;            //xy=654.8001174926758,208.9333610534668
AudioSynthWaveformDc     dc2; //xy=660.2000579833984,466.8332996368408
AudioSynthWaveformDc     dc3; //xy=662.7714996337891,726.9047718048096
AudioSynthWaveformDc     dc4; //xy=662.7714996337891,987.0475940704346
AudioSynthWaveformDc     dc5; //xy=668.1714401245117,1236.9475326538086
AudioSynthWaveformDc     dc6; //xy=670.7428817749023,1507.0190048217773
AudioEffectEnvelope      filterEnv1;      //xy=773.8003215789795,197.93339347839355
AudioEffectEnvelope      filterEnv2; //xy=779.2002620697021,455.8333320617676
AudioEffectEnvelope      filterEnv3; //xy=781.7717037200928,715.9048042297363
AudioEffectEnvelope      filterEnv4; //xy=781.7717037200928,976.0476264953613
AudioEffectEnvelope      filterEnv5; //xy=787.1716442108154,1225.9475650787354
AudioEffectEnvelope      filterEnv6; //xy=789.743085861206,1496.019037246704
AudioMixer4              filterMix1; //xy=945.8001937866211,199.93337631225586
AudioMixer4              filterMix2; //xy=951.2001342773438,457.8333148956299
AudioMixer4              filterMix3; //xy=953.7715759277344,717.9047870635986
AudioMixer4              filterMix4; //xy=953.7715759277344,978.0476093292236
AudioMixer4              filterMix5; //xy=959.171516418457,1227.9475479125977
AudioMixer4              filterMix6; //xy=961.7429580688477,1498.0190200805664
AudioFilterStateVariable filter1;        //xy=1066.8003997802734,166.9333267211914
AudioFilterStateVariable filter2; //xy=1072.200340270996,424.83326530456543
AudioFilterStateVariable filter3; //xy=1074.7717819213867,684.9047374725342
AudioFilterStateVariable filter4; //xy=1074.7717819213867,945.0475597381592
AudioFilterStateVariable filter5; //xy=1080.1717224121094,1194.9474983215332
AudioFilterStateVariable filter6; //xy=1082.7431640625,1465.018970489502
AudioMixer4              filterMode1;         //xy=1198.66695022583,181.9333553314209
AudioMixer4              filterMode2; //xy=1204.0668907165527,439.8332939147949
AudioMixer4              filterMode3; //xy=1206.6383323669434,699.9047660827637
AudioMixer4              filterMode4; //xy=1206.6383323669434,960.0475883483887
AudioMixer4              filterMode5;  //xy=1212.038272857666,1209.9475269317627
AudioMixer4              filterMode6; //xy=1214.6097145080566,1480.0189990997314
AudioEffectEnvelope      env1;      //xy=1328.6005554199219,181.93345737457275
AudioEffectEnvelope      env2; //xy=1334.0004959106445,439.8333959579468
AudioEffectEnvelope      env3; //xy=1336.5719375610352,699.9048681259155
AudioEffectEnvelope      env4; //xy=1336.5719375610352,960.0476903915405
AudioEffectEnvelope      env5; //xy=1341.9718780517578,1209.9476289749146
AudioEffectEnvelope      env6; //xy=1344.5433197021484,1480.0191011428833
AudioMixer4              mix1; //xy=1670.9339637756348,785.7668323516846
AudioMixer4              mix2; //xy=1670.9338912963867,917.7668380737305
AudioMixer4              finalMix; //xy=1795.9338989257812,854.7668190002441
AudioFilterStateVariable dlyFiltR; //xy=2003.8004722595215,1181.3002490997314
AudioFilterStateVariable dlyFiltL;        //xy=2015.1337928771973,942.633547782898
AudioEffectDelay         dlyL;         //xy=2128.244888305664,1040.9224643707275
AudioEffectDelay         dlyR; //xy=2127.77779006958,1274.4259929656982
AudioMixer4              dlyMixR; //xy=2128.934093475342,1174.700201034546
AudioMixer4              dlyMixL; //xy=2139.48970413208,936.1446781158447
AudioEffectFreeverb      reverb;      //xy=2204.4674758911133,620.5891056060791
AudioMixer4              fxL; //xy=2379.023365020752,785.255838394165
AudioMixer4              fxR; //xy=2379.023235321045,907.2558078765869
AudioOutputI2S           i2s1;           //xy=2549.5332946777344,853.2666549682617
AudioConnection          patchCord1(lfoA1, lfoAenv1);
AudioConnection          patchCord2(lfoA2, lfoAenv2);
AudioConnection          patchCord3(lfoA3, lfoAenv3);
AudioConnection          patchCord4(lfoA4, lfoAenv4);
AudioConnection          patchCord5(lfoA5, lfoAenv5);
AudioConnection          patchCord6(lfoA6, lfoAenv6);
AudioConnection          patchCord7(lfoAenv1, 0, modMix1, 1);
AudioConnection          patchCord8(lfoAenv1, 0, vcoB1, 0);
AudioConnection          patchCord9(lfoAenv1, 0, vcoC1, 0);
AudioConnection          patchCord10(lfoAenv1, 0, sub1, 0);
AudioConnection          patchCord11(lfoAenv1, 0, filterMix1, 1);
AudioConnection          patchCord12(lfoAenv1, lfoAread1);
AudioConnection          patchCord13(lfoB1, 0, vcoA1, 1);
AudioConnection          patchCord14(lfoB1, 0, vcoB1, 1);
AudioConnection          patchCord15(lfoAenv2, 0, modMix2, 1);
AudioConnection          patchCord16(lfoAenv2, 0, vcoB2, 0);
AudioConnection          patchCord17(lfoAenv2, 0, vcoC2, 0);
AudioConnection          patchCord18(lfoAenv2, 0, sub2, 0);
AudioConnection          patchCord19(lfoAenv2, 0, filterMix2, 1);
AudioConnection          patchCord20(lfoAenv3, 0, modMix3, 1);
AudioConnection          patchCord21(lfoAenv3, 0, vcoB3, 0);
AudioConnection          patchCord22(lfoAenv3, 0, vcoC3, 0);
AudioConnection          patchCord23(lfoAenv3, 0, sub3, 0);
AudioConnection          patchCord24(lfoAenv3, 0, filterMix3, 1);
AudioConnection          patchCord25(lfoAenv4, 0, modMix4, 1);
AudioConnection          patchCord26(lfoAenv4, 0, vcoB4, 0);
AudioConnection          patchCord27(lfoAenv4, 0, vcoC4, 0);
AudioConnection          patchCord28(lfoAenv4, 0, sub4, 0);
AudioConnection          patchCord29(lfoAenv4, 0, filterMix4, 1);
AudioConnection          patchCord30(lfoB2, 0, vcoA2, 1);
AudioConnection          patchCord31(lfoB2, 0, vcoB2, 1);
AudioConnection          patchCord32(lfoB3, 0, vcoA3, 1);
AudioConnection          patchCord33(lfoB3, 0, vcoB3, 1);
AudioConnection          patchCord34(lfoB4, 0, vcoA4, 1);
AudioConnection          patchCord35(lfoB4, 0, vcoB4, 1);
AudioConnection          patchCord36(lfoAenv5, 0, modMix5, 1);
AudioConnection          patchCord37(lfoAenv5, 0, vcoB5, 0);
AudioConnection          patchCord38(lfoAenv5, 0, vcoC5, 0);
AudioConnection          patchCord39(lfoAenv5, 0, sub5, 0);
AudioConnection          patchCord40(lfoAenv5, 0, filterMix5, 1);
AudioConnection          patchCord41(lfoAenv6, 0, modMix6, 1);
AudioConnection          patchCord42(lfoAenv6, 0, vcoB6, 0);
AudioConnection          patchCord43(lfoAenv6, 0, vcoC6, 0);
AudioConnection          patchCord44(lfoAenv6, 0, sub6, 0);
AudioConnection          patchCord45(lfoAenv6, 0, filterMix6, 1);
AudioConnection          patchCord46(lfoB5, 0, vcoA5, 1);
AudioConnection          patchCord47(lfoB5, 0, vcoB5, 1);
AudioConnection          patchCord48(lfoB6, 0, vcoA6, 1);
AudioConnection          patchCord49(lfoB6, 0, vcoB6, 1);
AudioConnection          patchCord50(modMix1, 0, vcoA1, 0);
AudioConnection          patchCord51(modMix2, 0, vcoA2, 0);
AudioConnection          patchCord52(modMix3, 0, vcoA3, 0);
AudioConnection          patchCord53(modMix4, 0, vcoA4, 0);
AudioConnection          patchCord54(modMix5, 0, vcoA5, 0);
AudioConnection          patchCord55(modMix6, 0, vcoA6, 0);
AudioConnection          patchCord56(sub1, 0, voiceMix1, 3);
AudioConnection          patchCord57(vcoA1, 0, voiceMix1, 0);
AudioConnection          patchCord58(vcoB1, 0, voiceMix1, 1);
AudioConnection          patchCord59(vcoB1, 0, modMix1, 0);
AudioConnection          patchCord60(vcoC1, 0, voiceMix1, 2);
AudioConnection          patchCord61(sub2, 0, voiceMix2, 3);
AudioConnection          patchCord62(vcoA2, 0, voiceMix2, 0);
AudioConnection          patchCord63(vcoB2, 0, voiceMix2, 1);
AudioConnection          patchCord64(vcoB2, 0, modMix2, 0);
AudioConnection          patchCord65(vcoC2, 0, voiceMix2, 2);
AudioConnection          patchCord66(sub3, 0, voiceMix3, 3);
AudioConnection          patchCord67(vcoA3, 0, voiceMix3, 0);
AudioConnection          patchCord68(vcoB3, 0, voiceMix3, 1);
AudioConnection          patchCord69(vcoB3, 0, modMix3, 0);
AudioConnection          patchCord70(vcoC3, 0, voiceMix3, 2);
AudioConnection          patchCord71(sub4, 0, voiceMix4, 3);
AudioConnection          patchCord72(vcoA4, 0, voiceMix4, 0);
AudioConnection          patchCord73(vcoB4, 0, voiceMix4, 1);
AudioConnection          patchCord74(vcoB4, 0, modMix4, 0);
AudioConnection          patchCord75(vcoC4, 0, voiceMix4, 2);
AudioConnection          patchCord76(sub5, 0, voiceMix5, 3);
AudioConnection          patchCord77(vcoA5, 0, voiceMix5, 0);
AudioConnection          patchCord78(vcoB5, 0, voiceMix5, 1);
AudioConnection          patchCord79(vcoB5, 0, modMix5, 0);
AudioConnection          patchCord80(vcoC5, 0, voiceMix5, 2);
AudioConnection          patchCord81(sub6, 0, voiceMix6, 3);
AudioConnection          patchCord82(vcoA6, 0, voiceMix6, 0);
AudioConnection          patchCord83(vcoB6, 0, voiceMix6, 1);
AudioConnection          patchCord84(vcoB6, 0, modMix6, 0);
AudioConnection          patchCord85(vcoC6, 0, voiceMix6, 2);
AudioConnection          patchCord86(voiceMix1, 0, filter1, 0);
AudioConnection          patchCord87(voiceMix2, 0, filter2, 0);
AudioConnection          patchCord88(voiceMix3, 0, filter3, 0);
AudioConnection          patchCord89(voiceMix4, 0, filter4, 0);
AudioConnection          patchCord90(voiceMix5, 0, filter5, 0);
AudioConnection          patchCord91(voiceMix6, 0, filter6, 0);
AudioConnection          patchCord92(dc1, filterEnv1);
AudioConnection          patchCord93(dc2, filterEnv2);
AudioConnection          patchCord94(dc3, filterEnv3);
AudioConnection          patchCord95(dc4, filterEnv4);
AudioConnection          patchCord96(dc5, filterEnv5);
AudioConnection          patchCord97(dc6, filterEnv6);
AudioConnection          patchCord98(filterEnv1, 0, filterMix1, 0);
AudioConnection          patchCord99(filterEnv2, 0, filterMix2, 0);
AudioConnection          patchCord100(filterEnv3, 0, filterMix3, 0);
AudioConnection          patchCord101(filterEnv4, 0, filterMix4, 0);
AudioConnection          patchCord102(filterEnv5, 0, filterMix5, 0);
AudioConnection          patchCord103(filterEnv6, 0, filterMix6, 0);
AudioConnection          patchCord104(filterMix1, 0, filter1, 1);
AudioConnection          patchCord105(filterMix2, 0, filter2, 1);
AudioConnection          patchCord106(filterMix3, 0, filter3, 1);
AudioConnection          patchCord107(filterMix4, 0, filter4, 1);
AudioConnection          patchCord108(filterMix5, 0, filter5, 1);
AudioConnection          patchCord109(filterMix6, 0, filter6, 1);
AudioConnection          patchCord110(filter1, 0, filterMode1, 0);
AudioConnection          patchCord111(filter1, 1, filterMode1, 1);
AudioConnection          patchCord112(filter2, 0, filterMode2, 0);
AudioConnection          patchCord113(filter2, 1, filterMode2, 1);
AudioConnection          patchCord114(filter3, 0, filterMode3, 0);
AudioConnection          patchCord115(filter3, 1, filterMode3, 1);
AudioConnection          patchCord116(filter4, 0, filterMode4, 0);
AudioConnection          patchCord117(filter4, 1, filterMode4, 1);
AudioConnection          patchCord118(filter5, 0, filterMode5, 0);
AudioConnection          patchCord119(filter5, 1, filterMode5, 1);
AudioConnection          patchCord120(filter6, 0, filterMode6, 0);
AudioConnection          patchCord121(filter6, 1, filterMode6, 1);
AudioConnection          patchCord122(filterMode1, env1);
AudioConnection          patchCord123(filterMode2, env2);
AudioConnection          patchCord124(filterMode3, env3);
AudioConnection          patchCord125(filterMode4, env4);
AudioConnection          patchCord126(filterMode5, env5);
AudioConnection          patchCord127(filterMode6, env6);
AudioConnection          patchCord128(env1, 0, mix1, 0);
AudioConnection          patchCord129(env2, 0, mix1, 1);
AudioConnection          patchCord130(env3, 0, mix1, 2);
AudioConnection          patchCord131(env4, 0, mix2, 0);
AudioConnection          patchCord132(env5, 0, mix2, 1);
AudioConnection          patchCord133(env6, 0, mix2, 2);
AudioConnection          patchCord134(mix1, 0, finalMix, 0);
AudioConnection          patchCord135(mix2, 0, finalMix, 1);
AudioConnection          patchCord136(finalMix, 0, fxL, 0);
AudioConnection          patchCord137(finalMix, reverb);
AudioConnection          patchCord138(finalMix, 0, fxR, 0);
AudioConnection          patchCord139(finalMix, 0, dlyMixL, 0);
AudioConnection          patchCord140(finalMix, 0, dlyMixR, 0);
AudioConnection          patchCord141(dlyFiltR, 0, dlyMixR, 1);
AudioConnection          patchCord142(dlyFiltL, 0, dlyMixL, 1);
AudioConnection          patchCord143(dlyL, 0, dlyFiltL, 0);
AudioConnection          patchCord144(dlyR, 0, dlyFiltR, 0);
AudioConnection          patchCord145(dlyMixR, 0, fxR, 2);
AudioConnection          patchCord146(dlyMixR, dlyR);
AudioConnection          patchCord147(dlyMixL, 0, fxL, 2);
AudioConnection          patchCord148(dlyMixL, dlyL);
AudioConnection          patchCord149(reverb, 0, fxL, 1);
AudioConnection          patchCord150(reverb, 0, fxR, 1);
AudioConnection          patchCord151(fxL, 0, i2s1, 0);
AudioConnection          patchCord152(fxR, 0, i2s1, 1);
// GUItool: end automatically generated code



#include <MIDI.h>
#include <EEPROMex.h>

MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);

//////// Multiplexer //////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
const int muxPots = A15;
float wait = 0; //mux read delay

int mux0;
int mux1;
int mux2;
int mux3;
int mux4;
int mux5;
int mux6;
int mux7;



///// notes, frequencies, voices /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
const float noteFreqs[128] = {8.176, 8.662, 9.177, 9.723, 10.301, 10.913, 11.562, 12.25, 12.978, 13.75, 14.568, 15.434, 16.352, 17.324, 18.354, 19.445, 20.602, 21.827, 23.125, 24.5, 25.957, 27.5, 29.135, 30.868, 32.703, 34.648, 36.708, 38.891, 41.203, 43.654, 46.249, 48.999, 51.913, 55, 58.27, 61.735, 65.406, 69.296, 73.416, 77.782, 82.407, 87.307, 92.499, 97.999, 103.826, 110, 116.541, 123.471, 130.813, 138.591, 146.832, 155.563, 164.814, 174.614, 184.997, 195.998, 207.652, 220, 233.082, 246.942, 261.626, 277.183, 293.665, 311.127, 329.628, 349.228, 369.994, 391.995, 415.305, 440, 466.164, 493.883, 523.251, 554.365, 587.33, 622.254, 659.255, 698.456, 739.989, 783.991, 830.609, 880, 932.328, 987.767, 1046.502, 1108.731, 1174.659, 1244.508, 1318.51, 1396.913, 1479.978, 1567.982, 1661.219, 1760, 1864.655, 1975.533, 2093.005, 2217.461, 2349.318, 2489.016, 2637.02, 2793.826, 2959.955, 3135.963, 3322.438, 3520, 3729.31, 3951.066, 4186.009, 4434.922, 4698.636, 4978.032, 5274.041, 5587.652, 5919.911, 6271.927, 6644.875, 7040, 7458.62, 7902.133, 8372.018, 8869.844, 9397.273, 9956.063, 10548.08, 11175.3, 11839.82, 12543.85};

int note1freq;
int note2freq;
int note3freq;
int note4freq;
int note5freq;
int note6freq;

int voices;





//checks if notes are on or not
///////////////////////////////////////////////////////////////////////////////////////////////////////////
bool env1on = false;
bool env2on = false;
bool env3on = false;
bool env4on = false;
bool env5on = false;
bool env6on = false;

//int vol of vcos.
float vcoVol = 0.07;
float mainVol;




float bend;

//voice mixer
///////////////////////////////////////////////////////////////////////////////////////////////////////////
float vcoAvol = 0.5;
float vcoBvol = 0.5;
float vcoCvol = 0.5;
float Subvol = 0.5;

float crossMod;

//Tunings, octaves etc.
///////////////////////////////////////////////////////////////////////////////////////////////////////////
float octave = 1;
float octaveB = 1;
float octaveC = 1;
float tuneB = 1;
float tuneC = 1;

//vco shapes
int shapeA;
int shapeB;
int shapeC = 1;


//filter
///////////////////////////////////////////////////////////////////////////////////////////////////////////
int cut = 2000;
float res = 1;
int filtAtt;
int filtDec;
float filtAmt;

int filterMode;


//envelope
///////////////////////////////////////////////////////////////////////////////////////////////////////////
int envAtt;
int envDec;
int envRel;
float envSus;

//lfo A
///////////////////////////////////////////////////////////////////////////////////////////////////////////
float lfoAamp;
float lfoAfreq;
int lfoAdel;
int lfoAatt;
int lfoAdec;
int lfoArel;
float lfoAsus;

int lfoAshape;
int lfoAdest;


//tremolo
float ampMod;
float readInt = 1.0001;
unsigned long prevTime;


//lfo B
///////////////////////////////////////////////////////////////////////////////////////////////////////////
float lfoBamp;
float lfoBfreq;



//delay
///////////////////////////////////////////////////////////////////////////////////////////////////////////
float outGain = 0.8;
float dlyAmt;

float dlyTimeL;
float dlyTimeR;

//reverb
///////////////////////////////////////////////////////////////////////////////////////////////////////////
float revMix;
float revSize;






//Presets
///////////////////////////////////////////////////////////////////////////////////////////////////////////
int preset;

bool prevBtn1;
bool prevBtn2;
bool prevBtn3;
bool prevBtn4;
bool prevBtn5;

bool presetLoaded1;
bool presetLoaded2;
bool presetLoaded3;
bool presetLoaded4;
bool presetLoaded5;




//turncheck
///////////////////////////////////////////////////////////////////////////////////////////////////////////
float tresh = 10;
float tresh2 = 20;

int timer = 6;
unsigned long prevTimer;


int tuneBpot;
int oldTuneBpot;
int tuneCpot;
int oldTuneCpot;

int octBsw;
int oldOctBsw;
int octCsw;
int oldOctCsw;

int shapeAsw;
int oldShapeAsw;
int shapeBsw;
int oldShapeBsw;
int shapeCpot;
int oldShapeCpot;


int crossModpot;
int oldCrossModpot;

int volApot;
int oldVolApot;
int volBpot;
int oldVolBpot;
int volCpot;
int oldVolCpot;
int volSubpot;
int oldVolSubpot;

int cutpot;
int oldCutpot;
int respot;
int oldRespot;

int filtModesw;
int oldFiltModesw;

int fAttpot;
int oldFAttpot;
int fDecpot;
int oldFDecpot;
int fAmtpot;
int oldFAmtpot;


int attpot;
int oldAttpot;
int decpot;
int oldDecpot;
float suspot;
float oldSuspot;

int lfoAmppot;
int oldLfoAmppot;
int lfoFreqpot;
int oldLfoFreqpot;
int lfoAttpot;
int oldLfoAttpot;
int lfoDecpot;
int oldLfoDecpot;
int lfoSuspot;
int oldLfoSuspot;

int lfoShapesw;
int oldLfoShapesw;
int lfoDestsw;
int oldLfoDestsw;

int lfoBAmppot;
int oldLfoBAmppot;
int lfoBFreqpot;
int oldLfoBFreqpot;

int dlyAmtpot;
int oldDlyAmtpot;
int dlyTimepot;
int oldDlyTimepot;

int revMixpot;
int oldRevMixpot;
int revSizepot;
int oldRevSizepot;



//28 WAVEFORMS
///////////////////////////////////////////////////////////////////////////////////////////////////////////
const int16_t wave1[257] = {
  652,  3250,  5203,  6105,  7141,  8326,  9440, 11564, 14886,
  17802, 20629, 24021, 27018, 27807, 27521, 26708, 25875, 25093, 25204,
  24485, 23202, 21859, 21177, 19946, 19560, 19924, 19937, 18705, 18559,
  20329, 22262, 23031, 22418, 22199, 22275, 24425, 25748, 28291, 27969,
  32767, 15117, -4838, -1354, -2955, -2067, -3567, -4453, -5371, -5142,
  -5939, -6755, -6863, -6361, -5851, -5767, -6034, -6776, -6129, -4368,
  -2801, -3522, -4762, -5516, -5567, -6764, -8322, -9493, -9451, -9420,
  -9843, -10963, -11722, -11960, -12028, -12463, -13045, -13706, -14132, -13916,
  -13653, -14082, -14822, -15241, -15832, -16372, -16585, -16913, -17330, -16569,
  -15381, -15375, -16046, -16141, -16239, -16459, -16157, -16025, -16902, -17597,
  -17334, -17166, -17723, -18196, -18008, -17711, -18036, -18484, -18017, -17146,
  -16864, -16384, -15035, -13779, -12319, -9474, -6602, -5713, -6134, -6873,
  -7828, -8053, -7607, -8256, -9490, -9439, -9436, -11113, -12538, -12173,
  -11091, -9975, -9288, -9955, -10825, -10065, -9003, -9316, -9709, -9378,
  -9581, -10292, -9921, -8130, -6072, -4910, -4697, -4146, -2413,  -431,
  1051,  2551,  4064,  4908,  4981,  4472,  3519,  2515,  1365,  -485,
  -2536, -3776, -4432, -5097, -5307, -4527, -3212, -2048,  -919,   649,
  2463,  3855,  4771,  5420,  5507,  5240,  5691,  7020,  8160,  8578,
  8429,  7917,  7797,  8645,  9542,  9522,  8959,  8282,  7527,  7242,
  7555,  7372,  5904,  3569,  1235,  -158,  -359,  -315,  -763, -1393,
  -1763, -1438,    58,  2217,  4180,  6305,  8738, 10244, 10505, 10608,
  10676, 10239,  9630,  8563,  6041,  2920,  1049,   279,  -545, -1321,
  -1454, -1291, -1304, -1273,  -880,  -532,  -776, -1046,  -476,   259,
  -4,  -482,   118,  1260,  1857,  2342,  3432,  4835,  5832,  6223,
  6537,  7194,  7684,  7428,  7021,  6818,  6010,  4264,  2839,  2358,
  2090,   944,  -652, -1491, -1085,  -722,  -594,   652
};
// Converted by AKWF2Teensy from AKWF_snippet_0002.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave2[257] = {
  662,  2669,  4281,  4921,  4187,  3449,  4710,  9132, 17294,
  26171, 31128, 32341, 32178, 31735, 31851, 32367, 32748, 32448, 30507,
  27918, 26072, 24015, 21743, 20690, 21355, 22669, 22394, 20138, 17846,
  16480, 16263, 17049, 18006, 19323, 20616, 20524, 19675, 19029, 18127,
  16903, 15662, 14580, 13172, 10730,  8462,  7971,  8026,  6549,  3863,
  780, -4488, -12022, -17487, -19968, -21990, -22479, -21344, -21612, -22846,
  -23047, -22191, -20345, -18266, -17108, -16643, -16064, -15056, -14538, -14962,
  -15050, -14996, -15798, -16960, -18773, -21230, -22798, -23219, -22673, -20947,
  -19125, -17427, -14949, -12087, -9281, -6624, -4618, -3220, -1960,  -106,
  2737,  5322,  7077,  9324, 12367, 15251, 17430, 18516, 18649, 18420,
  18041, 17370, 15711, 12915, 11096, 11329, 11361, 10521, 10484, 10828,
  10324,  9524,  9136,  9431, 10596, 12322, 14434, 16083, 16226, 15572,
  14578, 12540, 10388,  9158,  7546,  4240,  -221, -4000, -6795, -9440,
  -11612, -13149, -14975, -15930, -16550, -18901, -21543, -22512, -23125, -23153,
  -23103, -23998, -24430, -23938, -23642, -23181, -23469, -24454, -22910, -20135,
  -18893, -18270, -17102, -17043, -16576, -16003, -16012, -17273, -18374, -19757,
  -19710, -19541, -19124, -18689, -17719, -18112, -18043, -16751, -15111, -14190,
  -13266, -11476, -10702, -10577, -11887, -10374, -10311, -7235, -11508,  9886,
  28099, 21629, 22503, 19226, 18816, 17115, 17396, 16896, 17477, 17744,
  18146, 17412, 16409, 16383, 16428, 16083, 16746, 19439, 20771, 20995,
  20927, 21373, 20549, 18198, 14110, 10782,  6756,  1781, -2781, -6225,
  -9800, -12326, -14060, -15297, -16766, -18734, -19252, -17344, -15451, -14317,
  -12730, -10852, -8458, -6080, -4767, -3921, -2501, -1618, -1565, -1624,
  -1663, -2361, -2757, -1855,  -665,  -969, -2398, -3529, -4402, -5782,
  -6814, -6688, -6398, -6460, -6282, -5582, -4781, -4533, -4700, -4359,
  -3432, -2290, -1190,  -492,  -362,  -709,  -685,   662
};
// Converted by AKWF2Teensy from AKWF_snippet_0003.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave3[257] = {
  1016,  4415,  4062,  7242, 11058, 18522, 20907, 22072, 19380,
  13565, 16266, 19674, 25523, 22687, 21946, 17405, 16743, 20787, 23805,
  27758, 27012, 29051, 25332, 27275, 26313, 26091, 28699, 29422, 32767,
  30795, 31109, 28736, 28428, 26520, 24880, 21930, 18850, 25516, 26927,
  26875, 26163, 26277, 25612, 24697, 24909, 24491, 24930, 23020, 21149,
  17686, 21711, 24034, 21835, 23124, 21740, 23027, 21741, 21124, 21002,
  21025, 17816, 18314, 21397, 16849, 14604,  6770,  6800,  4622,  5664,
  10430, 10785, 11744,  6133,  3878, -3613, -1258, -1944,  1933,  6658,
  2489,   -80, -5373, -2820, -7317, -6745, -12882, -16705, -16003, -13415,
  -8572, -12049, -10411, -15739, -12592, -6012,  1019, -2895, -13377, -19635,
  -26671, -25419, -25946, -22990, -23451, -20962, -21109, -19385, -12432, -12171,
  -11836, -14614, -17251, -22789, -24554, -24088, -24833, -25931, -25286, -24894,
  -24200, -17195, -12715, -13498, -17888, -21429, -23261, -20629, -15991, -10505,
  -9562, -12668, -16873, -19174, -15618, -15030, -14645, -17885, -19999, -18719,
  -15050, -12077, -12257, -12591, -13013, -6333,  2569,  6968,  2847, -4633,
  -11594, -14078, -12091, -9467, -6337, -4264, -1824,   233,  3392,  6176,
  9245,  9536, 10682, 10983,  6598,  1664, -3114, -3021, -1943,  -271,
  1111,  5424, 14186, 17627, 19305, 14979,  7879,  2767,  6650, 16990,
  19626, 18343,  8756,  4430,  4749, 13114, 16371, 15165, 12372,  7627,
  9706, 12239, 14218, 11578, 10759, 13797, 21393, 25702, 28810, -3433,
  -22188, -14044, -17414, -21365, -26524, -27195, -28486, -26682, -26543, -25730,
  -24936, -23154, -19045, -18398, -19154, -19701, -22855, -22034, -21920, -21143,
  -21236, -20721, -19998, -19677, -19321, -19915, -19348, -18858, -18223, -17957,
  -17014, -17972, -17576, -17003, -16432, -11632, -8407, -9016, -9835, -14256,
  -15628, -16573, -16026, -15425, -12545, -8173, -5507, -3233, -3362,   194,
  2938,  9851, 11219,  7065,   409, -2897,  -243,  1016
};
// Converted by AKWF2Teensy from AKWF_snippet_0004.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave4[257] = {
  -2375, 14199, 14887, 10872,  7574,  6332,  9717, 13042, 17901,
  19781, 25384, 28871, 32443, 29227, 26211, 25189, 27834, 27062, 23665,
  22381, 19835, 18866, 20963, 23463, 25098, 25420, 21066, 16699, 13109,
  13613, 20160, 24793, 22196, 21139, 20053, 17775, 12962,  7782,  5589,
  8188, 12127, 12721,  9379,  5972,  9541, 17529, 17707,  9332,  -975,
  -9294, -12926, -15770, -16080, -16211, -11156, -6497, -3247, -6472, -14140,
  -16109, -17292, -18910, -22727, -26844, -30645, -30450, -29704, -25430, -22050,
  -22060, -22164, -25249, -27170, -26922, -25896, -25313, -23240, -23226, -22667,
  -22642, -22487, -22080, -22412, -20659, -21013, -19203, -18279, -18167, -13798,
  -5672,   293, -2814, -11328, -15599, -16906, -17045, -15878, -14128, -9145,
  -3875,  1732,  3477,  1263,  1603,  4838,  4534,  2924,  4094,  2366,
  2229,  6802,  9374, 11304, 13420, 10693,  2209, -5922, -7851, -3239,
  4660,  8581,  6293,  2369,  3427, 12486, 19488, 13649,  2180, -3732,
  -4429, -4078, -5518, -7651, -6544,  2151, 10802, 11176,  2553, -6437,
  -3367,  3112,  5234,  1823, -4068, -7813, -4887,   803,  4082,  4452,
  1785,  -168,  -454,  -892,   636,  5371,  7357,  8260,  9123,  7997,
  2780, -4591, -8163, -5103,  2529,  8667,  5116, -1603, -2843,  5437,
  14232, 10453,   -18, -6089, -5482, -6143, -9203, -12645, -11841, -4918,
  3682,  6698,  2822, -2837,  2468, 11790, 16307, 15292, 11148,  7043,
  7347, 12134, 14420, 14909, 14465, 14908, 13784,  9036,  6041, 12022,
  15967, 17905, 16091, 11426,  4616, -1228, -3962, -4241, -3311,  2192,
  1317,  -930, -5486,    75,  7293,  2857, -3522, -17173, -17663, -22574,
  -19861, -21813, -18010, -14022, -5961,   247,  -710,     2,   259, 13714,
  16997, 20665, 20108, 17287, 12227, 14208,  6447, -1570, -7165, -16758,
  -19301, -23395, -20675, -16032, -14106, -15986, -16483, -14507, -17256, -20628,
  -21833, -22410, -16665, -8892, -7569, -7427, -6757, -2375
};
// Converted by AKWF2Teensy from AKWF_snippet_0005.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257

const int16_t wave5[257] = {
  128,  2377,  3553,  8132, 15859, 19741, 20740, 15842, 12140,
  16301, 22333, 22691, 20192, 16127, 15526, 20096, 24376, 26298, 27277,
  25342, 25325, 25308, 25244, 27658, 29967, 31296, 29699, 28555, 27136,
  25352, 23534, 19017, 19557, 25919, 25545, 25270, 25034, 24333, 23616,
  23316, 23749, 22594, 21022, 14504, 16584, 20412, 17197, 16840, 15508,
  13240,  8367,  4001,  2833,  6115,  9140,  8748,  5368,  3205,  7881,
  14362, 12538,  4448, -5048, -11728, -14561, -16771, -17049, -16434, -11343,
  -7679, -4899, -9674, -15887, -17306, -18143, -19789, -23867, -27543, -30024,
  -29745, -28942, -24347, -22108, -22179, -22990, -25592, -27088, -26467, -25569,
  -25004, -23220, -23417, -22698, -22881, -22515, -22460, -22287, -20960, -21181,
  -19332, -18956, -18267, -13518, -5841, -1815, -6387, -13847, -16642, -17726,
  -17535, -16550, -14409, -9465, -4769,    -9,   639, -1269,  -306,  2292,
  1726,  -680, -1764, -1438, -1785,  1363,  7864, 14891, 20099, 19507,
  16604, 13745, 14704, 20772, 26028, 25815, 22388, 24536, 27818, 27784,
  26601, 24974, 26131, 28264, 30113, 28724, 28291, 27501, 26695, 26578,
  25845, 25039, 24741, 23544, 20628, 20380, 21587, 22983, 22876, 22400,
  22742, 21952, 20775, 20288, 20470, 19700, 17751, 16356, 13731, 11376,
  11822, 16419, 18514, 18606, 14356,  7271,  3761,  4916,  9077,  6200,
  399, -3948, -3134, -2255, -3932, -7316, -10271, -8670, -8083, -8611,
  -12589, -14698, -11164, -3624, -4143, -11708, -17019, -22681, -25642, -27288,
  -27122, -24019, -21675, -22218, -21614, -20763, -21624, -18815, -20589, -27813,
  -30107, -31940, -30670, -30061, -29108, -28418, -25335, -21440, -22149, -22374,
  -25400, -25818, -24878, -24596, -24294, -23746, -22916, -22688, -22836, -22832,
  -21762, -21533, -20644, -20422, -21172, -20054, -20002, -15086, -11229, -11598,
  -13851, -18130, -19175, -19401, -18666, -15866, -10988, -7420, -6046, -4537,
  -921,  5230,  9894,  5519, -2021, -4966, -2483,   128
};
// Converted by AKWF2Teensy from AKWF_snippet_0007.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave6[257] = {
  169,  5290,  9724, 12433, 15117, 18280, 20033, 19633, 18540,
  18581, 19590, 20781, 21750, 22559, 23541, 24049, 23840, 24015, 25744,
  27533, 26780, 23289, 19035, 15521, 12142,  8922,  6047,  3440,  1283,
  -740, -2143, -1634,  1442,  5950,  9364, 11245, 13536, 15707, 16058,
  14449, 13073, 13971, 15632, 15960, 14889, 14107, 14616, 15603, 15975,
  16741, 18875, 19920, 18134, 14032, 10186,  6982,  4067,   285, -3519,
  -6787, -9229, -11073, -11285, -9133, -4866, -1328,   400,  2476,  5417,
  7221,  6000,  3594,  1602,  1383,   716, -1744, -4473, -5185, -6622,
  -7248, -9340, -8344, -7824, -7197, -11289, -14957, -19753, -21936, -25845,
  -27449, -30787, -30691,   -69,  2648, -1276,  -559, -2376,   -22,  2350,
  7913, 10176, 12550, 12814, 14375, 13261, 11682,  9754, 10512, 11249,
  12608, 12547, 12783, 13071, 13804, 14222, 14840, 16430, 17096, 15285,
  11108,  6685,  2862,  -603, -4835, -8294, -10788, -12124, -12677, -12361,
  -10705, -7106, -3407,  -944,   -55,   342,   529, -1843, -7374, -10997,
  -11794, -11626, -11198, -11264, -11852, -12866, -13709, -13980, -13147, -11215,
  -10596, -13011, -17177, -20659, -23096, -25162, -26950, -28263, -29052, -29734,
  -30043, -28956, -25770, -20640, -15477, -12107, -9126, -6127, -4254, -4357,
  -5158, -4088, -1327,  1246,  2556,  3741,  6298,  9290, 11947, 13912,
  16355, 19128, 19305, 16283, 12312,  9093,  5968,  2601, -1313, -4963,
  -7278, -8784, -9592, -9032, -7201, -4387, -2759, -3637, -3507, -2568,
  -3634, -6777, -9708, -10550, -9917, -8915, -8402, -7957, -7396, -7430,
  -7759, -7038, -5048, -3588, -4633, -8086, -11865, -14708, -17165, -19530,
  -21191, -22105, -23012, -23932, -23998, -21705, -17171, -11955, -7909, -5292,
  -2467,  -268,  -208, -1679, -2009,  -129,  2164,  3157,  3460,  4472,
  5874,  6962,  8113, 10245, 12746, 13788, 11843,  7862,  4485,  2230,
  -28, -1840, -3313, -4524, -5155, -5099, -3454,   169
};
// Converted by AKWF2Teensy from AKWF_snippet_0008.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257

const int16_t wave7[257] = {
  1801,  3031,  5679, 12616, 25233, 31808, 30641, 28498, 19182,
  4200, -3642, -3964, -3344, -2906, -2795,  4641,  9877,  9534, 11026,
  9893,  2650, -8757, -15832, -22454, -20833, -10463,  3792, 14262, 15231,
  12048,  3143, -6896, -12391, -14234, -13479, -11838, -10251, -8943, -5890,
  264,  2553,  1878, -5685, -14123, -17145, -13226, -4016,  5690, 15848,
  14675,  6803, -1799, -6972, -9963, -11736, -10604, -12756, -16487, -16065,
  -6471,  6181, 14410, 17142, 19577, 13970,  1956, -5621, -11609, -13367,
  -16994, -11791,  -422,  7100, 11584, 10140,  9842,  5140, -1359, -7668,
  -10716, -16564, -16705, -11250, -4911,  1543,  3897,  4368,   570, -4067,
  -8351, -11970, -14787, -10105, -8524, -5070, -5223, -8110, -9578, -7206,
  6076, 16031, 17624, 18517, 11113, -4663, -9939, -13329, -13066, -7023,
  -2554,  -794, -1172, -2794,  -617,  5836, 12911, 18058, 19813, 16858,
  6710, -2592, -4619, -2322,  4046, 11013, 10805,  7289,  5775,  2499,
  6582, 10049,  7062,  2920, -5714, -5236, -7138,   562, 17562, 23336,
  24643, 10521, -2837, -4417, -12550, -14745, -9420, -2843, -3096, -3595,
  5230,  7391,  7358, 10193,  6011, -2436, -6375, -5099, -4225, -4438,
  -7019, -9391, -6154, -6635, -4781, -4903, -6024, -11519, -16792, -18460,
  -15280, -7797,  3126, 14304, 15203, 12441,  1901, -5244, -11780, -19235,
  -20800, -16868, -9453,   904,  8574, 13122, 14235,  9004,  4297, -4440,
  -12919, -14277, -9169, -1552, 12565, 18763, 19904, 19216, 13519,  6661,
  -5587, -14767, -20577, -21611, -21293, -10523, -5045,  1012,  6184,  9329,
  9596,  2141, -6638, -21169, -23600, -23121, -20963, -13631, -3373,  1800,
  4056,  4628,  2333, -2736, -8309, -13367, -15723, -14754, -8444,  3954,
  13197, 19261, 18581, 12777,  5494,   304,  1719,  8043,  9527,  7788,
  4155,  3669,  1903,   577,  4500,  2929,  1338,  9957, 20961, 24239,
  25152, 24198, 14299, -1166, -4243, -2311, -1215,  1801
};
// Converted by AKWF2Teensy from AKWF_snippet_0010.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave8[257] = {
  3871,  8138, 19821, 28200, 24492, 20720, 25141, 23811, 15911,
  22681, 28682, 31466, 30366, 26945, 25461, 22263, 21563, 20415, 26082,
  25832, 24697, 23950, 23432, 21751, 19121, 20470, 18489, 15731, 12715,
  13819, 18397, 18672,  8463,  4637,  6458,   436, -7125, -8252, -11072,
  -4638,   821, -5508, -14300, -7320, -1199, -12779, -16711, -20318, -19252,
  -25197, -24140, -26333, -22958, -17917, -25849, -20161, -26630, -20065, -20680,
  -16223,  4527,  3416,  5811,   535, -13346, -21979, -16925,  -477,  8849,
  10970,  4770,  4319, 13682, 12511, 10648, 10023,  7190, 11860, 10498,
  6667,  5376,  2106,  3913,  4985,  1717, -4690, -9950, -14215, -9804,
  -17928, -22403, -20326, -11095,   961,  1578, 15869, 19109, 20430,  6375,
  -12674, -19099, -23102, -20390, -14558, -9400, -6611, -11067, -17858, -19966,
  -16562, -11061, -8047, -2310,  6743, 17453, 20613, 22602, 15372, 10805,
  11741, 11158, 18509, 27164, 26637, 22396, 19529, 19082, 16233,  6639,
  7146, 14688, 20368, 17878,  8114,  2413,  2719,  -503, -5062, -3412,
  -1030,  5198,  -202, -6509, -11363, -19031, -15654, -16076, -19621, -17098,
  -13314, -15118, -18653, -25910, -27063, -28434, -24825, -24156, -19273, -17160,
  -22280, -19811, -20779, -20328, -18348, -14175, -9452, -6678, -10756, -7139,
  -7282, -9699, -10445, -7948,   474,  6991,  8079, 14904, 17543, 19346,
  15847, 12627, 17762, 19573, 24735, 25632, 30550, 30826, 29751, 27167,
  27658, 26364, 26446, 19864, 19730, 23517, 22710, 22724, 21424, 21314,
  20982, 16872,  7866,  5447,  6897, 15916, 15312, 13900, 12731,  7825,
  1880, -7638, -13801, -13189, -11035, -6441, -9569, -10586, -11130, -14891,
  -19101, -22160, -26712, -26939, -21477, -25887, -26601, -28828, -27575, -25297,
  -24641, -25561, -17166, -13309, -16967, -21419, -23198, -21343, -22012, -20521,
  -20209, -15069, -11157, -12549, -16185, -18293, -18702, -17781, -15098, -5536,
  3945,  5414,  5349,  4740,  4914,  2993,   878,  3871
};
// Converted by AKWF2Teensy from AKWF_snippet_0011.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave9[257] = {
  540,  2899,  5337,  7286, 10521, 13929, 19931, 20458, 22014,
  20037, 18214, 16562, 16576, 19172, 18798, 19624, 14394, 11691,  9057,
  6593,  4825,  1785,  2585,  2910,  3603,  2007,  1060,  -322, -1786,
  -1437, -1681,  1869,  2607,  4264,  3850,  3113,   662,   842,  -119,
  2119,  2825,  3315,  4616,  3982,  6706,  2298,  2507, -1740, -1778,
  -2922, -1670,   453,  5071, 10022, 12223, 10308,  9520, 10893, 10462,
  14967, 12874, 16005, 15870, 14595, 14885, 10663, 13345, 11504, 12755,
  11128,  6423,  4498, -3159, -4961, -11184, -10729, -12747, -11993, -12382,
  -14176, -15163, -13766, -19884, -22488, -26343, -25927, -21996, -22045, -15032,
  -16534, -8670, -12563, -9760, -9264, -5026,   213,  3477,  6416,  7515,
  9849, 10830, 12847,  7544,  1891, -5119, -9752, -15229, -18272, -16760,
  -12882, -13260, -16127, -20887, -21483, -22174, -20780, -20991, -17029, -10397,
  -6205, -1662,    72,   894,   140, -2532, -3768,  -138,  2447,  7756,
  8998, 10668, 11039,  8347,  7748,  7463,  8802,  9276,  9462, 10594,
  14061, 13781, 11636, 10221,  8394, 10619, 11396, 13904, 16517, 17993,
  19511, 15655, 13501, 12290, 10536, 10916, 10150,  9839, 11737, 10847,
  10235,  6001,  2902, -2409, -3348, -1555,   668,  2465,   687,   462,
  -2441, -1205, -3593, -4065, -5428, -1038, -1459,  5229,  5646,  7788,
  8543,  3761,  4675,  3133,  7235,  5920,  8461,  4879, 10316,  4993,
  9242,  -716, -2086, -3302, -5173,   190, -2439,  2280, -1798,  2094,
  -5043, -2538, -6036, -1283, -2900,  8564, 16287, 19585, 17190,  9474,
  6869, -2249, -2208, -6471,  -663, -1152, -4003, -14825, -20594, -24568,
  -27814, -31844, -32550, -30918, -25482, -21814, -20172, -19985, -23691, -25640,
  -27652, -21111, -13854, -5843, -2552,   959,  3119,  1774, -4141, -8689,
  -9135, -6465, -4964, -3117, -1271,  -682, -2776, -9289, -13653, -16434,
  -14444, -11919, -8538, -4725, -1167, -1088,  -833,   540
};
// Converted by AKWF2Teensy from AKWF_snippet_0012.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave10[257] = {
  297,  2138,  4111,  5786,  8508,  9769, 10738, 11486, 13648,
  16190, 17237, 18531, 18682, 19207, 19072, 19259, 19464, 20110, 20304,
  20294, 20312, 19750, 19479, 19509, 19422, 19287, 18855, 19136, 18840,
  18508, 18008, 18423, 18511, 17333, 17313, 17069, 17091, 17102, 16886,
  16871, 16835, 15752, 16331, 15926, 16083, 15003, 15428, 14824, 15161,
  14664, 14896, 15901, 16573, 12769, 10527, 12631, 12946, 12497, 12592,
  14016, 11963, 12748,  4565, 13962, 11082,   747, 15112, 19367, -2547,
  3461, 12178, -2133,  5452,  2270,   556,  1200, -3987, -5728, -2147,
  -3341,   822, -8243, -11158, -2687, -9236, -18314, -2204, -7242, -18320,
  -6606, -19840, -12532, -19781, -20569, -22772, -17433, -17327, -25119, -25072,
  -26876, -19848, -30348, -23765, -22644, -26364, -32768, -21823, -25765, -23801,
  -5993, -8007, -3422, -3555,  -745,  -417,   739,   802,  1867,  1780,
  2028,  1956,  2606,  3230,  3156,  3326,  3882,  4759,  5221,  5898,
  6523,  7859,  8275,  8111,  8496,  9652,  9565,  9827, 10004, 10902,
  11015, 10942, 10257, 10259,  9878, 10081,  9930,  9681,  9477,  8768,
  8751,  8291,  7828,  7211,  6492,  5353,  4998,  3789,  3072,  2155,
  1310,   286,  -821, -1201, -2001, -3130, -4268, -4633, -5097, -5573,
  -6379, -6571, -7821, -9251, -10423, -11599, -12204, -13184, -13802, -14073,
  -13802, -14469, -14820, -14665, -15139, -15561, -15684, -15314, -13838, -11970,
  -9592, -6460, -4141, -1799,  -315,  1012,  3376,  5469,  8447, 12082,
  14626, 16941, 19072, 20642, 21875, 22465, 22384, 21071, 19185, 15755,
  11571,  6587,   202, -4897, -8607, -11825, -15046, -17566, -19773, -20802,
  -21462, -22173, -23111, -23842, -23874, -24405, -24374, -24346, -24280, -24211,
  -23719, -23334, -23341, -22437, -21863, -21321, -20229, -19600, -18882, -17783,
  -16764, -15707, -15011, -15059, -14156, -13628, -12847, -11615, -10966, -10137,
  -8887, -8478, -7888, -5889, -3801, -2053, -1046,   297
};
// Converted by AKWF2Teensy from AKWF_snippet_0013.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave11[257] = {
  -807,  3424,  1861,  1240,  3748,  2482,  4618,  5156,  8283,
  7758, 10477, 11601, 11948, 11309, 11597, 16779,  9610, 15440, 16394,
  15751, 20521, 19929, 20780, 26606, 24592, 20787, 27492, 28304, 29551,
  29641, 30895, 31929, 30321, 32484, 30971, 31893, 31871, 30971, 30256,
  28979, 29522, 28959, 28004, 28255, 27094, 26698, 26378, 25820, 26853,
  25656, 25251, 23995, 24818, 23746, 23790, 23385, 23868, 22813, 22942,
  22291, 21289, 21205, 20434, 20573, 19350, 18554, 15546, 17852, 16298,
  17076, 15250, 13581, 16029, 16499, 19585, 19159, 12316, 11676, 11205,
  9945, 13931,  6813,   722,     1, -4240, -4307, -3814, -5602, -8406,
  -9959, -12502, -14385, -14973, -19186, -14376, -18842, -20779, -21212, -24271,
  -22891, -22077, -23329, -23976, -23781, -25292, -24359, -25750, -22873, -24564,
  -23262, -23729, -22812, -22321, -21857, -21642, -20977, -19446, -20890, -19135,
  -20213, -17510, -18464, -19789, -18602, -17693, -18451, -18272, -17803, -18698,
  -18452, -17513, -16755, -17489, -17231, -16948, -16459, -16484, -16373, -15627,
  -15702, -15309, -15533, -15209, -13982, -14485, -13274, -13915, -12463, -13859,
  -9999, -9174, -7368, -4720, -3039,    98,   -21,  2439,  2074,  5443,
  5495,  7397,  5329,  5866,  6985,  8094,  9570, 12194, 10414, 13258,
  12090, 14804, 15663,  8099, 10668,  6984,  8167,  8504,  6700,  4939,
  7404,  4941,  5961,  4692,  3515,  3933,  3239,  2741,   298,  1254,
  1384,  2003,  1918,  3504,  3836,  1849,  2561,   848,  2727,   566,
  -1551,   498, -4778, -2818, -2423, -1720, -2853, -7056, -5905, -3129,
  -12019, -11211, -11706, -15615, -14613, -14733, -16298, -18067, -19312, -22727,
  -16792, -21360, -21547, -19282, -20515, -19704, -20361, -19619, -18931, -18456,
  -18308, -17243, -16891, -16713, -15862, -15506, -15411, -15215, -14184, -14378,
  -14593, -13535, -12858, -12207, -12076, -9567, -7751, -8656, -6591, -6075,
  -1520, -3252, -3229,  -147, -3746,  1542,   279,  -807
};
// Converted by AKWF2Teensy from AKWF_snippet_0014.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave12[257] = {
  6537, 17836, 16747, 21117, 24555, 23900, 25073, 32095, 24756,
  24488, 23599, 14632, 19773, 15751, 14521, 14954,  7941,  9485,  8144,
  10021, 10856, 12990, 18096, 18896, 23759, 26127, 22765, 19870, 12652,
  6407,  5105, -3175, -11599, -18440, -22838, -24874, -26714, -21471, -17805,
  -16140, -14732, -13726, -8512, -5977, -2736, -3407, -2627,  -782, -2630,
  -2489, -1421,  1274,  4903,  7528,  9326, 11141, 10546,  8367,  5447,
  5452,  1434, -6046, -15136, -21836, -25175, -27036, -27206, -27697, -23876,
  -21973, -16420, -9301, -5962,  -938,  4232,  5484,  5922,  9237,  7277,
  3105,  3548,  3907,  6896,  8866,  7656,  7145,  7691,  6165,  4217,
  6219,  3195, -3149, -8543, -12802, -15700, -16381, -15602, -16572, -17772,
  -16609, -14508, -9315, -6053, -2324,  1948,  2039,  4456,  2970,  2581,
  4298,  1883,  2409,  1206,   451,   300, -2010,  2824,  6471,  8587,
  9799,  9872,  9316,  7230,  8634,  7920,  3774,  -774, -6208, -5788,
  -3913, -3702,  -506,  -625,  -299,  1559,  4919,  9126, 10151, 12327,
  14086, 12158, 14415, 13631,  9982, 10987,  8570,  8487,  9632,  6834,
  8002,  7141,  7272, 10082,  8195,  7182,  3600,  -308, -1169, -4002,
  -6905, -7862, -11831, -12629, -10019, -6148, -1803,   374,  2689,  1971,
  4898,  7138,  7272,  7422,  1262,  1710,  1444, -1337,  4674,  3271,
  2847,  3646,  1017,  5829,  8814, 11365, 17694, 21307, 24633, 27198,
  25464, 22881, 15674, 10199,  7615,  -610, -10829, -20667, -25341, -26528,
  -27351, -25390, -23995, -23002, -22207, -21244, -18026, -13765, -12244, -12755,
  -9217, -6519, -6926, -5633, -4333, -2805,  1549,  6042,  8749, 10113,
  10078,  9606,  8749,  7706,  4332, -3006, -10909, -18372, -23372, -25324,
  -27481, -29206, -28620, -26773, -24346, -21084, -18329, -15347, -10144, -7885,
  -4515, -2676, -4381, -4934, -5542, -3814,  -565,   283,   417,  1056,
  1455,  2626,  4368,  6151,  1821,   613, -3256,  6537
};
// Converted by AKWF2Teensy from AKWF_snippet_0015.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257

const int16_t wave13[257] = {
  1680,  7319,  5738,  8421,  9828, 10958,  9943, 10133, 10276,
  11207,  6282,  4523,  9057, 15428, 22081, 20268, 21903, 27996, 26477,
  26178, 23831, 22275, 20522, 18450, 15339, 14820, 13916,  5607,   593,
  333,  4238,  8787,  9552, 10094, 13805, 18346, 19114, 14664, 16685,
  17154, 13586,  8006,  5015,  8827, 13274,  9382,  3203,   219,  2521,
  5836,  3632,  1852,  3716,  9502,  7259,  3065,  7604,  6797,  2555,
  6064,  2283, -1513, -1612, -4562, -8630, -10252, -10586, -15098, -13243,
  -9859, -8283, -1292, -1750, -1749,  3495,  9837, 10723,  2753,  3528,
  4425,  4669,  4958,  1166,  -337,  5734,  9320,  3712,    42,   567,
  3253,  8631, 13034, 17055, 15898, 13599,  9890,  4802, 11330, 17756,
  15296,  6922,  3525, -1146, -4738, -5053,   707,  5532,  9528, 17962,
  15269, 11810, 16005, 19386, 21052, 23386, 19856, 20128, 20479, 20490,
  18006, 17239, 16905, 16219, 15789, 15816, 18303, 19308, 19749, 20908,
  23671, 20781, 21532, 19004, 14256, 10772,  7475,  3524,  1381,   725,
  -2884, -9979, -14194, -16968, -20242, -17171, -10813, -8175, -8024, -8747,
  -10388, -11560, -9986, -12218, -17609, -9739, -13398, -18124, -16837, -24621,
  -28073, -27135, -25724, -28434, -32240, -26136, -18209, -16743, -19150, -14146,
  -11058, -14386, -13476, -12772, -11053, -8893, -8956, -13210, -14723, -16351,
  -20010, -16718, -6916,  1917,  2634,  4119,  7959,  8848, 11516, 10439,
  12595,   723, -16390, -13732, -7919, -9975, -9294, -3590, -1501, -1331,
  212,  -502, -3166,   118, -5112, -14918, -12454, -14433, -20921, -20470,
  -27510, -28633, -24521, -22679, -21414, -14336, -16306, -19083, -15472, -16759,
  -13289, -12337, -12144, -18625, -15957, -16653, -18675, -11790, -9972, -10011,
  -11925, -14337, -14328, -12633, -9765, -1920,  2848, -1520,  1311,  6659,
  1121, -3682, -1571, -2263, -6426, -6503, -9145, -12841, -14079, -17791,
  -18602, -11869, -9072, -7986, -5003,  1829, -1162,  1680
};
// Converted by AKWF2Teensy from AKWF_snippet_0017.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave14[257] = {
  256, 11049, 10400, 10005, 15514, 18317, 16244, 20465, 22342,
  18563, 20476, 24157, 21885, 19501, 19567, 16811, 13667, 13040, 11325,
  12292,  9640, 10433, 18797, 18240, 17050, 17033, 18760, 13318, 15378,
  13122, 12093, 15818, 12737,  3843,  2614,  4413, -10217, -14646, -17442,
  -21371, -24834, -22597, -21008, -15874, -13369, -12950, -7853, -7688, -9130,
  -7458, -8555, -5049, -4433, -2259,  5162,  4139,  5880,  -686,  3125,
  -4211, -6303,  -862, -4117,   342, 10050, 16049, 18241, 23428, 23841,
  18496, 17084, 21449, 18079, 21956, 19060, 18366, 19859, 16551, 14581,
  9433,  6483,  4055,  5511,  6165,  4712,  9473,  9339, 10321,  4299,
  4680, -1946, -15784, -17330, -21016, -19696, -21376, -10589, -11850, -16445,
  -24618, -28530, -29390, -32767, -27472, -22925, -18451, -22406, -16924, -18111,
  -13907, -6760, -14032, -8425, -1534,  -563,  1877,  2618,  4474, 11324,
  -897, -9756, -2998, -3778, -6880, -16457, -7566,  -542, -6980,  -478,
  12647,  8551,   670,  6416,  9884, 17809, 21441, 17156,  8325, 10748,
  17791, 20551, 22937, 18502, 17991, 17081, 14300, 12798, 12283,  7805,
  11926, 17856, 18755, 21263, 21044, 20803, 19332, 19134, 18239, 18025,
  16650, 15010, 14081, 13459, 11727,  5999, -5097, -7645, -12850, -23167,
  -26330, -28684, -26683, -24999, -22923, -21742, -20577, -21385, -18420, -18904,
  -19519, -16943, -17790, -13805, -11218, -13171, -15274, -15743, -17929, -19625,
  -17523, -18494, -15738, -8954, -9675,  2121,  7745,  8136, 14111, 15632,
  17393, 18784, 21188, 19639, 20584, 19101, 17254, 14529, 11830,  8289,
  3039,   984, -1452, -2245,  -355,   315,  3455,  6784,  4696,  4858,
  7492,  4388,  3445,  3306,  2959,  5978,  4629, -3121, -5972, -7096,
  -22480, -23391, -18007, -24021, -25398, -23961, -26640, -23368, -20681, -21377,
  -18557, -18750, -18317, -16300, -15589, -14987, -13077, -13884, -14483, -14478,
  -16072, -16498, -14296, -13226, -8332, -4283, -6788,   256
};
// Converted by AKWF2Teensy from AKWF_snippet_0018.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave15[257] = {
  320,  5008, 12331, 20030, 26507, 31108, 32743, 30354, 24745,
  17829, 11087,  5695,  2928,  3171,  5540,  9159, 13146, 16097, 16893,
  15532, 12154,  6953,  1203, -3396, -6136, -6896, -5338, -1791,  2350,
  5775,  8005,  8677,  7509,  4487,    80, -5111, -9899, -13398, -15119,
  -15193, -13676, -10932, -7632, -4747, -3103, -3034, -4486, -7195, -10594,
  -13619, -15698, -16688, -16485, -14668, -12053, -9644, -8014, -6845, -7029,
  -8846, -12099, -15415, -18547, -20626, -21402, -20067, -17382, -13833, -10715,
  -8072, -6427, -5946, -7111, -9245, -12475, -16325, -6128,   202,   135,
  5513, 11474, 17964, 21451, 22926, 22046, 19519, 14992, 10623,  7344,
  5749,  5602,  7033,  9173, 11006, 11986, 12172, 12010, 11701, 11352,
  10637,  9623,  8037,  5967,  3709,  2194,  1607,  2203,  3911,  6445,
  8796, 10507, 11038,  9770,  6454,  1927, -2975, -7481, -10415, -10752,
  -8544, -4636,   249,  5003,  8322,  9119,  6950,  2049, -4415, -10836,
  -16004, -18816, -18461, -15160, -10198, -4790,    -5,  2734,  2344, -1326,
  -7391, -14259, -19756, -22549, -22090, -18006, -10586, -2148,  4106,  6270,
  3713, -2989, -11682, -19080, -22936, -22128, -16563, -7798,  1248,  8182,
  11933, 11840,  8264,  2767, -2916, -7679, -10319, -9976, -6920, -1741,
  5134, 12493, 18173, 20671, 19303, 14163,  6504, -1225, -6848, -8967,
  -6697,  -463,  7954, 16410, 23310, 26877, 26049, 21339, 14384,  6765,
  -159, -4998, -6944, -5842, -2462,  1889,  5844,  8518,  9137,  7265,
  3408, -1328, -5838, -9141, -10462, -10030, -8661, -6905, -5140, -4007,
  -3824, -4485, -6112, -8810, -12110, -15463, -18795, -21644, -23065, -22452,
  -19854, -15634, -10626, -5919, -2087,   468,  1034,  -744, -4300, -8740,
  -13232, -16762, -18258, -16926, -12335, -5151,  2774,  9465, 13809, 14836,
  12180,  7168,  1904, -2178, -4003, -2206,  3178, 10459, 17751, 23887,
  27356, 26839, 22500, 15836,  8695,  2746,  -392,   320
};
// Converted by AKWF2Teensy from AKWF_snippet_0019.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave16[257] = {
  809,  7568, 14976, 16020, 13739, 15449, 16432, 11179,  4663,
  4746,  7759,  9750, 16754, 23069, 21322, 19561, 20031, 18933, 17846,
  16649, 17355, 20004, 19510, 20775, 26871, 27078, 20128, 20373, 29170,
  32751, 29773, 25681, 19575, 17825, 22509, 23365, 22755, 24070, 23572,
  26510, 30444, 29962, 30581, 24913, 11413,  8406, 12860, 12156, 11560,
  12015,  9651,  8287,  8759,  9383, 11145, 13561, 12405,  8660,  7251,
  6670,  4846,  5934,  6438,  2019, -2176, -1746,   672,  2687,  3227,
  2362,  1775,  2320,  1415, -3026, -7076, -7770, -4316, -3079, -6217,
  -7678, -3564, -4022, -2765, -7736, -16047, -13477, -13178, -12665, -13965,
  -15146, -16386, -18476, -20538, -21238, -20650, -19344, -16684, -14221, -13187,
  -12886, -11907, -12340, -13692, -15016, -16045, -16392, -15502, -14456, -11401,
  -7015, -4427, -3013,  -955,  -330, -1672, -3408, -5243, -7047, -7649,
  -7759, -7990, -5376,  -208,  3520,  6433,  9774, 12190, 14131, 13649,
  11372, 11818, 11649,  8435,  7013,  6611,  6553,  8646, 10688, 13475,
  17896, 21875, 26125, 26917, 22972, 20267, 16599, 11584,  9549,  4612,
  203,  6848, 14821, 16741, 19588, 19901, 13419,  7937,  4515,  -741,
  -3464, -2850, -4322, -4348,   815,  3240,  1903,  3503,  1616, -6847,
  -9419, -6874, -9446, -11815, -10427, -11351, -11089, -7533, -8208, -12142,
  -13493, -10585, -6244, -8792, -14995, -14553, -14124, -17191, -16578, -15647,
  -15616, -15048, -16584, -12672, -4347, -5355, -11454, -15101, -18604, -18856,
  -15261, -13504, -16437, -17962, -12027, -9905, -15314, -11861, -5203, -8734,
  -11788, -11908, -14472, -15554, -16354, -16334, -13259, -13980, -16216, -13514,
  -12184, -15365, -17370, -14757, -9017, -5599, -7036, -8176, -8139, -12471,
  -17616, -16894, -15503, -14993, -9312, -2797, -2319, -7007, -11719, -10654,
  -8594, -12402, -17035, -20542, -21272, -11049,  2423,  5500,  3791,  4350,
  -210, -9481, -9022, -3168, -8208, -13962, -7461,   809
};
// Converted by AKWF2Teensy from AKWF_snippet_0020.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave17[257] = {
  639,  3101,  4052,  3954,  4426,  5570,  6864,  7856,  8763,
  9688,  9734,  8945,  8848,  9128,  7932,  6913,  7678,  8118,  8101,
  9302, 10248, 10751, 12666, 14437, 14501, 14576, 15351, 15815, 15869,
  15608, 15185, 14696, 14959, 15949, 15988, 14560, 14100, 14657, 15411,
  15575, 15507, 16848, 18930, 19104, 19279, 19843, 19231, 16952, 12982,
  11448, 11428,  6644,  3752,  7918,  6454,  -432, -5264, -8723, -11064,
  -9900, -9742, -9922, -12659, -13516, -13148, -12166, -13203, -7181,  6955,
  6161,  6354,  6310,  5885,  7852,  7853,  7775,  8756,  9227,  8876,
  10974, 11847, 11493, 11306, 11314,  9961,  9218,  8694,  7796,  6473,
  5714,  4250,  2615,  1813,   676, -1283, -2291, -2430, -2347, -1239,
  555,  1690,   964,  -333,  -328,   225,   279,  1099,  2397,  3686,
  4941,  5737,  6128,  6665,  7166,  8080,  9090,  9231,  8775,  8769,
  8915,  8481,  8745, 10386, 11035, 10673, 12047, 14466, 16252, 17562,
  18349, 19130, 20054, 19916, 19393, 19306, 18912, 18550, 18334, 17422,
  16560, 15792, 14044, 12355, 11191,  9494,  8416,  8336,  7058,  5083,
  4469,  4472,  4055,  3376,  1565, -1366, -3139, -4407, -8153, -12235,
  -14105, -16479, -19730, -21542, -23257, -25785, -27540, -28712, -29791, -30568,
  -31867, -32768, -31335, -29769, -30574, -30390, -28445, -28052, -28135, -26975,
  -25521, -24083, -23831, -24197, -23340, -22906, -22594, -21061, -20894, -21337,
  -19698, -18432, -19061, -19176, -17929, -17486, -18106, -17308, -15942, -15864,
  -15315, -13275, -10718, -8612, -7095, -4561, -1607,  -324,    23,   212,
  986,  2520,  2445,  2128,  3861,  4061,  2205,  2230,  2789,  1129,
  -409, -1010, -2811, -4455, -5016, -6534, -7203, -5823, -5932, -7380,
  -7693, -7582, -7713, -7892, -7820, -7635, -7834, -7225, -6363, -6850,
  -6975, -6446, -6863, -7897, -9048, -9265, -8369, -7527, -5933, -4540,
  -4624, -3520, -1734, -1155,    62,   749,  -203,   639
};

const int16_t wave18[257] = {
  536,  4340,  3365,  3758,  5031,  3737,  4445,  8192,  8645,
  9332, 15209, 17657, 14145, 11367,  8307,  5910,  8308, 11216, 12339,
  14575, 16321, 14561, 10846,  8254,  6301,  4435,  7094, 14050, 17192,
  15489, 15727, 17655, 15713, 12745, 15754, 20916, 23124, 25021, 26166,
  25245, 26512, 28428, 25533, 20275, 19247, 24108, 30037, 32682, 31903,
  28616, 25235, 24002, 22783, 22281, 23705, 25256, 24853, 22486, 20736,
  24132, 28627, 29764, 28207, 26161, 25928, 28641, 29759, 28081, 25427,
  22285, 20980, 23028, 25452, 22926, 18741, 17663, 19214, 15908, 15136,
  16972, 22263, 10241, -8035, -7230, -6873, -10538, -8875,  1336, -1053,
  -7269, -2174,  4288,  3821,   783, -2882, -4859, -2797, -1645,  -586,
  3324,  5751,  3502,  2511,  2724,  1436, -1134, -2688, -2180,   520,
  3373,  5288,  4927,  4995,  7721,  7541,  2161, -1720, -1948,  -608,
  1459,  2766,  4114,  5405,  3595,  -188, -2526, -4000, -4545, -3476,
  -1498,   409,   222, -2789, -3202,  1440,  3406, -1043, -5518, -6493,
  -4357,  -634, -1484, -6266, -5493, -1347, -2464, -4911, -3698, -3967,
  -8339, -11317, -11181, -13117, -15445, -11378, -5717, -7386, -12858, -15661,
  -16703, -18106, -20193, -21924, -21067, -17370, -12681, -9904, -12324, -17267,
  -20348, -23001, -21889, -14505, -12581, -18553, -21372, -22120, -22017, -17355,
  -17807, -25149, -26919, -24172, -22511, -21728, -23284, -22697, -17330, -14825,
  -17505, -20599, -20486, -19195, -21940, -24990, -23356, -20999, -20543, -21545,
  -19377, -11422, -10771, -20416, -26159, -26444, -19475, -4764, -3418, -14053,
  -13542, -13554, -23096, -20950, -10484, -9847, -10981, -7949, -11039, -14408,
  -6896, -1348, -9428, -17657, -13320, -3949, -3812, -14069, -19407, -13990,
  -9804, -9391, -5731, -2568, -5243, -10364, -11830, -8554, -8022, -11824,
  -8789,  1547,  3263, -3429, -2431,  1172, -7380, -15954, -11593, -4424,
  906,  5067,  2747, -1003, -1293, -3752, -4782,   536
};
// Converted by AKWF2Teensy from AKWF_snippet_0033.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave19[257] = {
  1638,  7266,  4824,  3620,   871,  8673,  8407,  4038,  6767,
  9581,  7692, 10328,  7007,  8334, 12699,  6570,  5330,  8335, 16739,
  13048,  7352,  9103,  9716,  9246,  7067,  5060,  1394, -1503,  1670,
  3160, -1762, -2861, -1225, -3865, -3956, -1452,    47,  -929, -7511,
  -7679, -7069, -5307, -5723, -6567, -9333, -12082, -7545, -5261,   146,
  800, -2454, -4093, -5301, -10709, -7294, -6841, -8242, -4259, -5262,
  -8177, -12495, -12294, -7810, -2762, -3682, -3570, -4172, -3684,  -585,
  3794,   725,  -619,  4310,  1393,  1290, -3393, -2669,  3425,  4309,
  7132,  5587,  6082,  4449,  2845,  2278,  3311,  8174,  6209,  3370,
  10603, 10928,  8087,  9027,  4050,  5437,  5554,  2575,  -392,   265,
  2339,  6527, 11083,  9151,  5075,  3674,  5122,  3730,  1795,  3259,
  5575,   468,   -68,  1257,   -30,  -438, -3660, -4237, -3248, -2453,
  -2132,  -670, -3730, -3690, -3818, -5286, -4431, -2135, -3645, -9800,
  -5994, -6606, -12862, -8243,  1612, -2904, -4738, -4950, -8641, -6241,
  -2820, -1574, -2191, -3881, -4696,  -223, -3272, -6985,  -260,  1514,
  -3107,  1883,  5943,  3921, -4735, -5531, -2801, -2734,  4157,  5150,
  3048,  3898,  1315,  2841,  4617,  2447,  -991, -2386,  3519,  2276,
  4999,  3688,  -790,  4372,  4623,  3775,  5542,  6890,  2645,  4299,
  3207,  4545, 21228, 14768,  7651, -3324, -7538, -8356, -4663, -2073,
  3146,   589, -4891,  6792,  5722,  4196, -15239, -3709, -7489, -26797,
  -28647, -13359,  8042, 11298,  5720, 15227, 18439, -5448, -9453, -6694,
  2028,  7263,  3322,  6601, 11385, 22593, 15504, -10457, -2297,  9319,
  15353,  5222, -4324, -17074, -14880, 17524, 14991,  3269, -13306, -20714,
  -12285, -7010,   436, -10111, -12581, -1763, -7740, -15413, -19803, -23412,
  -5217,  5576, 11085,  6752, -5299,  -944, -9727, -10795, -6996, -7864,
  -4108,  2537, -1546, -3727, -1420,  3147,   713,  1638
};
// Converted by AKWF2Teensy from AKWF_snippet_0034.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave20[257] = {
  -184,  4412, 13728, 28718, 30822, 26122, 20805,  9272,  3623,
  7856, -1041,  1693,  4128, -7354, -7010, -3144,   876,  6233,  1658,
  -750,   636, -2240,  1334,  -242, -10012, -13095, -17472, -26058, -16565,
  -23383, -18953, -17578, -8457,  3646, -2544,  5096, -6170,  3610, 15097,
  11286, 18293, 16417,  2117, -4340, -14151, -13300, -11661, -10036,   194,
  -1764,  1621, 12618, 10527, 19733, 22171, 11276, 13574,  5995,  7542,
  5009,   907,  -122, -8397, -10645, -2306,  4583,  2415, -5498, -14489,
  -24317, -30125, -27851, -21693, -14165, -10671, -8543, -12914, -12138, -4585,
  -6535, -8729, -8458, -9875, -7655, -1004,  5786,  2550, -1517,   -17,
  -5611, -1913,  6485, 11002, 19112, 17060, 19432, 18804, 16355, 20604,
  16554,  9670,  5130,  -401, -5319, -3363, -1670,   432,  4627,  1468,
  1889,  -448, -8931, -5951, -6319, -8178, -3468,  1103,   346,  7805,
  5542,  3700,  4210, -3139,   194, -4180,  4723,  9833,  8705, 13757,
  5260,  8404,  3129, -10643, -1380, -17311, -16033, -4612, -10842,  4453,
  158,  5639, 14738,  8982, 18206, 14301,  6173, 11787,  5537,   370,
  5658,  6857,  7923,  4397,   555, -2198, -5774, -3986, -4900, -4823,
  -9791, -15908, -17731, -13830, -11015, -7673, -1398, -5338, -2766,  -742,
  -661,  7971,  6159,  6006,  3010, -5674, -3226, -10540, -5055, -4980,
  -6544, -2115, -2114,   404,  3141,  8864,  4704,  4987,  4159,  1780,
  8380, 10954,  4769,  3145,  -376,  2661,  3140,  1667,  1142, -4796,
  -4787, -5473, -5282,  -662, -6038, -4411,  1600, -15684, -11648, -14335,
  -13229,  -478, -10403,   646, -5584, -14187,   379, -7685, -3040,  3615,
  -596, 10493, 14819, 23103, 24558, 25951, 25526, 17060,  9555,  5524,
  4455,  1808,  1714, -11277, -13637, -16517, -16238, -3735, -4443,  2274,
  6846,  6572, 15228, 12524, 13505,  4563,   571,  6440,  -878, -4557,
  -10476, -20203, -22923, -18309, -14120, -4729, -2349,  -184
};
// Converted by AKWF2Teensy from AKWF_snippet_0035.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave21[257] = {
  -678,  3356,  6607,  9446, 13836, 19962, 25825, 30765, 29996,
  28160, 18662, 11437,  4770, -2376, -8926, -16135, -21826, -26526, -25733,
  -20912, -10389, -5050,  1123,  7890, 13016, 18036, 20626, 21591, 19357,
  11356,  2345, -3367, -10001, -14323, -17737, -19927, -20456, -19569, -16563,
  -13201, -10151, -8128, -7151, -6765, -6831, -3658,  -657,  2338,  6424,
  6679,  8854, 11270, 14399, 18607, 23676, 27014, 27483, 23462, 15242,
  10388,  3727, -3098, -9038, -15888, -21407, -24240, -22453, -17807, -13071,
  -5748,  1010,  7395, 12744, 18127, 21515, 21444, 17053, 11090,  5528,
  -2191, -7609, -12629, -16282, -18676, -18930, -18515, -15875, -13709, -10791,
  -8015, -6414, -5039, -4993, -3515,   451,  3926,  5453,  7802,  9254,
  12377, 15836, 20554, 25401, 27705, 25943, 21467, 15949,  8703,  1592,
  -4965, -11777, -18158, -22987, -24935, -24967, -22739, -17228, -9261,  -577,
  6152, 12831, 17584, 21439, 22212, 20869, 17269, 10239,  2600, -4614,
  -10382, -14919, -17858, -19399, -17649, -15703, -10996, -5024,  1918,  8358,
  10669, 13535, 14776, 14950, 14230, 12867, 11185,  9800,  8947, 10568,
  11808, 13572, 14196, 12876, 10521,  4875,   803, -4386, -8567, -13502,
  -17727, -21949, -24251, -24490, -22731, -17256, -10016, -1834,  5790, 12451,
  17351, 21162, 23088, 22083, 18597, 12498,  3036, -3261, -9456, -14082,
  -17694, -19953, -19723, -17646, -13703, -8475, -2670,  3046,  7816, 11217,
  13819, 14105, 13975, 12577, 11329,  9135,  8590,  8307,  9250, 10184,
  11305, 11155,  8280,  4397,   249, -3310, -7466, -11199, -15027, -19160,
  -22163, -22715, -20857, -13802, -7973, -1170,  5510, 11780, 17137, 20774,
  23749, 23617, 21518, 16581,  9983,  2289, -4334, -10770, -15445, -18551,
  -20229, -19162, -16221, -13378, -8424, -3731,  1374,  5981,  9034, 10729,
  11811, 11442, 11078,  9638,  -605, -8409, -13628, -16320, -16825, -17980,
  -20913, -24123, -26990, -30390, -29964, -25502, -13379,  -678
};
// Converted by AKWF2Teensy from AKWF_snippet_0036.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave22[257] = {
  337,  3172,  6440,  9811, 13306, 16842, 20328, 23595, 26553,
  29047, 30972, 32211, 32740, 32616, 31938, 30811, 29289, 27462, 25368,
  23093, 20745, 18347, 15871, 13347, 10713,  7961,  5102,  2089, -1018,
  -4150, -7237, -10176, -12936, -15466, -17686, -19572, -21055, -22137, -22837,
  -23167, -23158, -22798, -22120, -21142, -19871, -18361, -16677, -14880, -13052,
  -11161, -9224, -7223, -5103, -2903,  -645,  1648,  3940,  6191,  8295,
  10230, 11951, 13379, 14448, 15037, 15151, 14764, 13939, 12740, 11219,
  9463,  7534,  5504,  3400,  1243,  -931, -3120, -5338, -7557, -9757,
  -11914, -14011, -16017, -17869, -19525, -20956, -22091, -22955, -23533, -23836,
  -23922, -23814, -23509, -22995, -22300, -21406, -20358, -19132, -17748, -16144,
  -14285, -12144, -9802, -7398, -4981, -2582,  -172,  2239,  4674,  7056,
  9310, 11396, 13304, 15023, 16571, 17935, 19096, 19951, 20457, 20614,
  20393, 19790, 18829, 17562, 16031, 14277, 12334, 10292,  8217,  6194,
  4212,  2259,   350, -1489, -3253, -4891, -6413, -7829, -9142, -10351,
  -11419, -12303, -12991, -13472, -13758, -13866, -13805, -13590, -13189, -12579,
  -11685, -10530, -9127, -7543, -5817, -3991, -2098,  -172,  1794,  3746,
  5655,  7482,  9186, 10782, 12211, 13510, 14679, 15731, 16654, 17447,
  18069, 18497, 18733, 18727, 18499, 18069, 17409, 16535, 15497, 14280,
  12905, 11431,  9819,  8136,  6430,  4701,  2987,  1303,  -299, -1817,
  -3233, -4545, -5737, -6789, -7723, -8532, -9538, -10885, -12238, -13334,
  -14050, -14464, -14635, -14512, -13965, -12920, -11342, -9246, -6754, -3968,
  -1062,  1859,  4696,  7331,  9737, 11813, 13493, 14782, 15700, 16288,
  16583, 16626, 16442, 16012, 15358, 14480, 13371, 12083, 10588,  8916,
  7070,  4984,  2607,   -96, -3129, -6354, -9662, -12919, -16001, -18841,
  -21325, -23325, -24786, -25625, -25820, -25371, -24316, -22766, -20860, -18753,
  -16488, -14169, -11786, -9422, -7100, -4775, -2245,   337
};
// Converted by AKWF2Teensy from AKWF_snippet_0037.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave23[257] = {
  1418, 16043, 30467, 30006,  5078, -14991, -13699, -9809, -5266,
  -3335, -1900, -1688, -1291, -1362, -1194, -1249, -1159, -1170, -1130,
  -1101, -1095, -1039, -1058,  -983, -1020,  -936,  -979,  -891,  -936,
  -853,  -894,  -816,  -851,  -784,  -809,  -751,  -766,  -722,  -729,
  -695,  -690,  -665,  -655,  -638,  -622,  -611,  -591,  -585,  -564,
  -559,  -536,  -532,  -509,  -506,  -487,  -482,  -464,  -458,  -442,
  -435,  -420,  -414,  -400,  -394,  -379,  -375,  -362,  -358,  -341,
  -340,  -322,  -325,  -301,  -314,  -275,  -317,  -166,    98,    61,
  81,    69,    76,    71,    74,    72,    72,    75,    74,    76,
  74,    77,    73,    76,    73,    77,    74,    77,    74,    77,
  73,    76,    74,    77,    74,    76,    74,    75,    75,    73,
  73,    72,    73,    72,    73,    73,    73,    73,    74,    73,
  73,    73,    73,    73,    73,    73,    72,    73,    73,    73,
  74,    73,    73,    72,    72,    73,    74,    73,    73,    73,
  73,    73,    74,    72,    73,    73,    73,    73,    73,    73,
  73,    73,    74,    73,    73,    74,    73,    73,    73,    72,
  72,    73,    73,    73,    73,    72,    73,    74,    73,    74,
  73,    73,    72,    73,    73,    74,    73,    73,    73,    73,
  73,    74,    73,    73,    73,    74,    73,    73,    72,    74,
  72,    74,    72,    74,    71,    75,    72,    74,    72,    74,
  72,    74,    73,    74,    73,    72,    74,    71,    75,    69,
  77,    68,    79,    64,    79,    62,    81,    61,    81,    60,
  81,    61,    82,    61,    80,    65,    75,    68,    72,    73,
  65,    80,    57,    90,    48,    99,    38,   109,    28,   118,
  19,   127,    11,   134,     7,   138,     5,   136,     9,   130,
  17,   118,    34,    98,    55,    87,   -10,  1418
};
// Converted by AKWF2Teensy from AKWF_snippet_0038.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave24[257] = {
  723,  -866, -1820,  2445,  4986,  5937,  5509,  6008,  6921,
  6115,  6137,  8411,  8201,  9543,  9903, 10833, 11506, 10995, 12237,
  12214, 13661, 14271, 13624, 13451, 16046, 17200, 15795, 17222, 16769,
  12395, 13869, 16432, 15268, 15819, 16829, 13512, 13998, 15093, 16568,
  16305, 13669, 15662, 17543, 16106, 15238, 17297, 18064, 20732, 19631,
  16060, 16416, 15620, 18045, 19583, 17437, 20710, 20992, 22692, 24548,
  24472, 25367, 25835, 26130, 27031, 29008, 28896, 29407, 28460, 27174,
  28832, 29879, 29002, 29765, 29047, 27755, 27827, 29565, 28875, 28823,
  27428, 26235, 25860, 24934, 24143, 24331, 23634, 20545, 20513, 17901,
  19580, 18025, 15497, 16800, 15212, 17734, 20524, 18372, 16874, 15079,
  15908, 16944, 15915, 13058, 15309, 17058, 14214, 14441, 13036, 16216,
  15867, 14486, 15939, 14078, 11836, 15932, 17270, 15446, 16056, 15485,
  13973, 12367, 13647, 13148, 11930, 11748, 10099, 11026, 10701,  9171,
  9753,  7483,  6434,  3625,  4243,  6675,  5569,  5172,  4938,  4604,
  3221,  -759, -3202,  -457,   105, -2399, -3988, -3012, -3920, -8357,
  -10926, -8677, -11465, -13974, -14778, -16553, -16297, -16739, -12681, -13857,
  -17001, -18107, -19796, -19706, -20000, -20351, -20600, -21518, -20071, -18983,
  -19967, -19435, -18163, -20063, -19611, -17856, -20666, -22366, -22792, -21730,
  -23960, -25519, -24365, -24768, -25194, -25717, -29192, -26742, -25747, -27422,
  -29135, -32768, -31264, -31058, -29774, -29742, -28739, -26563, -26263, -28207,
  -30371, -29869, -27690, -26122, -26519, -29375, -29649, -30462, -31250, -31275,
  -31202, -28339, -26752, -25240, -28142, -27292, -24769, -25283, -23609, -23667,
  -25242, -22537, -21546, -22097, -21531, -18352, -17674, -20792, -18651, -18503,
  -18581, -18645, -18846, -20710, -21418, -19893, -20159, -19141, -19036, -18942,
  -16896, -15762, -12794, -13938, -16594, -15566, -15993, -13354, -12711, -9859,
  -9037, -9607, -6167, -2730, -2485, -2964,  -857,   723
};
// Converted by AKWF2Teensy from AKWF_snippet_0039.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave25[257] = {
  4158,  8211,  7972,  8007, 13177, 11077,  6608, 15684, 14902,
  22650, 23774, 24096, 29921, 26121, 28825, 29610, 29239, 30804, 30050,
  30542, 30196, 30418, 30282, 30316, 30385, 29816, 30014, 30370, 30259,
  30287, 30284, 30247, 30288, 30222, 30280, 30204, 30266, 30190, 30249,
  30178, 30230, 30168, 30209, 30157, 30188, 30148, 30166, 30137, 30146,
  30126, 30126, 30113, 30109, 30100, 30090, 30085, 30072, 30072, 30055,
  30056, 30039, 30041, 30022, 30025, 30008, 30007, 29992, 29990, 29978,
  29973, 29963, 29956, 29948, 29938, 29933, 29921, 29917, 29905, 29903,
  29889, 29887, 29872, 29871, 29857, 29854, 29841, 29836, 29826, 29820,
  29812, 29802, 29797, 29784, 29782, 29767, 29770, 29749, 29756, 29730,
  29742, 29712, 29728, 29694, 29715, 29676, 29700, 29659, 29685, 29642,
  29670, 29624, 29654, 29609, 29637, 29599, 29613, 29593, 29585, 29575,
  28303, 29253, 26043, 28247, 26394, 21820, 23116, 16385, 11230,  1571,
  6033, 13906,  9043,  6875,  8044,  4414,  -514, -11915, -21482, -11620,
  -10023, -19260, -23296, -20747, -28566, -32768, -32441, -32768, -32506, -32768,
  -32533, -32768, -32555, -32768, -32577, -32767, -32598, -32768, -32617, -32768,
  -32634, -32728, -32645, -32690, -32651, -32655, -32654, -32623, -32650, -32597,
  -32642, -32577, -32630, -32558, -32614, -32540, -32595, -32528, -32574, -32515,
  -32551, -32505, -32529, -32493, -32505, -32482, -32484, -32470, -32462, -32457,
  -32439, -32445, -32421, -32429, -32402, -32412, -32383, -32393, -32369, -32375,
  -32355, -32353, -32341, -32330, -32331, -32306, -32323, -32280, -32314, -32255,
  -32304, -32228, -32294, -32204, -32284, -32182, -32270, -32163, -32252, -32148,
  -32230, -32140, -32200, -32138, -32164, -32141, -32122, -32154, -32072, -32173,
  -32015, -32198, -31954, -32226, -31890, -32258, -31825, -32287, -31761, -32312,
  -31706, -32331, -31660, -32335, -31624, -32335, -31569, -32466, -28959, -18955,
  -22428, -18754, -8448, -9060, -20767, -10583,   217,  4158
};
// Converted by AKWF2Teensy from AKWF_snippet_0040.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave26[257] = {
  1169, 13248, 13186,  6751,  4173,  3045, 11633, 11523,  5189,
  9737, 28008, 27858, 10835, 12467, 14434, -4732, -6998, -15179, -18855,
  -13396, -23895, -23580, -21726, -21947, -24092, -20670, -15600, -12617, -6760,
  -13811, -12283, -10838, -14935, -9155, -11681, -11179, -4754,   973,  6207,
  11951,  8193, 10850,  8776,  4492,  7550,  6478,  2966,  1523,  2767,
  3454, 12972, -5207, -7743, -7067, -11669, -1102,  6340,  2240, -2326,
  3223,  5700,  7935,  3214,   369,  1612,  7502, 11901, 17890, 19152,
  8554,  1657,  3415,   898,  8095,  3412,   166,  1205, -5524, -4571,
  3285,  2643,  2089,  6728, -1651,  2158, -3893, -3270,  3259,  2783,
  499,  -496,  7901,  5423,  4535,  3742, 10145, 15870,  2887, -1464,
  -1906, -4112, -2440, -8316, -9227, -4595, -1958, -4210, -9865, -7281,
  -12234, -1669,  2882, -6642, -4661, -7463, -4953, -9137, -13634, -14575,
  -9656, -12278, -15339, -6128, -8434, -9590, -7529, -12845, -6147,  1729,
  -7868, -8014, -1048,  1150, -6198,  -650, 13830, 11725,  8367,  5574,
  928,   447, 14774, 15006, 13809, 16462, 10179, 18555,  8986, -1516,
  10007, 14089,  6262,   687,  3616,  6858,   -74, -4440,  2715,  2710,
  4562, 10980, 10072,  8108,  4454,  5299,  9124,  6418,  5579,  8625,
  7274,  2264,  6916, 12904,  5835, -1589, -9344, -7897, -5028, -11050,
  -13406, -18494, -18076, -18338, -12849, -15938, -17869, -14968, -22653, -25179,
  -19965, -9124,   551, -2293, -7658, -7542, -2135,  2318, -6450,   563,
  9592,  7444, -6402,  3504, 14046, 12154,  3755,  4666,  9993,  7920,
  12970,  6246,  5432,  8287, 18976, 12228,  8286, 16735, 10795,  1859,
  8318,  6469,  1388,  5427, 12862, -5269, -15339, -14813, -13454, -5208,
  -7201, -1415,   159,  3729, -16515, -11837, -7578, -28299, -20984, -11877,
  -8266, -14399, -21198, -4039, 12088,  1814, -2446, 12960, 11632, 22104,
  22233, 15343, 10616,  8118, 13194,  4146,  4097,  1169
};
// Converted by AKWF2Teensy from AKWF_snippet_0041.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave27[257] = {
  171,  4345,  7689,  9368, 14848, 18021, 17340, 16771, 17933,
  19099, 17959, 15381, 13302, 11271,  9630, 10136,  9285,  9966,  9560,
  7012,  5269,  4534,  5750,  5190,  1105, -1681, -3816, -4951, -7057,
  -9697, -9565, -8966, -10677, -11689, -9581, -9436, -11269, -12746, -12681,
  -11013, -10529, -9915, -9175, -9445, -7743, -5440, -4482, -4265, -3771,
  -3429, -3066, -3416, -1996,   261,  3077,  5877,  8523, 10432, 10056,
  8651,  6260,  6631,  6264,  6508,  5799,  5368,  4606,  3181,  2994,
  2901,  3351,  2612,  4508,  6124,  6561,  5300,  4080,  3439,  1675,
  722,  1330,  1258,  -258,  -942, -2852, -5601, -7114, -6028, -3769,
  -1259,  -206,  -906, -1903, -3199, -5003, -6313, -6957, -7830, -8058,
  -8748, -8858, -8683, -7834, -8059, -7871, -8187, -8470, -7272, -5099,
  -2429, -2174, -1807, -1131,    65,  1210,  2083,  2967,  3276,  2342,
  1358,   461,  1105,  2363,  3169,  3706,  4428,  4549,  4651,  4095,
  2642,  1470,   760,  -103, -1121,  -779, -1249, -2229, -3293, -2969,
  -3295, -3016, -2262, -1567,  -180,   143,   938,  1931,  2734,  3123,
  2568,  2607,   -80,  2281,  2744,    68,  2538,   883,  1391,   914,
  1563,  1184,  2417,  2239,  2544,  3002,  2068,  1497,   718,  -565,
  1112,   248, -2680,  -615, -2914,  -937, -4359, -2026, -3310, -3025,
  -3772, -3397, -3838,  4977, -2308,   610, -3641,   469, 14807, -8379,
  595,  7026,  6563,  -797,  2224,  5219,  2592,  2859,  3895,  3726,
  405, -10562,  4643, -13117, 20355, 21544,  2926, 14238, -11152, 18698,
  -1720, -3830, -2894,  9034,  9439,  9045,  7251, 10056, 13227, -10716,
  -2963,  2108,   805, 11940, 15882,  2396,  5102, -3888, -12694, -8302,
  -4476, -9745, -9500, -10960, -12672, -12069, -14399, -16280, -14347, -13683,
  -11373, -9876, -11766, -10039, -7189, -4014,  1687,  9196,  6304,  1558,
  59, -6885, -13561, -13296, -10425, -5689, -2627,   171
};
// Converted by AKWF2Teensy from AKWF_snippet_0042.wav.
// AKWF2Teensy - Beerware by Datanoise.net.
// Length: 257
const int16_t wave28[257] = {
  970,  2501,  2461,  6917,  8932,  9275, 12288, 16360, 18982,
  21680, 21749, 20932, 20437, 20480, 21518, 23420, 23671, 22276, 21234,
  19671, 14843, 10264,  7912,  5369,  -452, -6808, -7478, -4515,   545,
  4348,  6163,  7144,  6512,   660, -8430, -16965, -24162, -29438, -32152,
  -32154, -32713, -32183, -30384, -28390, -24387, -18526, -10828, -4657, -1819,
  -567,   106,   825,   986,   499,   941,  1062,   976,  1637,  1599,
  643,  1375,  3464,  5305,  7991, 10939, 13847, 15815, 16596, 16939,
  17374, 17703, 17053, 15315, 12399,  7712,  2557,  -718, -1757, -1696,
  -691,   391,  2154,  2624,  1761,  1348,   595,   958,   831,  -783,
  -4323, -8516, -11397, -12090, -11330, -10223, -8477, -6058, -3421, -1319,
  222,  2343,  4159,  4828,  4987,  3820,  1792,  -801, -3519, -6804,
  -9906, -11610, -11123, -8875, -6084, -2976,   317,  3419,  6250,  9040,
  10944, 12312, 13084, 12814, 12283, 11840, 10911,  9549,  7590,  4744,
  3031,  2173,   782,  -688, -2391, -4477, -5688, -6246, -6416, -5959,
  -5552, -5174, -4989, -5094, -4959, -5049, -4799, -3342, -2531, -1052,
  864,  2720,  3484,  4176,  5263,  5723,  4549,  2859,  1037,  -444,
  -1115, -1326, -1059, -1207, -1150,  -856,   106,  -561,  1472,  3155,
  2072,  2780,  2295,  4010, 10403,  5013, -1409,   491, -2859, -6266,
  -10980, -14740, -14054, -12594, -11932, -10353, -4662, -3012,  -861,  1681,
  5670,  4756,   842,  8077, 11535,  9364,  3846,  1014, -4599, -10447,
  -12883, -14084, -14108, -12816, -9789, -10294, -10429, -10259, -10710, -4076,
  884, -4374,  3095, 14735, 14748, 14184, 21011, 18050, 12369, 12514,
  8700,  2259,  -917, -2883, -7608, -10514, -17761, -8732, -2568, -5107,
  3690, 14548, 21436, 19765, 13104,  8092, 14228, 11506,  5493,  3373,
  -2490, -9373, -16230, -21230, -21709, -19469, -22672, -22119, -13095, -9569,
  -14186, -13037, -13322, -14860, -11388, -3982, -1002,   970
};
