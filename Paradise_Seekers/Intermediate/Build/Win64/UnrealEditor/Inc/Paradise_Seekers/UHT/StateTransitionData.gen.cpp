// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paradise_Seekers/Public/StateTransitionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTransitionData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UStateTransitionData();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UStateTransitionData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paradise_Seekers();
// End Cross Module References

// Begin Class UStateTransitionData
void UStateTransitionData::StaticRegisterNativesUStateTransitionData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTransitionData);
UClass* Z_Construct_UClass_UStateTransitionData_NoRegister()
{
	return UStateTransitionData::StaticClass();
}
struct Z_Construct_UClass_UStateTransitionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StateTransitionData.h" },
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTransitionData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStateTransitionData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Paradise_Seekers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTransitionData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTransitionData_Statics::ClassParams = {
	&UStateTransitionData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTransitionData_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTransitionData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateTransitionData()
{
	if (!Z_Registration_Info_UClass_UStateTransitionData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTransitionData.OuterSingleton, Z_Construct_UClass_UStateTransitionData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateTransitionData.OuterSingleton;
}
template<> PARADISE_SEEKERS_API UClass* StaticClass<UStateTransitionData>()
{
	return UStateTransitionData::StaticClass();
}
UStateTransitionData::UStateTransitionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTransitionData);
UStateTransitionData::~UStateTransitionData() {}
// End Class UStateTransitionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StateTransitionData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateTransitionData, UStateTransitionData::StaticClass, TEXT("UStateTransitionData"), &Z_Registration_Info_UClass_UStateTransitionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTransitionData), 3065735270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StateTransitionData_h_1110043581(TEXT("/Script/Paradise_Seekers"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StateTransitionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StateTransitionData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
