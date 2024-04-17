#include "MontageListActions.h"
#include "MontageList.h"
	 
UClass* FMontageListActions::GetSupportedClass() const
{
	return UMontageList::StaticClass();
}
	 
FText FMontageListActions::GetName() const
{
	return INVTEXT("Montage List");
}
	 
FColor FMontageListActions::GetTypeColor() const
{
	return FColor::Cyan;
}
	 
uint32 FMontageListActions::GetCategories()
{
	return EAssetTypeCategories::Animation;
}