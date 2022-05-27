//music21 CPP Copyright 2022 George Charles Rosar II
//tie.h
#pragma once

#include "exceptions21.h"
#include "common/common.h"
#include "prebase.h"

class TieException : public Music21Exception
{

};

class Tie : public ProtoM21Object, SlottedObjectMixin
{

};

