//Multiplexer read
digitalWrite(28, 0); //A
digitalWrite(29, 0); //B
digitalWrite(30, 0); //C
mux0 = analogRead(muxPots);
delay(wait);

digitalWrite(28, 1);
digitalWrite(29, 0);
digitalWrite(30, 0);
mux1 = analogRead(muxPots);
delay(wait);

digitalWrite(28, 0);
digitalWrite(29, 1);
digitalWrite(30, 0);
mux2 = analogRead(muxPots);
delay(wait);

digitalWrite(28, 1);
digitalWrite(29, 1);
digitalWrite(30, 0);
mux3 = analogRead(muxPots);
delay(wait);

digitalWrite(28, 0);
digitalWrite(29, 0);
digitalWrite(30, 1);
mux4 = analogRead(muxPots);
delay(wait);

digitalWrite(28, 1);
digitalWrite(29, 0);
digitalWrite(30, 1);
mux7 = analogRead(muxPots);
delay(wait);

digitalWrite(28, 0);
digitalWrite(29, 1);
digitalWrite(30, 1);
mux6 = analogRead(muxPots);
delay(wait);

digitalWrite(28, 1);
digitalWrite(29, 1);
digitalWrite(30, 1);
mux5 = analogRead(muxPots);
delay(wait);
