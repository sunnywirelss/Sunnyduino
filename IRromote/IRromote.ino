#include <IRremote.h>

long ir_item;

IRrecv irrecv_18(18);
decode_results results_18;

void setup(){
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  irrecv_18.enableIRIn();
}

void loop(){
  if (irrecv_18.decode(&results_18)) {
    ir_item=results_18.value;
    String type="UNKNOWN";
    String typelist[14]={"UNKNOWN", "NEC", "SONY", "RC5", "RC6", "DISH", "SHARP", "PANASONIC", "JVC", "SANYO", "MITSUBISHI", "SAMSUNG", "LG", "WHYNTER"};
    if(results_18.decode_type>=1&&results_18.decode_type<=13){
      type=typelist[results_18.decode_type];
    }
    Serial.print("IR TYPE:"+type+"  ");
    Serial.println(ir_item,HEX);
    if (ir_item == 0xFFA25D) {
      digitalWrite(10,(!digitalRead(10)));

    }
    irrecv_18.resume();
  } else {
  }

}
