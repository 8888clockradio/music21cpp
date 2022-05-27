//music21 CPP Copyright 2022 George Charles Rosar II
//prebase.h

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
#include <vector>
#include <tuple>
#include <iostream>
#include <typeinfo>  //for 'typeid' to work  
#include <map>

//https://www.delftstack.com/howto/cpp/cpp-create-a-dictionary/
//https://stackoverflow.com/questions/1986418/typeid-versus-typeof-in-c

using std::map;

template<typename Map>

struct StringDictionaryStruct {
	map<String, type_info*>* theStringArray;
	uint16_t theSizeOfArray;
	uint16_t highLevelClassIDinArray;
};

struct StringArray {
	String* theStringArray;
	uint16_t theCountOfArray;
	uint16_t highLevelClassIDinArray;
};

class ProtoM21Object {
	public:
		bool isClassOrSubclass(void classFilterListSequenceIn);
		areDisjoint(StringArray* set1, StringArray* set2);
		StringArray* classes();
		StringArray* classSet();
		
		std::vector<map<String, type_info*>>  __slots__ = {
			{

			}
		};
};