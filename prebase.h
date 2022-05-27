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
#include "config.h"
#include <vector>
#include <tuple>
#include <map>

typedef std::map<String, std::vector<String>> Dictionary;

class ProtoM21Object {
	public:
		bool isClassOrSubclass(void classFilterListSequenceIn);
		areDisjoint(std::vector<String> set1, std::vector<String> set2);
		std::vector<String> classes();
		std::vector<String> classSet();

		std::vector<String> _classTupleCacheDict = {};
		//_classSetCacheDict['dictname'] = {'Strings', 'String 2'};
		std::vector<String> __slots__ = {};
}