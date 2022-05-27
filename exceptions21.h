//music21 CPP Copyright 2022 George Charles Rosar II
//exceptions21.h
#pragma once
#include <Arduino.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <Audio.h>
#include <string.h>
#include <Bounce.h>
#include "utility/imxrt_hw.h"
#include <core_pins.h>
#include "utility/dspinst.h"
#include <teensy_sample_data.h>
#include <teensy_synth_wavetable.h>
#include <Easing.h>
#include <Music21CPPScreenConfig.h>
//determine which ones needed
#ifdef Music21_Adafruit_I2C
#include <Adafruit_I2CDevice.h>
#elif Music21_Adafruit_SPI
#include <Adafruit_SPIDevice.h>
#endif
#include <Adafruit_GFX.h>
#ifdef Music21ScreenType
    #if Music21ScreenType 	== 0 	//Adafruit_SSD1306
    #elif Music21ScreenType == 1 	//Adafruit_GP9002
    #elif Music21ScreenType == 2 	//Adafruit_HX8340B
    #elif Music21ScreenType == 3 	//Adafruit_PCD8544
    #elif Music21ScreenType == 4 	//Adafruit_SSD1331
    #elif Music21ScreenType == 5 	//Adafruit_SSD1351
#include <Adafruit_SSD1351.h>
    #elif Music21ScreenType == 6 	//Adafruit_ST77xx 
    #elif Music21ScreenType == 7 	//Adafruit_ILI9341
    #else
        //error message
    #endif
#else
    //error message
#endif
#include <iostream>
#include <vector>

class Exception {
	public:
		Exception(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
		void throwException(String theMessageIn);
		void terminateException();
		bool objectThrowsException = false;
#ifdef Music21ScreenType
    #if Music21ScreenType 	== 0 	//Adafruit_SSD1306
    #elif Music21ScreenType == 1 	//Adafruit_GP9002
    #elif Music21ScreenType == 2 	//Adafruit_HX8340B
    #elif Music21ScreenType == 3 	//Adafruit_PCD8544
    #elif Music21ScreenType == 4 	//Adafruit_SSD1331
    #elif Music21ScreenType == 5 	//Adafruit_SSD1351
		Adafruit_SSD1351* theScreen;
    #elif Music21ScreenType == 6 	//Adafruit_ST77xx 
    #elif Music21ScreenType == 7 	//Adafruit_ILI9341
    #else
        //error message
    #endif
#else
    //error message
#endif
		String theExceptionMessage;
		uint8_t theExceptionID;		//the ID in the exceptions vector
}

class Music21Exception : public Exception {
	public:
		Music21Exception(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class StreamException : public Music21Exception {
	public:
		StreamException(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class ImmutableStreamException : public StreamException {
	public:
		ImmutableStreamException(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class MetadataException : public Music21Exception {
	public:
		MetadataException(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class AnalysisException : public Music21Exception {
	public:
		AnalysisException(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class TreeException : public Music21Exception {
	public:
		TreeException(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class InstrumentException : public Music21Exception {
	public:
		InstrumentException(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class Music21CommonException : public Music21Exception {
	public:
		Music21CommonException(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class CorpusException : public Music21Exception {
	public:
		CorpusException(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class GroupException : public Music21Exception {
	public:
		GroupException(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class MeterException : public Music21Exception {
	public:
		MeterException(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class TimeSignatureException: public MeterException {
	public:
		TimeSignatureException(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};

class Music21DeprecationWarning : public UserWarning {
	public:
		Music21DeprecationWarning(String theMessageIn, Adafruit_SPITFT *theOLEDIN, std::vector<Exception> theExceptionsListIN);
};