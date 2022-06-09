if (millis() - prevTimer > timer) {

  mainVol = (float)analogRead(A11) / 1024;
  preset = analogRead(A24) / 190;


  bend = 1 + ((float)analogRead(A0) / 1023 / 4.3) - 0.12;


  //main octave
  if (digitalRead(6) == 1) {
    octave = 0.5;
  } else if (digitalRead(6) == 0 && digitalRead(7) == 0) {
    octave = 1;
  } else if (digitalRead(7) == 1) {
    octave = 2;
  }




  ///////////////  EDIT MODE EDIT ///////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (preset == 0) {

    if (digitalRead(8) == 1) {
      octaveB = 0.5;
    } else if (digitalRead(8) == 0 && digitalRead(12) == 0) {
      octaveB = 1;
    } else if (digitalRead(12) == 1) {
      octaveB = 2;
    }

    if (digitalRead(10) == 1) {
      octaveC = 0.5;
    } else if (digitalRead(10) == 0 && digitalRead(11) == 0) {
      octaveC = 1;
    } else if (digitalRead(11) == 1) {
      octaveC = 2;
    }


    if (digitalRead(2) == 1) {
      shapeA = 0;
    } else if (digitalRead(2) == 0 && digitalRead(3) == 0) {
      shapeA = 1;
    } else if (digitalRead(3) == 1) {
      shapeA = 2;
    }

    if (digitalRead(4) == 1) {
      shapeB = 0;
    } else if (digitalRead(4) == 0 && digitalRead(5) == 0) {
      shapeB = 1;
    } else if (digitalRead(5) == 1) {
      shapeB = 2;
    }

    shapeC = analogRead(A4);

    if (analogRead(A2) < 512) {
      tuneB = ((float)analogRead(A2) / 1023) + 0.5;
    } else {
      tuneB = ((float)analogRead(A2) / 510);
    }

    if (analogRead(A3) < 512) {
      tuneC = ((float)analogRead(A3) / 1023) + 0.5;
    } else {
      tuneC = ((float)analogRead(A3) / 510);
    }

    crossMod = (float)analogRead(A1) / 512;

    vcoAvol = (float)analogRead(A5) / 1023;
    vcoBvol = (float)analogRead(A6) / 1023;
    vcoCvol = (float)analogRead(A7) / 1023;
    Subvol = (float)analogRead(A21) / 1023;

    cut = 15000 * (float)analogRead(A13) / 1023 + 15;
    res = 4.5 * (float)analogRead(A12) / 1023 + 1.1;
    filtAtt = (3000 * (float)mux0 / 1023);
    filtDec = (3000 * (float)mux1 / 1023);
    filtAmt = (float)mux2 / 512 - 1;
    if (digitalRead(13) == 1) {
      filterMode = 1;
    } else if (digitalRead(13) == 0) {
      filterMode = 0;
    }

    envAtt = 3000 * (float)analogRead(A25) / 1023;
    envDec = 5000 * (float)analogRead(A26) / 1023;
    envRel = 5000 * (float)analogRead(A26) / 1023;
    envSus = (float)analogRead(A10) / 100;

    if (lfoAdest == 0 && lfoAshape != 2) {
      lfoAamp = (float)mux3 / 1024 / 10;
    } else {
      lfoAamp = (float)mux3 / 1024 / 3;
    }
    lfoAfreq = 20 * (float)mux4 / 1024 + 0.1;
    lfoAdel = 2000 * (float)mux5 / 1024;
    lfoAatt = 3000 * (float)mux5 / 1024;
    lfoAdec = 4000 * (float)mux6 / 1024;
    lfoArel = 4000 * (float)mux6 / 1024;
    lfoAsus = (float)mux7 / 1024;

    if (digitalRead(24) == 1) { //lfo - pitch
      lfoAdest = 0;
    } else if ( digitalRead(24) == 0 && digitalRead(25) == 0) { //lfo - filter
      lfoAdest = 1;
    } else if (digitalRead(25) == 1) { //lfo - amp
      lfoAdest = 2;
    }

    if (digitalRead(26) == 1) {
      lfoAshape = 0;
    } else if ( digitalRead(26) == 0 && digitalRead(27) == 0) {
      lfoAshape = 1;
    } else if (digitalRead(27) == 1) {
      lfoAshape = 2;
    }

    lfoBamp = (float)analogRead(A14) / 1023;
    lfoBfreq = 5 * (float)analogRead(A22) / 1023 + 0.1;

    dlyAmt = (float)analogRead(A16) / 1100 - 0.1;
    dlyTimeL = analogRead(A17) / 2.5;
    dlyTimeR = analogRead(A17) / 1.25;
    revMix = ((float)analogRead(A19) / 1024 / 1.5);
    revSize = ((float)analogRead(A18) / 1024 - 0.01);

    if (dlyAmt < 0) {
      dlyAmt = 0;
    }


  } else {



    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    // PRESET MODE ///////// PRESET MODE //////// PRESET MODE //////////// PRESET MODE /////// PRESET MODE ////
    // PRESET MODE ///////// PRESET MODE //////// PRESET MODE //////////// PRESET MODE /////// PRESET MODE ////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///////////////  OCTAVES OCTAVES /////////////////////////////////////////////////////////////7////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////


    //octave vco B
    if (digitalRead(8) == 1) {
      octBsw = 0;
    } else if (digitalRead(8) == 0 && digitalRead(12) == 0) {
      octBsw = 1;
    } else if (digitalRead(12) == 1) {
      octBsw = 2;
    }
    if (oldOctBsw < octBsw || oldOctBsw > octBsw) {
      if (digitalRead(8) == 1) {
        octaveB = 0.5;
      } else if (digitalRead(8) == 0 && digitalRead(12) == 0) {
        octaveB = 1;
      } else if (digitalRead(12) == 1) {
        octaveB = 2;
      }
      oldOctBsw = octBsw;
      Serial.println("octave B switch");
    }



    //octave vco C
    if (digitalRead(10) == 1) {
      octCsw = 0;
    } else if (digitalRead(10) == 0 && digitalRead(11) == 0) {
      octCsw = 1;
    } else if (digitalRead(11) == 1) {
      octCsw = 2;
    }
    if (oldOctCsw < octCsw || oldOctCsw > octCsw) {
      if (digitalRead(10) == 1) {
        octaveC = 0.5;
      } else if (digitalRead(10) == 0 && digitalRead(11) == 0) {
        octaveC = 1;
      } else if (digitalRead(11) == 1) {
        octaveC = 2;
      }
      oldOctCsw = octCsw;
      Serial.println("octave C switch");
    }







    //////////// SHAPES SHAPES ////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Shape A
    if (digitalRead(2) == 1) {
      shapeAsw = 0;
    } else if (digitalRead(2) == 0 && digitalRead(3) == 0) {
      shapeAsw = 1;
    } else if (digitalRead(3) == 1) {
      shapeAsw = 2;
    }
    if (oldShapeAsw < shapeAsw || oldShapeAsw > shapeAsw) {
      if (digitalRead(2) == 1) {
        shapeA = 0;
      } else if (digitalRead(2) == 0 && digitalRead(3) == 0) {
        shapeA = 1;
      } else if (digitalRead(3) == 1) {
        shapeA = 2;
      }
      oldShapeAsw = shapeAsw;
      Serial.println("shape A switch");
    }



    //Shape B
    if (digitalRead(4) == 1) {
      shapeBsw = 0;
    } else if (digitalRead(4) == 0 && digitalRead(5) == 0) {
      shapeBsw = 1;
    } else if (digitalRead(5) == 1) {
      shapeBsw = 2;
    }
    if (oldShapeBsw < shapeBsw || oldShapeBsw > shapeBsw) {
      if (digitalRead(4) == 1) {
        shapeB = 0;
      } else if (digitalRead(4) == 0 && digitalRead(5) == 0) {
        shapeB = 1;
      } else if (digitalRead(5) == 1) {
        shapeB = 2;
      }
      oldShapeBsw = shapeBsw;
      Serial.println("shape B switch");
    }




    //Vco C shape
    shapeCpot = analogRead(A4);
    if (oldShapeCpot + tresh2 < shapeCpot || oldShapeCpot - tresh2 > shapeCpot) {
      shapeC = analogRead(A4);
      oldShapeCpot = shapeCpot + tresh2 / 2;
      Serial.println("shape C turn");
    }




    /////////// TUNINGS TUNINGS //////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    //tuneB
    tuneBpot = analogRead(A2);
    if (oldTuneBpot + tresh < tuneBpot || oldTuneBpot - tresh > tuneBpot) {
      if (analogRead(A2) < 512) {
        tuneB = ((float)analogRead(A2) / 1023) + 0.5;
      } else {
        tuneB = ((float)analogRead(A2) / 510);
      }
      oldTuneBpot = tuneBpot + tresh / 2;
      Serial.println("tuneB turn");
    }

    //tuneC
    tuneCpot = analogRead(A3);
    if (oldTuneCpot + tresh < tuneCpot || oldTuneCpot - tresh > tuneCpot) {
      if (analogRead(A3) < 512) {
        tuneC = ((float)analogRead(A3) / 1023) + 0.5;
      } else {
        tuneC = ((float)analogRead(A3) / 510);
      }
      oldTuneCpot = tuneCpot + tresh / 2;
      Serial.println("tuneC turn");
    }

    //Cross mod
    crossModpot = analogRead(A1);
    if (oldCrossModpot + tresh < crossModpot || oldCrossModpot - tresh > crossModpot) {
      crossMod = (float)analogRead(A1) / 512;
      oldCrossModpot = crossModpot + tresh / 2;
      Serial.println("crossmod turn");
    }




    ///////////// VOLUMES VOLUMES /////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    volApot = analogRead(A5);
    if (oldVolApot + tresh2 < volApot || oldVolApot - tresh2 > volApot) {
      vcoAvol = (float)analogRead(A5) / 1023;
      oldVolApot = volApot + tresh2 / 2;
      Serial.println("volA turn");
    }


    volBpot = analogRead(A6);
    if (oldVolBpot + tresh2 < volBpot || oldVolBpot - tresh2 > volBpot) {
      vcoBvol = (float)analogRead(A6) / 1023;
      oldVolBpot = volBpot + tresh2 / 2;
      Serial.println("volB turn");
    }

    volCpot = analogRead(A7);
    if (oldVolCpot + tresh2 < volCpot || oldVolCpot - tresh2 > volCpot) {
      vcoCvol = (float)analogRead(A7) / 1023;
      oldVolCpot = volCpot + tresh2 / 2;
      Serial.println("volC turn");
    }

    volSubpot = analogRead(A21);
    if (oldVolSubpot + tresh2 < volSubpot || oldVolSubpot - tresh2 > volSubpot) {
      Subvol = (float)analogRead(A21) / 1023;
      oldVolSubpot = volSubpot + tresh2 / 2;
      Serial.println("vol sub turn");
    }

    //////////// FILTER FILTER ////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Filter
    cutpot = analogRead(A13);
    if (oldCutpot + tresh < cutpot || oldCutpot - tresh > cutpot) {
      cut = 15000 * (float)analogRead(A13) / 1023 + 15;             /////cut
      oldCutpot = cutpot + tresh / 2;
      Serial.println("cut turn");
    }

    respot = analogRead(A12);
    if (oldRespot + tresh2 < respot || oldRespot - tresh2 > respot) {
      res = 4.5 * (float)analogRead(A12) / 1023 + 1.1;
      oldRespot = respot + tresh2 / 2;
      Serial.println("res turn");
    }

    //Filter Env

    fAttpot = mux0;
    if (oldFAttpot + tresh2 < fAttpot || oldFAttpot - tresh2 > fAttpot) {
      filtAtt = (3000 * (float)mux0 / 1023);
      oldFAttpot = fAttpot + tresh2 / 2;
      Serial.println("filter attack turn");
    }

    fDecpot = mux1;
    if (oldFDecpot + tresh2 < fDecpot || oldFDecpot - tresh2 > fDecpot) {
      filtDec = (3000 * (float)mux1 / 1023);
      oldFDecpot = fDecpot + tresh2 / 2;
      Serial.println("filter decay turn");
    }

    fAmtpot = mux2;
    if (oldFAmtpot + tresh2 < fAmtpot || oldFAmtpot - tresh2 > fAmtpot) {
      filtAmt = (float)mux2 / 512 - 1;
      oldFAmtpot = fAmtpot + tresh2 / 2;
      Serial.println("filter Amt turn");
    }



    //FilterMode
    if (digitalRead(13) == 1) {
      filtModesw = 1;
    } else if (digitalRead(13) == 0) {
      filtModesw = 0;
    }
    if (oldFiltModesw < filtModesw || oldFiltModesw > filtModesw) {
      if (digitalRead(13) == 1) {
        filterMode = 1;
      } else if (digitalRead(13) == 0) {
        filterMode = 0;
      }
      oldFiltModesw = filtModesw;
      Serial.println("filter mode switch");
    }



    /////////////// MAIN ENVELOPE ENVELOPE ////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    attpot = analogRead(A25);
    if (oldAttpot + tresh2 < attpot || oldAttpot - tresh2 > attpot) {
      envAtt = 3000 * (float)analogRead(A25) / 1023;
      oldAttpot = attpot + tresh2 / 2;
      Serial.println("Attack turn");
    }

    decpot = analogRead(A26);
    if (oldDecpot + tresh2 < decpot || oldDecpot - tresh2 > decpot) {
      envDec = 5000 * (float)analogRead(A26) / 1023;
      envRel = 5000 * (float)analogRead(A26) / 1023;
      oldDecpot = decpot + tresh2 / 2;
      Serial.println("Decay turn");
    }

    suspot = analogRead(A10);
    if (oldSuspot + tresh2 < suspot || oldSuspot - tresh2 > suspot) {
      envSus = (float)analogRead(A10) / 100;
      oldSuspot = suspot + tresh2 / 2;
      Serial.println("Sustain turn");
    }





    ////////////// LFO A   LFO A  /////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    lfoAmppot = mux3;
    if (oldLfoAmppot + tresh2 < lfoAmppot || oldLfoAmppot - tresh2 > lfoAmppot) {
      if (lfoAdest == 0 && lfoAshape != 2) {
        lfoAamp = (float)mux3 / 1024 / 10;
      } else {
        lfoAamp = (float)mux3 / 1024 / 3;
      }
      oldLfoAmppot = lfoAmppot + tresh2 / 2;
      Serial.println("Lfo A amp turn");
    }

    lfoFreqpot = mux4;
    if (oldLfoFreqpot + tresh2 < lfoFreqpot || oldLfoFreqpot - tresh2 > lfoFreqpot) {
      lfoAfreq = 20 * (float)mux4 / 1024 + 0.1;
      oldLfoFreqpot = lfoFreqpot + tresh2 / 2;
      Serial.println("Lfo A Freq turn");
    }

    lfoAttpot = mux5;
    if (oldLfoAttpot + tresh2 < lfoAttpot || oldLfoAttpot - tresh2 > lfoAttpot) {
      lfoAdel = 2000 * (float)mux5 / 1024;
      lfoAatt = 3000 * (float)mux5 / 1024;
      oldLfoAttpot = lfoAttpot + tresh2 / 2;
      Serial.println("Lfo A Att turn");
    }

    lfoDecpot = mux6;
    if (oldLfoDecpot + tresh2 < lfoDecpot || oldLfoDecpot - tresh2 > lfoDecpot) {
      lfoAdec = 4000 * (float)mux6 / 1024;
      lfoArel = 4000 * (float)mux6 / 1024;
      oldLfoDecpot = lfoDecpot + (tresh2 / 2);
      Serial.println("Lfo A Dec turn");
    }

    lfoSuspot = mux7;
    if (oldLfoSuspot + tresh2 * 2 < lfoSuspot || oldLfoSuspot - tresh2 * 2 > lfoSuspot) {
      lfoAsus = (float)mux7 / 1024;
      oldLfoSuspot = lfoSuspot + ((tresh2 * 2) / 2);
      Serial.println("Lfo A Sus turn");
    }


    //lfoA destination
    if (digitalRead(24) == 1) { //lfo - pitch
      lfoDestsw = 0;
    } else if ( digitalRead(24) == 0 && digitalRead(25) == 0) { //lfo - filter
      lfoDestsw = 1;
    } else if (digitalRead(25) == 1) { //lfo - amp
      lfoDestsw = 2;
    }
    if (oldLfoDestsw < lfoDestsw || oldLfoDestsw > lfoDestsw) {
      if (digitalRead(24) == 1) { //lfo - pitch
        lfoAdest = 0;
      } else if ( digitalRead(24) == 0 && digitalRead(25) == 0) { //lfo - filter
        lfoAdest = 1;
      } else if (digitalRead(25) == 1) { //lfo - amp
        lfoAdest = 2;
      }
      oldLfoDestsw = lfoDestsw;
      Serial.println("Lfo dest switch");
    }



    //lfoA shape
    if (digitalRead(26) == 1) {
      lfoShapesw = 0;
    } else if ( digitalRead(26) == 0 && digitalRead(27) == 0) {
      lfoShapesw = 1;
    } else if (digitalRead(27) == 1) {
      lfoShapesw = 2;
    }

    if (oldLfoShapesw < lfoShapesw || oldLfoShapesw > lfoShapesw) {
      if (digitalRead(26) == 1) {
        lfoAshape = 0;
      } else if ( digitalRead(26) == 0 && digitalRead(27) == 0) {
        lfoAshape = 1;
      } else if (digitalRead(27) == 1) {
        lfoAshape = 2;
      }
      oldLfoShapesw = lfoShapesw;
      Serial.println("Lfo shape switch");
    }



    ///////////// LFO B    LFO B //////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    lfoBAmppot = analogRead(A14);
    if (oldLfoBAmppot + tresh2 < lfoBAmppot || oldLfoBAmppot - tresh2 > lfoBAmppot) {
      lfoBamp = (float)analogRead(A14) / 1023;
      oldLfoBAmppot = lfoBAmppot + tresh2 / 2;
      Serial.println("Lfo B amp turn");
    }

    lfoBFreqpot = analogRead(A22);
    if (oldLfoBFreqpot + tresh2 < lfoBFreqpot || oldLfoBFreqpot - tresh2 > lfoBFreqpot) {
      lfoBfreq = 5 * (float)analogRead(A22) / 1023 + 0.1;
      oldLfoBFreqpot = lfoBFreqpot + tresh2 / 2;
      Serial.println("Lfo B freq turn");
    }






    //////////////// FX FX FX FX //////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Delay
    dlyAmtpot = analogRead(A16);
    if (oldDlyAmtpot + tresh2 < dlyAmtpot || oldDlyAmtpot - tresh2 > dlyAmtpot) {
      dlyAmt = (float)analogRead(A16) / 1100 - 0.1;
      if (dlyAmt < 0) {
        dlyAmt = 0;
      }
      oldDlyAmtpot = dlyAmtpot + tresh2 / 2;
      Serial.println("Dly amt turn");
    }


    dlyTimepot = analogRead(A17);
    if (oldDlyTimepot + tresh2 < dlyTimepot || oldDlyTimepot - tresh2 > dlyTimepot) {
      dlyTimeL = analogRead(A17) / 2.5;
      dlyTimeR = analogRead(A17) / 1.25;
      oldDlyTimepot = dlyTimepot + tresh2 / 2;
      Serial.println("Dly time turn");
    }



    //Reverb
    revMixpot = analogRead(A19);
    if (oldRevMixpot + tresh2 < revMixpot || oldRevMixpot - tresh2 > revMixpot) {
      revMix = ((float)analogRead(A19) / 1024 / 1.2);
      oldRevMixpot = revMixpot + tresh2 / 2;
      Serial.println("Rev mix turn");
    }


    revSizepot = analogRead(A18);
    if (oldRevSizepot + tresh2 < revSizepot || oldRevSizepot - tresh2 > revSizepot) {
      revSize = ((float)analogRead(A18) / 1024 - 0.01);
      oldRevSizepot = revSizepot + tresh2 / 2;
      Serial.println("Rev size turn");
    }
  }
}
