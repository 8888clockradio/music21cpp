//music21 CPP Copyright 2022 George Charles Rosar II
//interval.h
#pragma once

#include "base.h"
#include "common.h"
#include "exceptions21.h"

#include "pitch.h"
#include "common/decorators.h"

#include "environment.h"

class Direction : public IntEnum
{

};

class Specifier : public enum.IntEnum
{

};

class IntervalException : public Music21Exception
{

};

class IntervalBase : public Music21Object
{

};
class GenericInterval : public IntervalBase
{

};
class DiatonicInterval : public IntervalBase
{

};
class ChromaticInterval : public IntervalBase
{

};

class Interval : public IntervalBase
{

};
