//music21 CPP Copyright 2022 George Charles Rosar II
//Music21CPPScreenConfig.h

//define Music21ScreenType to below
//Adafruit_SSD1306 		-	0
//Adafruit_GP9002 		-	1
//Adafruit_HX8340B 		-	2
//Adafruit_PCD8544 		-	3
//Adafruit_SSD1331 		-	4
//Adafruit_SSD1351 		-	5
//Adafruit_ST77xx 		-	6
//Adafruit_ILI9341		-	7

#define Music21ScreenType 5 		//set to Adafruit_SSD1351

#if Music21ScreenType == 5
#define Music21_Adafruit_SPI
#endif