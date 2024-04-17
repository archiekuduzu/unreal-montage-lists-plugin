// Bryce Noble 2024. All Rights Reserved.


#include "MontageList.h"

DEFINE_LOG_CATEGORY(LogMontageList);

UMontageList::UMontageList()
{
	
}

int UMontageList::MontageCount()
{
	return MontageList.Num();
}

UAnimMontage* UMontageList::GetRandomMontage()
{
	return MontageList[FMath::RandRange(0, MontageCount())];
}

UAnimMontage* UMontageList::GetMontage(int index)
{
	if (index < MontageCount())
	{
		return MontageList[index];
	}
	UE_LOGFMT(LogMontageList, Error, "MontageList::GetMontage: Attempted to access {0} from array of length {1}! Using Montage at Index 0!", index, MontageCount());
	return MontageList[0];
}
