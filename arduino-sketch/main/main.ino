class FPSensor{
    public:
        int pin;

        int read(){
            return analogRead(pin);  
        }
};

FPSensor s0, s1, s2, s3, s4, s5;


void setup() {
    Serial.begin(115200);
    s0.pin = A0;
    s1.pin = A1;
    s2.pin = A2;
    s3.pin = A3;
    s4.pin = A4;
    s5.pin = A5;
}

void loop() {
    Serial.println(
        (String)micros() + "," +
        s0.read() + "," +
        s1.read() + "," +
        s2.read() + "," +
        s3.read() + "," +
        s4.read() + "," +
        s5.read()   
    );
//    Serial.println(1234
//        (String)micros() + "," +
//        s0.read() + "," +
//        s1.read() + "," +
//        s2.read() + "," +
//        s3.read() + "," +
//        s4.read() + "," +
//        s5.read()   
//    );
}
