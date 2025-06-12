// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paradise_Seekers/Public/CustomState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomState() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomState();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paradise_Seekers();
// End Cross Module References

// Begin Class UCustomState
void UCustomState::StaticRegisterNativesUCustomState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomState);
UClass* Z_Construct_UClass_UCustomState_NoRegister()
{
	return UCustomState::StaticClass();
}
struct Z_Construct_UClass_UCustomState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CustomState.h" },
		{ "ModuleRelativePath", "Public/CustomState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Paradise_Seekers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomState_Statics::ClassParams = {
	&UCustomState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomState_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomState()
{
	if (!Z_Registration_Info_UClass_UCustomState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomState.OuterSingleton, Z_Construct_UClass_UCustomState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomState.OuterSingleton;
}
template<> PARADISE_SEEKERS_API UClass* StaticClass<UCustomState>()
{
	return UCustomState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomState);
UCustomState::~UCustomState() {}
// End Class UCustomState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomState, UCustomState::StaticClass, TEXT("UCustomState"), &Z_Registration_Info_UClass_UCustomState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomState), 3196923877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomState_h_3744539735(TEXT("/Script/Paradise_Seekers"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
