// Bryce Noble 2024. All Rights Reserved.


#include "MontageManagerComponent.h"

DEFINE_LOG_CATEGORY(LogMontageManagerComponent);

// Sets default values for this component's properties
UMontageManagerComponent::UMontageManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UMontageManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMontageManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

UMontageList* UMontageManagerComponent::FindMontageListByTag(FName input)
{
	for (const FMontageListStruct list : MontageLists)
	{
		if (input == list.Tag)
		{
			return list.MontageList;
		}
	}
	UE_LOGFMT(LogMontageManagerComponent, Error, "MontageManager::FindMontageListByTag: Specified {0} not found! returned nullptr", input);
	return nullptr;
}
