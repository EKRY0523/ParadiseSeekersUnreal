// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterStorageComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterStorageComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCharacterStorageComponent();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCharacterStorageComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paradise_Seekers();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterStorageComponent ***********************************************
void UCharacterStorageComponent::StaticRegisterNativesUCharacterStorageComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterStorageComponent;
UClass* UCharacterStorageComponent::GetPrivateStaticClass()
{
	using TClass = UCharacterStorageComponent;
	if (!Z_Registration_Info_UClass_UCharacterStorageComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterStorageComponent"),
			Z_Registration_Info_UClass_UCharacterStorageComponent.InnerSingleton,
			StaticRegisterNativesUCharacterStorageComponent,
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
	return Z_Registration_Info_UClass_UCharacterStorageComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterStorageComponent_NoRegister()
{
	return UCharacterStorageComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterStorageComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterStorageComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterStorageComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterStorageComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Paradise_Seekers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterStorageComponent_Statics::ClassParams = {
	&UCharacterStorageComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterStorageComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterStorageComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterStorageComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterStorageComponent.OuterSingleton, Z_Construct_UClass_UCharacterStorageComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterStorageComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterStorageComponent);
UCharacterStorageComponent::~UCharacterStorageComponent() {}
// ********** End Class UCharacterStorageComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CharacterStorageComponent_h__Script_Paradise_Seekers_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterStorageComponent, UCharacterStorageComponent::StaticClass, TEXT("UCharacterStorageComponent"), &Z_Registration_Info_UClass_UCharacterStorageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterStorageComponent), 296749180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CharacterStorageComponent_h__Script_Paradise_Seekers_1312374402(TEXT("/Script/Paradise_Seekers"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CharacterStorageComponent_h__Script_Paradise_Seekers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CharacterStorageComponent_h__Script_Paradise_Seekers_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
