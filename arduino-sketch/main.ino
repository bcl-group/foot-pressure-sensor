class FPSensor{
    public:
        int pin;

        int read(){
            return analogRead(pin);  
        }
};

FPSensor s0, s1, s2, s3, s4, s5;

void setup() {
    Serial.begin(9600);
    s0.pin = A0;
    s1.pin = A1;
    s2.pin = A2;
    s3.pin = A3;
    s4.pin = A4;
    s5.pin = A5;
}

void loop() {
    Serial.println(
        (String)s0.read() + "," +
        (String)s1.read() + "," +
        (String)s2.read() + "," +
        (String)s3.read() + "," +
        (String)s4.read() + "," +
        (String)s5.read()   
    );
}
