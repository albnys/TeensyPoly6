/////////// WRITE PRESETSS ///////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////

///////// PRESET 1 ////////////////////////////////////////////////////////////////
if (digitalRead(44) == 1 && prevBtn1 == 0) {
  //write params
  EEPROM.writeFloat(0, octave);
  EEPROM.writeFloat(5, octaveB);
  EEPROM.writeFloat(10, octaveC);
  EEPROM.writeInt(15, shapeA);
  EEPROM.writeInt(20, shapeB);
  EEPROM.writeInt(25, shapeC);
  EEPROM.writeFloat(30, tuneB);
  EEPROM.writeFloat(35, tuneC);
  EEPROM.writeFloat(40, crossMod);
  EEPROM.writeFloat(45, vcoAvol);
  EEPROM.writeFloat(50, vcoBvol);
  EEPROM.writeFloat(55, vcoCvol);
  EEPROM.writeFloat(60, Subvol);
  EEPROM.writeInt(65, cut);
  EEPROM.writeFloat(70, res);
  EEPROM.writeInt(75, filtAtt);
  EEPROM.writeInt(80, filtDec);
  EEPROM.writeFloat(85, filtAmt);
  EEPROM.writeInt(90, filterMode);
  EEPROM.writeInt(95, envAtt);
  EEPROM.writeInt(100, envDec);
  EEPROM.writeInt(105, envRel);
  EEPROM.writeFloat(110, envSus);
  EEPROM.writeFloat(115, lfoAamp);
  EEPROM.writeFloat(120, lfoAfreq);
  EEPROM.writeInt(125, lfoAdel);
  EEPROM.writeInt(130, lfoAatt);
  EEPROM.writeInt(135, lfoAdec);
  EEPROM.writeInt(140, lfoArel);
  EEPROM.writeFloat(145, lfoAsus);
  EEPROM.writeFloat(150, lfoBamp);
  EEPROM.writeFloat(155, lfoBfreq);
  EEPROM.writeFloat(160, dlyAmt);
  EEPROM.writeFloat(165, dlyTimeL);
  EEPROM.writeFloat(170, dlyTimeR);
  EEPROM.writeFloat(175, revMix);
  EEPROM.writeFloat(180, revSize);
  EEPROM.writeFloat(185, lfoAdest);
  EEPROM.writeFloat(190, lfoAshape);

  Serial.println("save 1");

  prevBtn1 = 1;

} else if (digitalRead(44) == 0) {
  prevBtn1 = 0;
}

///////  PRESET 2 ///////////////////////////////////////////////////
if (digitalRead(45) == 1 && prevBtn2 == 0) {
  //write params
  EEPROM.writeFloat(200, octave);
  EEPROM.writeFloat(205, octaveB);
  EEPROM.writeFloat(210, octaveC);
  EEPROM.writeInt(215, shapeA);
  EEPROM.writeInt(220, shapeB);
  EEPROM.writeInt(225, shapeC);
  EEPROM.writeFloat(230, tuneB);
  EEPROM.writeFloat(235, tuneC);
  EEPROM.writeFloat(240, crossMod);
  EEPROM.writeFloat(245, vcoAvol);
  EEPROM.writeFloat(250, vcoBvol);
  EEPROM.writeFloat(255, vcoCvol);
  EEPROM.writeFloat(260, Subvol);
  EEPROM.writeInt(265, cut);
  EEPROM.writeFloat(270, res);
  EEPROM.writeInt(275, filtAtt);
  EEPROM.writeInt(280, filtDec);
  EEPROM.writeFloat(285, filtAmt);
  EEPROM.writeInt(290, filterMode);
  EEPROM.writeInt(295, envAtt);
  EEPROM.writeInt(300, envDec);
  EEPROM.writeInt(305, envRel);
  EEPROM.writeFloat(310, envSus);
  EEPROM.writeFloat(315, lfoAamp);
  EEPROM.writeFloat(320, lfoAfreq);
  EEPROM.writeInt(325, lfoAdel);
  EEPROM.writeInt(330, lfoAatt);
  EEPROM.writeInt(335, lfoAdec);
  EEPROM.writeInt(340, lfoArel);
  EEPROM.writeFloat(345, lfoAsus);
  EEPROM.writeFloat(350, lfoBamp);
  EEPROM.writeFloat(355, lfoBfreq);
  EEPROM.writeFloat(360, dlyAmt);
  EEPROM.writeFloat(365, dlyTimeL);
  EEPROM.writeFloat(370, dlyTimeR);
  EEPROM.writeFloat(375, revMix);
  EEPROM.writeFloat(380, revSize);
  EEPROM.writeFloat(385, lfoAdest);
  EEPROM.writeFloat(390, lfoAshape);

  Serial.println("save 2");

  prevBtn2 = 1;

} else if (digitalRead(45) == 0) {
  prevBtn2 = 0;
}


///////// PRESET 3 ////////////////////////////////////////////////////////////////
if (digitalRead(46) == 1 && prevBtn3 == 0) {
  //write params
  EEPROM.writeFloat(400, octave);
  EEPROM.writeFloat(405, octaveB);
  EEPROM.writeFloat(410, octaveC);
  EEPROM.writeInt(415, shapeA);
  EEPROM.writeInt(420, shapeB);
  EEPROM.writeInt(425, shapeC);
  EEPROM.writeFloat(430, tuneB);
  EEPROM.writeFloat(435, tuneC);
  EEPROM.writeFloat(440, crossMod);
  EEPROM.writeFloat(445, vcoAvol);
  EEPROM.writeFloat(450, vcoBvol);
  EEPROM.writeFloat(455, vcoCvol);
  EEPROM.writeFloat(460, Subvol);
  EEPROM.writeInt(465, cut);
  EEPROM.writeFloat(470, res);
  EEPROM.writeInt(475, filtAtt);
  EEPROM.writeInt(480, filtDec);
  EEPROM.writeFloat(485, filtAmt);
  EEPROM.writeInt(490, filterMode);
  EEPROM.writeInt(495, envAtt);
  EEPROM.writeInt(500, envDec);
  EEPROM.writeInt(505, envRel);
  EEPROM.writeFloat(510, envSus);
  EEPROM.writeFloat(515, lfoAamp);
  EEPROM.writeFloat(520, lfoAfreq);
  EEPROM.writeInt(525, lfoAdel);
  EEPROM.writeInt(530, lfoAatt);
  EEPROM.writeInt(535, lfoAdec);
  EEPROM.writeInt(540, lfoArel);
  EEPROM.writeFloat(545, lfoAsus);
  EEPROM.writeFloat(550, lfoBamp);
  EEPROM.writeFloat(555, lfoBfreq);
  EEPROM.writeFloat(560, dlyAmt);
  EEPROM.writeFloat(565, dlyTimeL);
  EEPROM.writeFloat(570, dlyTimeR);
  EEPROM.writeFloat(575, revMix);
  EEPROM.writeFloat(580, revSize);
  EEPROM.writeFloat(585, lfoAdest);
  EEPROM.writeFloat(590, lfoAshape);

  Serial.println("save 3");

  prevBtn3 = 1;

} else if (digitalRead(46) == 0) {
  prevBtn3 = 0;
}


///////// PRESET 4 ////////////////////////////////////////////////////////////////
if (digitalRead(48) == 1 && prevBtn4 == 0) {
  //write params
  EEPROM.writeFloat(600, octave);
  EEPROM.writeFloat(605, octaveB);
  EEPROM.writeFloat(610, octaveC);
  EEPROM.writeInt(615, shapeA);
  EEPROM.writeInt(620, shapeB);
  EEPROM.writeInt(625, shapeC);
  EEPROM.writeFloat(630, tuneB);
  EEPROM.writeFloat(635, tuneC);
  EEPROM.writeFloat(640, crossMod);
  EEPROM.writeFloat(645, vcoAvol);
  EEPROM.writeFloat(650, vcoBvol);
  EEPROM.writeFloat(655, vcoCvol);
  EEPROM.writeFloat(660, Subvol);
  EEPROM.writeInt(665, cut);
  EEPROM.writeFloat(670, res);
  EEPROM.writeInt(675, filtAtt);
  EEPROM.writeInt(680, filtDec);
  EEPROM.writeFloat(685, filtAmt);
  EEPROM.writeInt(690, filterMode);
  EEPROM.writeInt(695, envAtt);
  EEPROM.writeInt(700, envDec);
  EEPROM.writeInt(705, envRel);
  EEPROM.writeFloat(710, envSus);
  EEPROM.writeFloat(715, lfoAamp);
  EEPROM.writeFloat(720, lfoAfreq);
  EEPROM.writeInt(725, lfoAdel);
  EEPROM.writeInt(730, lfoAatt);
  EEPROM.writeInt(735, lfoAdec);
  EEPROM.writeInt(740, lfoArel);
  EEPROM.writeFloat(745, lfoAsus);
  EEPROM.writeFloat(750, lfoBamp);
  EEPROM.writeFloat(755, lfoBfreq);
  EEPROM.writeFloat(760, dlyAmt);
  EEPROM.writeFloat(765, dlyTimeL);
  EEPROM.writeFloat(770, dlyTimeR);
  EEPROM.writeFloat(775, revMix);
  EEPROM.writeFloat(780, revSize);
  EEPROM.writeFloat(785, lfoAdest);
  EEPROM.writeFloat(790, lfoAshape);

  Serial.println("save 4");
  prevBtn4 = 1;

} else if (digitalRead(48) == 0) {
  prevBtn4 = 0;
}




///////// PRESET 5 ////////////////////////////////////////////////////////////////
if (digitalRead(49) == 1 && prevBtn5 == 0) {
  //write params
  EEPROM.writeFloat(800, octave);
  EEPROM.writeFloat(805, octaveB);
  EEPROM.writeFloat(810, octaveC);
  EEPROM.writeInt(815, shapeA);
  EEPROM.writeInt(820, shapeB);
  EEPROM.writeInt(825, shapeC);
  EEPROM.writeFloat(830, tuneB);
  EEPROM.writeFloat(835, tuneC);
  EEPROM.writeFloat(840, crossMod);
  EEPROM.writeFloat(845, vcoAvol);
  EEPROM.writeFloat(850, vcoBvol);
  EEPROM.writeFloat(855, vcoCvol);
  EEPROM.writeFloat(860, Subvol);
  EEPROM.writeInt(865, cut);
  EEPROM.writeFloat(870, res);
  EEPROM.writeInt(875, filtAtt);
  EEPROM.writeInt(880, filtDec);
  EEPROM.writeFloat(885, filtAmt);
  EEPROM.writeInt(890, filterMode);
  EEPROM.writeInt(895, envAtt);
  EEPROM.writeInt(900, envDec);
  EEPROM.writeInt(905, envRel);
  EEPROM.writeFloat(910, envSus);
  EEPROM.writeFloat(915, lfoAamp);
  EEPROM.writeFloat(920, lfoAfreq);
  EEPROM.writeInt(925, lfoAdel);
  EEPROM.writeInt(930, lfoAatt);
  EEPROM.writeInt(935, lfoAdec);
  EEPROM.writeInt(940, lfoArel);
  EEPROM.writeFloat(945, lfoAsus);
  EEPROM.writeFloat(950, lfoBamp);
  EEPROM.writeFloat(955, lfoBfreq);
  EEPROM.writeFloat(960, dlyAmt);
  EEPROM.writeFloat(965, dlyTimeL);
  EEPROM.writeFloat(970, dlyTimeR);
  EEPROM.writeFloat(975, revMix);
  EEPROM.writeFloat(980, revSize);
  EEPROM.writeFloat(985, lfoAdest);
  EEPROM.writeFloat(990, lfoAshape);

  Serial.println("save 5");

  prevBtn5 = 1;

} else if (digitalRead(49) == 0) {
  prevBtn5 = 0;
}





/////////// READ PRESETSS ///////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////

/////////// PRESET 1 ////////////////////////////////////////////////////
if (preset == 1 && presetLoaded1 == 0) {
  //read params
  octave = EEPROM.readFloat(0);
  octaveB = EEPROM.readFloat(5);
  octaveC = EEPROM.readFloat(10);
  shapeA = EEPROM.readInt(15);
  shapeB = EEPROM.readInt(20);
  shapeC = EEPROM.readInt(25);
  tuneB = EEPROM.readFloat(30);
  tuneC = EEPROM.readFloat(35);
  crossMod = EEPROM.readFloat(40);
  vcoAvol = EEPROM.readFloat(45);
  vcoBvol = EEPROM.readFloat(50);
  vcoCvol = EEPROM.readFloat(55);
  Subvol = EEPROM.readFloat(60);
  cut = EEPROM.readInt(65);
  res = EEPROM.readFloat(70);
  filtAtt = EEPROM.readInt(75);
  filtDec = EEPROM.readInt(80);
  filtAmt = EEPROM.readFloat(85);
  filterMode = EEPROM.readInt(90);
  envAtt = EEPROM.readInt(95);
  envDec = EEPROM.readInt(100);
  envRel = EEPROM.readInt(105);
  envSus = EEPROM.readFloat(110);
  lfoAamp = EEPROM.readFloat(115);
  lfoAfreq = EEPROM.readFloat(120);
  lfoAdel = EEPROM.readInt(125);
  lfoAatt = EEPROM.readInt(130);
  lfoAdec = EEPROM.readInt(135);
  lfoArel = EEPROM.readInt(140);
  lfoAsus = EEPROM.readFloat(145);
  lfoBamp = EEPROM.readFloat(150);
  lfoBfreq = EEPROM.readFloat(155);
  dlyAmt = EEPROM.readFloat(160);
  dlyTimeL = EEPROM.readFloat(165);
  dlyTimeR = EEPROM.readFloat(170);
  revMix = EEPROM.readFloat(175);
  revSize = EEPROM.readFloat(180);
  lfoAdest = EEPROM.readFloat(185);
  lfoAshape = EEPROM.readFloat(190);

  presetLoaded1 = 1;
  Serial.println("preset 1 loaded");

} else if (preset != 1) {
  presetLoaded1 = 0;
}


/////////// PRESET 2 ////////////////////////////////////////////////////
if (preset == 2 && presetLoaded2 == 0) {
  //read params
  octave = EEPROM.readFloat(200);
  octaveB = EEPROM.readFloat(205);
  octaveC = EEPROM.readFloat(210);
  shapeA = EEPROM.readInt(215);
  shapeB = EEPROM.readInt(220);
  shapeC = EEPROM.readInt(225);
  tuneB = EEPROM.readFloat(230);
  tuneC = EEPROM.readFloat(235);
  crossMod = EEPROM.readFloat(240);
  vcoAvol = EEPROM.readFloat(245);
  vcoBvol = EEPROM.readFloat(250);
  vcoCvol = EEPROM.readFloat(255);
  Subvol = EEPROM.readFloat(260);
  cut = EEPROM.readInt(265);
  res = EEPROM.readFloat(270);
  filtAtt = EEPROM.readInt(275);
  filtDec = EEPROM.readInt(280);
  filtAmt = EEPROM.readFloat(285);
  filterMode = EEPROM.readInt(290);
  envAtt = EEPROM.readInt(295);
  envDec = EEPROM.readInt(300);
  envRel = EEPROM.readInt(305);
  envSus = EEPROM.readFloat(310);
  lfoAamp = EEPROM.readFloat(315);
  lfoAfreq = EEPROM.readFloat(320);
  lfoAdel = EEPROM.readInt(325);
  lfoAatt = EEPROM.readInt(330);
  lfoAdec = EEPROM.readInt(335);
  lfoArel = EEPROM.readInt(340);
  lfoAsus = EEPROM.readFloat(345);
  lfoBamp = EEPROM.readFloat(350);
  lfoBfreq = EEPROM.readFloat(355);
  dlyAmt = EEPROM.readFloat(360);
  dlyTimeL = EEPROM.readFloat(365);
  dlyTimeR = EEPROM.readFloat(370);
  revMix = EEPROM.readFloat(375);
  revSize = EEPROM.readFloat(380);
  lfoAdest = EEPROM.readFloat(385);
  lfoAshape = EEPROM.readFloat(390);

  presetLoaded2 = 2;
  Serial.println("preset 2 loaded");

} else if (preset != 2) {
  presetLoaded2 = 0;
}



/////////// PRESET 3 ////////////////////////////////////////////////////
if (preset == 3 && presetLoaded3 == 0) {
  //read params
  octave = EEPROM.readFloat(400);
  octaveB = EEPROM.readFloat(405);
  octaveC = EEPROM.readFloat(410);
  shapeA = EEPROM.readInt(415);
  shapeB = EEPROM.readInt(420);
  shapeC = EEPROM.readInt(425);
  tuneB = EEPROM.readFloat(430);
  tuneC = EEPROM.readFloat(435);
  crossMod = EEPROM.readFloat(440);
  vcoAvol = EEPROM.readFloat(445);
  vcoBvol = EEPROM.readFloat(450);
  vcoCvol = EEPROM.readFloat(455);
  Subvol = EEPROM.readFloat(460);
  cut = EEPROM.readInt(465);
  res = EEPROM.readFloat(470);
  filtAtt = EEPROM.readInt(475);
  filtDec = EEPROM.readInt(480);
  filtAmt = EEPROM.readFloat(485);
  filterMode = EEPROM.readInt(490);
  envAtt = EEPROM.readInt(495);
  envDec = EEPROM.readInt(500);
  envRel = EEPROM.readInt(505);
  envSus = EEPROM.readFloat(510);
  lfoAamp = EEPROM.readFloat(515);
  lfoAfreq = EEPROM.readFloat(520);
  lfoAdel = EEPROM.readInt(525);
  lfoAatt = EEPROM.readInt(530);
  lfoAdec = EEPROM.readInt(535);
  lfoArel = EEPROM.readInt(540);
  lfoAsus = EEPROM.readFloat(545);
  lfoBamp = EEPROM.readFloat(550);
  lfoBfreq = EEPROM.readFloat(555);
  dlyAmt = EEPROM.readFloat(560);
  dlyTimeL = EEPROM.readFloat(565);
  dlyTimeR = EEPROM.readFloat(570);
  revMix = EEPROM.readFloat(575);
  revSize = EEPROM.readFloat(580);
  lfoAdest = EEPROM.readFloat(585);
  lfoAshape = EEPROM.readFloat(590);

  presetLoaded3 = 1;
  Serial.println("preset 3 loaded");

} else if (preset != 3) {
  presetLoaded3 = 0;
}


/////////// PRESET 4 ////////////////////////////////////////////////////
if (preset == 4 && presetLoaded4 == 0) {
  //read params
  octave = EEPROM.readFloat(600);
  octaveB = EEPROM.readFloat(605);
  octaveC = EEPROM.readFloat(610);
  shapeA = EEPROM.readInt(615);
  shapeB = EEPROM.readInt(620);
  shapeC = EEPROM.readInt(625);
  tuneB = EEPROM.readFloat(630);
  tuneC = EEPROM.readFloat(635);
  crossMod = EEPROM.readFloat(640);
  vcoAvol = EEPROM.readFloat(645);
  vcoBvol = EEPROM.readFloat(650);
  vcoCvol = EEPROM.readFloat(655);
  Subvol = EEPROM.readFloat(660);
  cut = EEPROM.readInt(665);
  res = EEPROM.readFloat(670);
  filtAtt = EEPROM.readInt(675);
  filtDec = EEPROM.readInt(680);
  filtAmt = EEPROM.readFloat(685);
  filterMode = EEPROM.readInt(690);
  envAtt = EEPROM.readInt(695);
  envDec = EEPROM.readInt(700);
  envRel = EEPROM.readInt(705);
  envSus = EEPROM.readFloat(710);
  lfoAamp = EEPROM.readFloat(715);
  lfoAfreq = EEPROM.readFloat(720);
  lfoAdel = EEPROM.readInt(725);
  lfoAatt = EEPROM.readInt(730);
  lfoAdec = EEPROM.readInt(735);
  lfoArel = EEPROM.readInt(740);
  lfoAsus = EEPROM.readFloat(745);
  lfoBamp = EEPROM.readFloat(750);
  lfoBfreq = EEPROM.readFloat(755);
  dlyAmt = EEPROM.readFloat(760);
  dlyTimeL = EEPROM.readFloat(765);
  dlyTimeR = EEPROM.readFloat(770);
  revMix = EEPROM.readFloat(775);
  revSize = EEPROM.readFloat(780);
  lfoAdest = EEPROM.readFloat(785);
  lfoAshape = EEPROM.readFloat(790);

  presetLoaded4 = 1;
  Serial.println("preset 4 loaded");

} else if (preset != 4) {
  presetLoaded4 = 0;
}


/////////// PRESET 5 ////////////////////////////////////////////////////
if (preset == 5 && presetLoaded5 == 0) {
  //read params
  octave = EEPROM.readFloat(800);
  octaveB = EEPROM.readFloat(805);
  octaveC = EEPROM.readFloat(810);
  shapeA = EEPROM.readInt(815);
  shapeB = EEPROM.readInt(820);
  shapeC = EEPROM.readInt(825);
  tuneB = EEPROM.readFloat(830);
  tuneC = EEPROM.readFloat(835);
  crossMod = EEPROM.readFloat(840);
  vcoAvol = EEPROM.readFloat(845);
  vcoBvol = EEPROM.readFloat(850);
  vcoCvol = EEPROM.readFloat(855);
  Subvol = EEPROM.readFloat(860);
  cut = EEPROM.readInt(865);
  res = EEPROM.readFloat(870);
  filtAtt = EEPROM.readInt(875);
  filtDec = EEPROM.readInt(880);
  filtAmt = EEPROM.readFloat(885);
  filterMode = EEPROM.readInt(890);
  envAtt = EEPROM.readInt(895);
  envDec = EEPROM.readInt(900);
  envRel = EEPROM.readInt(905);
  envSus = EEPROM.readFloat(910);
  lfoAamp = EEPROM.readFloat(915);
  lfoAfreq = EEPROM.readFloat(920);
  lfoAdel = EEPROM.readInt(925);
  lfoAatt = EEPROM.readInt(930);
  lfoAdec = EEPROM.readInt(935);
  lfoArel = EEPROM.readInt(940);
  lfoAsus = EEPROM.readFloat(945);
  lfoBamp = EEPROM.readFloat(950);
  lfoBfreq = EEPROM.readFloat(955);
  dlyAmt = EEPROM.readFloat(960);
  dlyTimeL = EEPROM.readFloat(965);
  dlyTimeR = EEPROM.readFloat(970);
  revMix = EEPROM.readFloat(975);
  revSize = EEPROM.readFloat(980);
  lfoAdest = EEPROM.readFloat(985);
  lfoAshape = EEPROM.readFloat(990);

  presetLoaded5 = 1;
  Serial.println("preset 5 loaded");

} else if (preset != 5) {
  presetLoaded5 = 0;
}
}
