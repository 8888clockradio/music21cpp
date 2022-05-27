//music21 CPP Copyright 2022 George Charles Rosar II
//exceptions21.h
#pragma once

class Exception {
	public:
		Exception(String theMessageIn);
		void throwException(String theMessageIn);
		void terminateException();
		bool objectThrowsException = false;
		String theExceptionMessage;
}

class Music21Exception : public Exception {
	public:
		Music21Exception(String theMessageIn);
};

class StreamException : public Music21Exception {
	public:
		StreamException(String theMessageIn);
};

class ImmutableStreamException : public StreamException {
	public:
		ImmutableStreamException(String theMessageIn);
};

class MetadataException : public Music21Exception {
	public:
		MetadataException(String theMessageIn);
};

class AnalysisException : public Music21Exception {
	public:
		AnalysisException(String theMessageIn);
};

class TreeException : public Music21Exception {
	public:
		TreeException(String theMessageIn);
};

class InstrumentException : public Music21Exception {
	public:
		InstrumentException(String theMessageIn);
};

class Music21CommonException : public Music21Exception {
	public:
		Music21CommonException(String theMessageIn);
};

class CorpusException : public Music21Exception {
	public:
		CorpusException(String theMessageIn);
};

class GroupException : public Music21Exception {
	public:
		GroupException(String theMessageIn);
};

class MeterException : public Music21Exception {
	public:
		MeterException(String theMessageIn);
};

class TimeSignatureException: public MeterException {
	public:
		TimeSignatureException(String theMessageIn);
};

class Music21DeprecationWarning : public UserWarning {
	public:
		Music21DeprecationWarning(String theMessageIn);
};