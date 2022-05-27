#pragma once
#include <Arduino.h>
#include "prebase.h"
#include "exceptions21.h"
#include "duration.h"

class Groups {
public:
    Groups();
    append();
    std::vector<String> __slots__ = {};
}

class Music21Object : public ProtoM21Object {
	Music21Object();

	isStream = False;

	uint _id;

	int classSortOrder = 20;

	float _duration = 0.0;
    uint _priority = 0;

/*
        def id(self) -> Union[int, str]:

        def id(self, new_id: Union[int, str]):

        def mergeAttributes(self, other: 'Music21Object') -> None:

        def editorial(self) -> 'music21.editorial.Editorial':

        def editorial(self, ed: 'music21.editorial.Editorial'):

		def hasStyleInformation(self) -> bool:

		def style(self) -> 'music21.style.Style':

		def style(self, newStyle: Optional['music21.style.Style']):

		def quarterLength(self) -> OffsetQL:

		def quarterLength(self, value: OffsetQLIn):

		def derivation(self) -> Derivation:

		def derivation(self, newDerivation: Optional[Derivation]) -> None:

		def clearCache(self, **keywords):

		def getOffsetBySite(
	        self,
	        site: Union['music21.stream.Stream', None],
	        *,
	        returnSpecial: Literal[False] = False,
	    ) -> Union[float, fractions.Fraction]:

	    def getOffsetBySite(
	        self,
	        site: Union['music21.stream.Stream', None],
	        *,
	        returnSpecial: bool = False,
	    ) -> Union[float, fractions.Fraction, str]:

	    def getOffsetBySite(
	        self,
	        site: Union['music21.stream.Stream', None],
	        *,
	        returnSpecial: bool = False,
	    ) -> Union[float, fractions.Fraction, str]:

	    def getOffsetInHierarchy(
	        self,
	        site: Optional['music21.stream.Stream']
	    ) -> Union[float, fractions.Fraction]:

	    def getSpannerSites(self,
            spannerClassList: Optional[Iterable] = None
            ) -> List['music21.spanner.Spanner']:

	    def purgeOrphans(self, excludeStorageStreams=True) -> None:

	    def purgeLocations(self, rescanIsDead=False) -> None:

	    def getContextByClass(
	        self,
	        className: Type[_M21T],
	        *,
	        getElementMethod=ElementSearch.AT_OR_BEFORE,
	        sortByCreationTime=False,
	        followDerivation=True,
	        priorityTargetOnly=False,
	    ) -> Union[_M21T, None]:

	    def getContextByClass(
	        self,
	        className: Union[str, None],
	        *,
	        getElementMethod=ElementSearch.AT_OR_BEFORE,
	        sortByCreationTime=False,
	        followDerivation=True,
	        priorityTargetOnly=False,
	    ) -> Union[Music21Object, None]:

	    def getContextByClass(
	        self,
	        className: Union[Type[_M21T], str, None],
	        *,
	        getElementMethod: ElementSearch = ElementSearch.AT_OR_BEFORE,
	        sortByCreationTime=False,
	        followDerivation=True,
	        priorityTargetOnly=False,
	    ) -> Union[_M21T, Music21Object, None]:

	    def payloadExtractor(checkSite, flatten, innerPositionStart):

	    def wellFormed(checkContextEl, checkSite) -> bool:

	    def contextSites(
	        self,
	        *,
	        callerFirst=None,
	        memo=None,
	        offsetAppend=0.0,
	        sortByCreationTime: Union[str, bool] = False,
	        priorityTarget=None,
	        returnSortTuples=False,
	        followDerivation=True,
	        priorityTargetOnly=False,
	    ):

	    def getAllContextsByClass(self, className):

	    def next(self,
             className: Union[Type[Music21Object], str, None] = None,
             *,
             activeSiteOnly=False):

	    def previous(self,
             className: Union[Type[Music21Object], str, None] = None,
             *,
             activeSiteOnly=False):

		def _getActiveSite(self):

		def _setActiveSite(self, site: Union['music21.stream.Stream', None]):

		def offset(self) -> OffsetQL:

		def offset(self, value: OffsetQLIn):

		def sortTuple(self, useSite=False, raiseExceptionOnMiss=False):

		def _getDuration(self) -> Optional[duration.Duration]:

		def _setDuration(self, durationObj: duration.Duration):

		def informSites(self, changedInformation=None):

		def _getPriority(self):

		def _setPriority(self, value):

		def write(self, fmt=None, fp=None, **keywords):

		def _reprText(self, **keywords):

		def _reprTextLine(self):

		def show(self, fmt=None, app=None, **keywords):

		def containerHierarchy(
	        self,
	        *,
	        followDerivation=True,
	        includeNonStreamDerivations=False
	    ):

	    def splitAtQuarterLength(
	        self,
	        quarterLength,
	        *,
	        retainOrigin=True,
	        addTies=True,
	        displayTiedAccidentals=False
	    ) -> _SplitTuple:

	    def splitByQuarterLengths(
	        self,
	        quarterLengthList: List[Union[int, float]],
	        addTies=True,
	        displayTiedAccidentals=False
	    ) -> _SplitTuple:

	    def splitAtDurations(self) -> _SplitTuple:

	    def measureNumber(self) -> Optional[int]:

	    def _getMeasureOffset(self, includeMeasurePadding=True) -> Union[float, fractions.Fraction]:

	    def _getTimeSignatureForBeat(self) -> 'music21.meter.TimeSignature':

	    def beat(self) -> Union[fractions.Fraction, float]:

	    def beatStr(self) -> str:

	    def beatDuration(self) -> 'music21.duration.Duration':

	    def beatStrength(self) -> float:

	    def _getSeconds(self) -> float:

	    def _setSeconds(self, value: Union[int, float]) -> None:
*/


}

class ElementWrapper : public Music21Object {
	public:
		/*
		obj = None

		def __init__(self, obj=None):
	        super().__init__()
	        self.obj = obj  # object stored here
	    def _reprInternal(self):

	    def __eq__(self, other) -> bool:

	    def __setattr__(self, name: str, value: Any) -> None:

	    def __getattr__(self, name: str) -> Any:
		*/
};

class Music21ObjectException : public Music21Exception {
	public:
		Music21ObjectException();
};

class ElementException : public Music21Exception {
	public:
		ElementException();
};
