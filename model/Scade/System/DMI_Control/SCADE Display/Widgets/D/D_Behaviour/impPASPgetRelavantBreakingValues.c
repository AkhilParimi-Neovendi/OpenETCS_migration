#include "kcg_types.h"
#include "impPASPgetRelavantBreakingValues.h"

 
void impPASPgetRelavantBreakingValues_PASP( 
 
/* PASP::impPASPgetRelavantBreakingValues::CPS */ kcg_float32 CPS,
  /* PASP::impPASPgetRelavantBreakingValues::Distances */ tPASP_Array *Distances,
  /* PASP::impPASPgetRelavantBreakingValues::Speeds */ tPASP_Array *Speeds,
  /* PASP::impPASPgetRelavantBreakingValues::FilteredDistances */ tPASP_Array *FilteredDistances,
  /* PASP::impPASPgetRelavantBreakingValues::filteredSpeeds */ tPASP_Array *filteredSpeeds)
{
	kcg_int32 i;
	kcg_int32 j;
	kcg_int32 lastIndex = 0;
	kcg_float32 maxSSPDist = 0.0;

	(*FilteredDistances)[0] = (*Distances)[1];
	(*filteredSpeeds)[0] = (kcg_float32)4.0;


	for(i = 0; i <= 9; i++)
	{
		// Search for end of SSP (indicated as -1.0 for the speed value)
		if((*Speeds)[i] < 0.0)
		{
			maxSSPDist = (*Distances)[i]; 
			break;
		}
	}
	
	for (i = 0; i <= 8; i++) {
		// calculate speed levels for pair of speeds in input array
		kcg_int32 speedLevel1 = utilGetSpeedLevel((*Speeds)[i+1], CPS);
		kcg_int32 speedLevel2 = utilGetSpeedLevel((*Speeds)[i], CPS);
		if ((*Speeds)[i+1] < 0.0){
			(*FilteredDistances)[lastIndex] = maxSSPDist;
			(*filteredSpeeds)[lastIndex] = speedLevel2;
			break;
		} else if (speedLevel1 < speedLevel2) { // Next speedLevel is in a new speed area
			lastIndex++;
			
			(*FilteredDistances)[lastIndex] = (*Distances)[i+2];
			(*filteredSpeeds)[lastIndex] = (kcg_float32)speedLevel1;
		} else if (speedLevel1 == 0) {
			for (j = i+1; j <= 8; j++) {
				(*FilteredDistances)[j] = (*Distances)[i+1];
				(*filteredSpeeds)[lastIndex] = 0;
			}
			break;
		} else if (speedLevel1 >= speedLevel2) { //new speed level is the same as last one
			(*FilteredDistances)[lastIndex] = (*Distances)[i+2]; //just copy the new max distance for the speed level into the existing entry
			(*filteredSpeeds)[lastIndex] = speedLevel2;
		} else {
			(*FilteredDistances)[i+1] = 1337.0;
		}
	}
}
 
   
 
kcg_int32 utilGetSpeedLevel (kcg_float32 value1, kcg_float32 referenceValue) {
	if ((int)referenceValue == 0) {
		return 4;
	}

	if(value1 == -1.0)
	{
		return 0;
	}
	kcg_float32 value1Percent = (value1/referenceValue);
	
	if (value1Percent > 0.99) {
		return 4;
	} else if (0.99 >= value1Percent && value1Percent >= 0.75) {
		return 3;
	} else if (0.75 > value1Percent && value1Percent >= 0.50) {
		return 2;
	} else if (0.50 > value1Percent && value1Percent >= 0.01) {
		return 1;
	} else if (0.01 > value1Percent) {
		return 0;
	}
 
}
 

 
 
 
