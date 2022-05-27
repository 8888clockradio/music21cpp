//music21 CPP Copyright 2022 George Charles Rosar II
//note.h

#pragma once
#include <Arduino.h>
#include "exceptions21.h"
#include "prebase.h"
#include "base.h"


class LyricException : public Music21Exception
{

};

class NoteException : public Music21Exception
{

};

class NotRestException : public Music21Exception
{

};

class Lyric : public ProtoM21Object, StyleMixin
{

};

class GeneralNote : public Music21Object
{

};

class Note : public NotRest
{

};

class Unpitched : public NotRest
{

};

class Rest : public GeneralNote
{

};

class Note : public Base {

};