//#include <M5StickC.h>
#include <M5StickCPlus.h>

#include <Adafruit_PWMServoDriver.h>
#include <Adafruit_NeoPixel.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40); 
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x41);

#define SERVOMIN 102    // 最小パルス幅
#define SERVOMAX 492    // 最大パルス幅

#define LED_PIN 26
#define MUMPIXELS 24

int led_color[9][3] = {{0,0,0},{255,0,0},{255,140,0},{255,255,0},{0,255,0},{0,255,255},{0,0,125},{148,0,212},{255,250,250}};
Adafruit_NeoPixel pixels(MUMPIXELS, LED_PIN, NEO_RGB + NEO_KHZ800);


 // ぐーちょきぱー
    uint8_t gakufu_0[150][5] = {
      {0,0,0,0,0},   //まっ
      {0,0,0,0,0},   //まっ
      {0,0,0,0,0},   //まっ
      {0,0,0,0,0},   //まっ
      {0,10,10,0,0},   //か
      {0,20,20,0,0},   //な
      {0,30,30,0,0},   //お
      {0,40,40,0,0},   //は
      {0,50,50,0,0},   //な
      {0,60,60,0,0},   //な
      {0,70,70,0,0},   //な
      {0,80,80,0,0},   //な
      {0,90,90,0,0},   //な
      {0,100,100,0,0},   //な
      {0,110,110,0,0},   //な
      {0,120,120,0,0},   //な
      {0,130,130,0,0},   //な
      {0,140,140,0,0},   //な
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な      
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な       

      {10,150,150,10,10},   //な
      {20,150,150,20,20},   //な
      {30,150,150,30,30},   //な            
      {40,150,150,40,40},   //な
      {50,150,150,50,50},   //な
      {60,150,150,60,60},   //な       
      {70,150,150,70,70},   //な
      {80,150,150,80,80},   //な
      {90,150,150,90,90},   //な            
      {100,150,150,100,100},   //な
      {110,150,150,110,110},   //な
      {120,150,150,120,120},   //な        
      {130,150,150,130,130},   //な
      {140,150,150,140,140},   //な
      {150,150,150,150,150},   //な       
      {150,150,150,150,150},   //な         
      {150,150,150,150,150},   //な         
      {150,150,150,150,150},   //な         
      {150,150,150,150,150},   //な       
      {150,150,150,150,150},   //な         
      {150,150,150,150,150},   //な         
      {150,150,150,150,150},   //な          
      {150,150,150,150,150},   //な         
      {150,150,150,150,150},   //な          
      
 


      {140,140,140,140,140},   //な
      {130,130,130,130,130},   //な
      {120,120,120,120,120},   //な
      {110,110,110,110,110},   //な
      {100,100,100,100,100},   //な
      {90,90,90,90,90},   //な
      {80,80,80,80,80},   //な
      {70,70,70,70,70},   //な
      {60,60,60,60,60},   //な
      {50,50,50,50,50},   //な
      {40,40,40,40,40},   //は
      {30,30,30,30,30},   //お
      {20,20,20,20,20},   //な
      {10,10,10,10,10},   //か
      {0,0,0,0,0},   //まっ



      {250,250,250,250,250},   //の   

      {0,0,0,0,0},   //まっ
      {0,10,10,0,0},   //か
      {0,20,20,0,0},   //な
      {0,30,30,0,0},   //お
      {0,40,40,0,0},   //は
      {0,50,50,0,0},   //な
      {0,60,60,0,0},   //な
      {0,70,70,0,0},   //な
      {0,80,80,0,0},   //な
      {0,90,90,0,0},   //な
      {0,100,100,0,0},   //な
      {0,110,110,0,0},   //な
      {0,120,120,0,0},   //な
      {0,130,130,0,0},   //な
      {0,140,140,0,0},   //な
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な
      {0,150,150,0,0},   //な

      {0,140,140,0,0},   //な
      {0,130,130,0,0},   //な
      {0,120,120,0,0},   //な
      {0,110,110,0,0},   //な
      {0,100,100,0,0},   //な
      {0,90,90,0,0},   //な
      {0,80,80,0,0},   //な
      {0,70,70,0,0},   //な
      {0,60,60,0,0},   //な
      {0,50,50,0,0},   //な
      {0,40,40,0,0},   //は
      {0,30,30,0,0},   //お
      {0,20,20,0,0},   //な
      {0,10,10,0,0},   //か
      {0,0,0,0,0},   //まっ

      {250,250,250,250,250},   //の


      {250,250,250,250,250},   //の


      
      {250,250,250,250,250},   //の





    };



 // も
    uint8_t gakufu_1[150][5] = {
      {0,0,0,0,0},        //まっ
      {0,0,0,0,0},        //まっ      
      {0,0,0,0,0},        //まっ      
      {0,0,0,0,0},        //まっ
      {20,20,20,20,20},   //な
      {40,40,40,40,40},   //は
      {60,60,60,60,60},   //な
      {80,80,80,80,80},   //な
      {100,100,100,100,100},   //な

      {90,90,90,90,90},   //
      {90,90,90,90,90},   //
      {90,90,90,90,80},   //
      {90,90,90,80,70},   //
      {90,90,80,70,60},   //
      {90,80,70,60,50},   //
      {80,70,60,50,40},   //
      {70,60,50,40,50},   //
      {60,50,40,50,60},   //
      {50,40,50,60,70},   //
      {40,50,60,70,80},   //
      {50,60,70,80,90},   //
      {60,70,80,90,80},   //
      {70,80,90,80,70},   //
      {80,90,80,70,60},   //
      {90,80,70,60,50},   //
      {80,70,60,50,40},   //

      {70,60,50,40,50},   //
      {60,50,40,50,60},   //
      {50,40,50,60,70},   //
      {40,50,60,70,80},   //
      {50,60,70,80,90},   //
      
      {60,70,80,90,80},   //
      {70,80,90,80,70},   //
      {80,90,80,70,60},   //
      {90,80,70,60,50},   //
      {80,70,60,50,40},   //

      {70,60,50,40,50},   //
      {60,50,40,50,60},   //
      {50,40,50,60,70},   //
      {40,50,60,70,80},   //
      {50,60,70,80,90},   //
      
      {60,70,80,90,80},   //
      {70,80,90,80,70},   //
      {80,90,80,70,60},   //
      {90,80,70,60,50},   //
      {80,70,60,50,40},   //

      {70,60,50,40,30},   //
      {60,50,40,30,20},   //
      {50,40,30,20,10},   //
      {40,30,20,10,00},   //
      {30,20,10,00,00},   //
      {20,10,00,00,00},   //
      {10,00,00,00,00},   //
      {00,00,00,00,00},   //

      {250,250,250,250,250},   //の
    };


 // ぱー
    uint8_t gakufu_2[150][5] = {
      {0,0,0,0,0},        //まっ
      {0,0,0,0,0},        //まっ      
      {0,0,0,0,0},        //まっ      
      {0,0,0,0,0},        //まっ
      {20,20,20,20,20},   //な
      {40,40,40,40,40},   //は
      {60,60,60,60,60},   //な
      {80,80,80,80,80},   //な
      {100,100,100,100,100},   //な
      {120,120,120,120,120},   //な
      {140,140,140,140,140},   //な
      {150,150,150,150,150},   //な

      {250,250,250,250,250},   //の
    };

 // ぐー
    uint8_t gakufu_3[150][5] = {
      {150,150,150,150,150},   //な
      {150,150,150,150,150},   //な      
      {150,150,150,150,150},   //な      
      {150,150,150,150,150},   //な
      {140,140,140,140,140},   //な
      {130,130,130,130,130},   //な
      {120,120,120,120,120},   //な
      {110,110,110,110,110},   //な
      {100,100,100,100,100},   //な
      {90,90,90,90,90},   //な
      {80,80,80,80,80},   //な
      {70,70,70,70,70},   //な
      {60,60,60,60,60},   //な
      {50,50,50,50,50},   //な
      {40,40,40,40,40},   //は
      {30,30,30,30,30},   //お
      {20,20,20,20,20},   //な
      {10,10,10,10,10},   //か
      {0,0,0,0,0},   //まっ

      {250,250,250,250,250},   //の
    };



//uint8_t offset[9]={90,94,97,95,100,92,99,103,96};
//uint8_t offset[9]={90,95,97,97,102,92,102,103,96};

//uint8_t offset[32]={90,111,94,116,101,105,107,110, 102,104,108,95,95,95,95,95, 95,95,95,95,95,95,95,95, 95,95,95,95,95,95,95,95};  //新しい筒
uint8_t offset[32]={90,105,88,110,96,98,101,103, 95,97,101,90,90,90,90,90, 102,112,113,112,105,117,100,118, 104,116,95,95,95,95,95,95};  //新しい筒


uint8_t mode = 0;
uint8_t cnt = 100;
uint8_t gakufu[150][5];
uint8_t speed_wait = 50;


void setup() {
    M5.begin();
    Wire.begin(32,33);  // I2C初期設定32=SDA,33=SCL
    pwm.begin();
    pwm.setPWMFreq(50); // PWMの周波数は50Hz(1サイクル20msec)
    pwm2.begin();
    pwm2.setPWMFreq(50);

    pixels.begin();
    M5.Lcd.setRotation(3);
    Serial.begin(115200);
}



uint8_t sel_menu = 0;
void loop() {
    uint16_t delay_cnt;
    uint8_t i;  

    pixels.clear();   //LED 全部消灯


    if(mode == 0){    
        M5.Lcd.fillScreen(BLACK);  // 画面をクリア
        M5.Lcd.setTextSize(1);
        M5.Lcd.setCursor(0, 0, 2);
        while(1){  
          M5.Lcd.setCursor(0, 0, 2);
          M5.Lcd.setTextColor(NAVY);
          M5.Lcd.print("----- MUSIC BELL -----");
          M5.Lcd.setCursor(20, 16, 2);
          M5.Lcd.setTextColor(LIGHTGREY);
          M5.Lcd.print("gu choki paa");
          M5.Lcd.setTextColor(LIGHTGREY);
          M5.Lcd.print(" ");
          M5.Lcd.setCursor(20, 32, 2);
          M5.Lcd.print("une une");
          M5.Lcd.setCursor(20, 48, 2);
          M5.Lcd.print("paa.");
          M5.Lcd.setTextColor(DARKGREY);
          M5.Lcd.print("");
          M5.Lcd.print("");
          M5.Lcd.setTextColor(LIGHTGREY);
          M5.Lcd.setCursor(56, 63, 2);
          M5.Lcd.setTextColor(ORANGE);
          M5.Lcd.printf("%4c",95);
          M5.Lcd.setCursor(56, 64, 2);
          M5.Lcd.setTextColor(ORANGE);
          M5.Lcd.printf("%4c",95);
          M5.Lcd.setCursor(56, 65, 2);
          M5.Lcd.setTextColor(ORANGE);
          M5.Lcd.printf("%4c",95);
          M5.Lcd.setCursor(20, 64, 2);
          M5.Lcd.setTextColor(LIGHTGREY);
          M5.Lcd.print("guu.");
    
          
          switch(sel_menu){
            default:
            case 0: M5.Lcd.setCursor(0, 16, 2);  break;
            case 1: M5.Lcd.setCursor(0, 32, 2);  break;
            case 2: M5.Lcd.setCursor(0, 48, 2);  break;
            case 3: M5.Lcd.setCursor(0, 64, 2);  break;
          }
          M5.Lcd.setTextColor(ORANGE);
          M5.Lcd.print("<<");
          M5.update();
          if(M5.BtnB.wasPressed()) {
            if(sel_menu < 3)sel_menu++;
            else            sel_menu = 0;
            M5.Lcd.setCursor(0, 16, 2); // スイッチ入力あったらカーソルクリア
            M5.Lcd.setTextColor(LIGHTGREY,BLACK);
            M5.Lcd.print("  ");         // カーソルクリア
            M5.Lcd.setCursor(0, 32, 2); //
            M5.Lcd.print("  ");         //
            M5.Lcd.setCursor(0, 48, 2); //
            M5.Lcd.print("  ");         //      
            M5.Lcd.setCursor(0, 64, 2); //
            M5.Lcd.print("  ");         //      
          }      
          if(M5.BtnA.wasPressed()) {break;  }
        }
    }

  switch(sel_menu){
/*
    case 3:     // インフォメーションを表示
        servo_write(0, 90);
        servo_write(1, 90);
        servo_write(2, 90);
        servo_write(3, 90);
        servo_write(4, 90);
        servo_write(5, 90);
        servo_write(6, 90);
        servo_write(7, 90);
        servo_write(8, 90);
            
            M5.Lcd.fillScreen(BLACK);  // 画面をクリア
            M5.Lcd.setCursor(0, 0, 2); // スイッチ入力あったらカーソルクリア
            M5.Lcd.setTextColor(LIGHTGREY,BLACK);
            M5.Lcd.println("XYZ G senser Logger");
            M5.Lcd.println("4800 records (x 3ch)");
            M5.Lcd.println("10-100msec RecInterval");
            M5.Lcd.println("Onetime record");
            M5.Lcd.println("115200bps Download");
            while(1){
              M5.update();
              if(M5.BtnA.wasPressed() || M5.BtnB.wasPressed()) {break;  }       
            }      
            delay(200);
            break;
*/    
    case 0:     // 測定、記録             
    case 1:     // 測定、記録             
    case 2:     // 記録インターバルを変更する
    case 3:
          if(mode == 0){            
                gakufu_copy(sel_menu);
                for(i = 0 ; i < 32 ; i++){
                  delay(20);
//                  servo_write(i, offset[i]);
                }
                delay(500);
                cnt = 0;
                mode = 1;
          }
            break;
    
  }


  if(mode == 1){

//        servo_write(1, offset[gakufu_0[cnt][0]]);
//        servo_write(2, offset[gakufu_0[cnt][1]]);
//        servo_write(3, offset[gakufu_0[cnt][2]]);
//        servo_write(4, offset[gakufu_0[cnt][3]]);
//        servo_write(5, offset[gakufu_0[cnt][4]]);

        servo_write(1, gakufu[cnt][0]);
        servo_write(2, 150 - gakufu[cnt][1]);
        servo_write(3, 150 - gakufu[cnt][2]);
        servo_write(4, 150 - gakufu[cnt][3]);
        servo_write(5, 150 - gakufu[cnt][4]);




        delay(80);

        cnt += 1;

        if((gakufu[cnt][0] >= 250)){
          mode = 0;
          Serial.print("mode=");
          Serial.println(mode); // 改行
        }





  }




}


//##############################################################
//    サーボを制御する関数
//##############################################################
void servo_write(int ch, int ang){  // 動かすサーボチャンネルと角度を指定
  ang = map(ang, 0, 180, SERVOMIN, SERVOMAX); //角度(0-180)をPWMのパルス幅(100-500)に変換
  pwm.setPWM(ch, 0, ang);
}

//##############################################################
//    データをコピーする
//##############################################################
void gakufu_copy(uint8_t data_No){
  uint8_t d_cnnt;

  switch(data_No){
    case 0:
    default:
      for(d_cnnt = 0; d_cnnt < 150 ; d_cnnt+=1){
        gakufu[d_cnnt][0] = gakufu_0[d_cnnt][0];
        gakufu[d_cnnt][1] = gakufu_0[d_cnnt][1];
        gakufu[d_cnnt][2] = gakufu_0[d_cnnt][2];
        gakufu[d_cnnt][3] = gakufu_0[d_cnnt][3];
        gakufu[d_cnnt][4] = gakufu_0[d_cnnt][4];
        speed_wait = 40;
      }
      break;

    case 1:
      for(d_cnnt = 0; d_cnnt < 150 ; d_cnnt+=1){
        gakufu[d_cnnt][0] = gakufu_1[d_cnnt][0];
        gakufu[d_cnnt][1] = gakufu_1[d_cnnt][1];
        gakufu[d_cnnt][2] = gakufu_1[d_cnnt][2];
        gakufu[d_cnnt][3] = gakufu_1[d_cnnt][3];
        gakufu[d_cnnt][4] = gakufu_1[d_cnnt][4];
        speed_wait = 25;
      }
      break;

    case 2:
      for(d_cnnt = 0; d_cnnt < 150 ; d_cnnt+=1){
        gakufu[d_cnnt][0] = gakufu_2[d_cnnt][0];
        gakufu[d_cnnt][1] = gakufu_2[d_cnnt][1];
        gakufu[d_cnnt][2] = gakufu_2[d_cnnt][2];
        gakufu[d_cnnt][3] = gakufu_2[d_cnnt][3];
        gakufu[d_cnnt][4] = gakufu_2[d_cnnt][4];
        speed_wait = 40;
      }
      break;

    case 3:
      for(d_cnnt = 0; d_cnnt < 150 ; d_cnnt+=1){
        gakufu[d_cnnt][0] = gakufu_3[d_cnnt][0];
        gakufu[d_cnnt][1] = gakufu_3[d_cnnt][1];
        gakufu[d_cnnt][2] = gakufu_3[d_cnnt][2];
        gakufu[d_cnnt][3] = gakufu_3[d_cnnt][3];
        gakufu[d_cnnt][4] = gakufu_3[d_cnnt][4];
        speed_wait = 40;
      }
      break;
  
  }
}




void LED_set(uint8_t adr , uint8_t col){
    adr--;
    //adr = adr * 2;
    pixels.setPixelColor(adr,pixels.Color(led_color[col][1],led_color[col][0],led_color[col][2]));
    pixels.setPixelColor(adr+8,pixels.Color(led_color[col][1],led_color[col][0],led_color[col][2]));
    pixels.setPixelColor(adr+16,pixels.Color(led_color[col][1],led_color[col][0],led_color[col][2]));
    pixels.show();
}
