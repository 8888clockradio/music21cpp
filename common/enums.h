//music21 CPP Copyright 2022 George Charles Rosar II
//class/enums.h
#pragma once

class StrEnumMeta : public EnumMeta
{

};

class BooleanEnum : public Enum
{

};

class StrEnum : public String, Enum, StrEnumMeta
{
	public:
		StrEnum();

		StrEnumMeta* metaclass;
};

class ElementSearch : public StrEnum
{

};

class OffsetSpecial : public StrEnum
{

};

class GatherSpanners : public BooleanEnum
{

};

class MeterDivision : public StrEnum
{

};
