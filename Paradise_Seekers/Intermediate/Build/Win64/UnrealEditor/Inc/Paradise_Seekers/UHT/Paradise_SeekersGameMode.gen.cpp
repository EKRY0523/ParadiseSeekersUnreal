// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paradise_Seekers/Paradise_SeekersGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParadise_SeekersGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_AParadise_SeekersGameMode();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_AParadise_SeekersGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paradise_Seekers();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AParadise_SeekersGameMode ************************************************
void AParadise_SeekersGameMode::StaticRegisterNativesAParadise_SeekersGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AParadise_SeekersGameMode;
UClass* AParadise_SeekersGameMode::GetPrivateStaticClass()
{
	using TClass = AParadise_SeekersGameMode;
	if (!Z_Registration_Info_UClass_AParadise_SeekersGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Paradise_SeekersGameMode"),
			Z_Registration_Info_UClass_AParadise_SeekersGameMode.InnerSingleton,
			StaticRegisterNativesAParadise_SeekersGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AParadise_SeekersGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AParadise_SeekersGameMode_NoRegister()
{
	return AParadise_SeekersGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AParadise_SeekersGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Paradise_SeekersGameMode.h" },
		{ "ModuleRelativePath", "Paradise_SeekersGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParadise_SeekersGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AParadise_SeekersGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Paradise_Seekers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParadise_SeekersGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParadise_SeekersGameMode_Statics::ClassParams = {
	&AParadise_SeekersGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008803ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParadise_SeekersGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AParadise_SeekersGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParadise_SeekersGameMode()
{
	if (!Z_Registration_Info_UClass_AParadise_SeekersGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParadise_SeekersGameMode.OuterSingleton, Z_Construct_UClass_AParadise_SeekersGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParadise_SeekersGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParadise_SeekersGameMode);
AParadise_SeekersGameMode::~AParadise_SeekersGameMode() {}
// ********** End Class AParadise_SeekersGameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Paradise_SeekersGameMode_h__Script_Paradise_Seekers_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParadise_SeekersGameMode, AParadise_SeekersGameMode::StaticClass, TEXT("AParadise_SeekersGameMode"), &Z_Registration_Info_UClass_AParadise_SeekersGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParadise_SeekersGameMode), 131721484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Paradise_SeekersGameMode_h__Script_Paradise_Seekers_3402746644(TEXT("/Script/Paradise_Seekers"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Paradise_SeekersGameMode_h__Script_Paradise_Seekers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Paradise_SeekersGameMode_h__Script_Paradise_Seekers_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
