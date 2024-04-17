// Bryce Noble 2024. All Rights Reserved.


#include "MontageListFactory.h"
#include "MontageList.h"


UMontageListFactory::UMontageListFactory()
{
	SupportedClass = UMontageList::StaticClass();
	bCreateNew = true;
}
	 
UObject* UMontageListFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UMontageList>(InParent, Class, Name, Flags, Context);
}