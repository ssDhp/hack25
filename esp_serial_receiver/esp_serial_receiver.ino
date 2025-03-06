struct Data {
  int r, g, b, a;
  float p_kpa, alt_m;
};

Data curr_data;

void setup() {
  Serial.begin(9600);  // Start serial communication
  while (!Serial);

  Serial1.begin(9600, SERIAL_8N1, 44, 43); 
  while (!Serial1);
  
  Serial.println("Init"); // Start serial communication
}

void loop() {
  // Serial.println("11");
  // if (Serial1.available()) {
  //   Serial.println(Serial1.available());
  // }
  //   Serial.println();
  //   // Read the struct from serial
    
  //   Serial1.readBytes((char*)&curr_data, sizeof(curr_data));

  //   // Now myData contains the values sent
  //   Serial.println(curr_data.r);
  //   Serial.println(curr_data.g);
  //   Serial.println(curr_data.b);
  //   Serial.println(curr_data.a);
  //   Serial.println(curr_data.p_kpa);
  //   Serial.println(curr_data.alt_m);
  // }
  Serial1.println("a");
  delay(100);
}
