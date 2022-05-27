//music21 CPP Copyright 2022 George Charles Rosar II
//articulations.h
#pragma once

#include "base.h"
#include "common.h"
#include "exceptions21.h"
#include "environment.h"
#include "style.h"

class ArticulationException : public Music21Exception
{

};

class Articulation : public Music21Object
{

};

class LengthArticulation : public Articulation
{

};

class Accent : public DynamicArticulation
{

};

class StrongAccent : public Accent
{

};

class Staccato : public LengthArticulation
{

};

class Staccatissimo : public Staccato
{

};

class Spiccato : public Staccato, Accent
{

};

class Tenuto : public LengthArticulation
{

};

class DetachedLegato : public LengthArticulation
{

};

class IndeterminateSlide : public PitchArticulation
{

};

class Scoop : public IndeterminateSlide
{

};

class Plop : public IndeterminateSlide
{

};

class Doit : public IndeterminateSlide
{

};

class Falloff : public IndeterminateSlide
{

};

class BreathMark : public LengthArticulation
{

};

class Caesura : public Articulation
{

};

class Stress : public DynamicArticulation, LengthArticulation
{

};

class Unstress : public DynamicArticulation
{

};

class TechnicalIndication : public Articulation
{

};


class Harmonic : public TechnicalIndication
{

};

class Bowing : public TechnicalIndication
{

};

class Fingering : public TechnicalIndication
{

};

class UpBow : public Bowing
{

};

class DownBow : public Bowing
{

};

class StringHarmonic : public Bowing, Harmonic
{

};

class OpenString : public Bowing
{

};

class StringIndication : public Bowing
{

};

class StringThumbPosition : public Bowing
{

};

class StringFingering : public StringIndication, Fingering
{

};

class Pizzicato : public Bowing
{

};

class SnapPizzicato : public Pizzicato
{

};

class NailPizzicato : public Pizzicato
{

};

class FretIndication : public TechnicalIndication
{

};

class FrettedPluck : public FretIndication, Fingering
{

};

class HammerOn : public FretIndication
{

};

class PullOff : public FretIndication
{

};

class FretBend : public FretIndication
{

};

class FretTap : public FretIndication
{

};

class WindIndication : public TechnicalIndication
{

};

class WoodwindIndication : public WindIndication
{

};

class BrassIndication : public WindIndication
{

};

class TonguingIndication : public WindIndication
{

};

class DoubleTongue : public TonguingIndication
{

};

class TripleTongue : public TonguingIndication
{

};

class Stopped : public WindIndication
{

};
class OrganIndication : public TechnicalIndication
{

};
class OrganHeel : public OrganIndication
{

};
class OrganToe : public OrganIndication
{

};
class HarpIndication : public TechnicalIndication
{

};
class HarpFingerNails : public HarpIndication
{

};
class HandbellIndication : public TechnicalIndication
{

};