// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStatAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UStatAttributeSet();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UStatAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paradise_Seekers();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStatAttributeSet ********************************************************
void UStatAttributeSet::StaticRegisterNativesUStatAttributeSet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStatAttributeSet;
UClass* UStatAttributeSet::GetPrivateStaticClass()
{
	using TClass = UStatAttributeSet;
	if (!Z_Registration_Info_UClass_UStatAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StatAttributeSet"),
			Z_Registration_Info_UClass_UStatAttributeSet.InnerSingleton,
			StaticRegisterNativesUStatAttributeSet,
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
	return Z_Registration_Info_UClass_UStatAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatAttributeSet_NoRegister()
{
	return UStatAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StatAttributeSet.h" },
		{ "ModuleRelativePath", "Public/StatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPoint_MetaData[] = {
		{ "Category", "StatAttributeSet" },
		{ "ModuleRelativePath", "Public/StatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "StatAttributeSet" },
		{ "ModuleRelativePath", "Public/StatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPoint_MetaData[] = {
		{ "Category", "StatAttributeSet" },
		{ "ModuleRelativePath", "Public/StatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicAttackPoint_MetaData[] = {
		{ "Category", "StatAttributeSet" },
		{ "ModuleRelativePath", "Public/StatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDefense_MetaData[] = {
		{ "Category", "StatAttributeSet" },
		{ "ModuleRelativePath", "Public/StatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicDefense_MetaData[] = {
		{ "Category", "StatAttributeSet" },
		{ "ModuleRelativePath", "Public/StatAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagicAttackPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackDefense;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagicDefense;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_HealthPoint = { "HealthPoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatAttributeSet, HealthPoint), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPoint_MetaData), NewProp_HealthPoint_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatAttributeSet, Speed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_AttackPoint = { "AttackPoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatAttributeSet, AttackPoint), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPoint_MetaData), NewProp_AttackPoint_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_MagicAttackPoint = { "MagicAttackPoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatAttributeSet, MagicAttackPoint), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicAttackPoint_MetaData), NewProp_MagicAttackPoint_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_AttackDefense = { "AttackDefense", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatAttributeSet, AttackDefense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDefense_MetaData), NewProp_AttackDefense_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_MagicDefense = { "MagicDefense", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatAttributeSet, MagicDefense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicDefense_MetaData), NewProp_MagicDefense_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_HealthPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_AttackPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_MagicAttackPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_AttackDefense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatAttributeSet_Statics::NewProp_MagicDefense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Paradise_Seekers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatAttributeSet_Statics::ClassParams = {
	&UStatAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatAttributeSet()
{
	if (!Z_Registration_Info_UClass_UStatAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatAttributeSet.OuterSingleton, Z_Construct_UClass_UStatAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatAttributeSet.OuterSingleton;
}
UStatAttributeSet::UStatAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatAttributeSet);
UStatAttributeSet::~UStatAttributeSet() {}
// ********** End Class UStatAttributeSet **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StatAttributeSet_h__Script_Paradise_Seekers_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatAttributeSet, UStatAttributeSet::StaticClass, TEXT("UStatAttributeSet"), &Z_Registration_Info_UClass_UStatAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatAttributeSet), 1480024389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StatAttributeSet_h__Script_Paradise_Seekers_429095262(TEXT("/Script/Paradise_Seekers"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StatAttributeSet_h__Script_Paradise_Seekers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StatAttributeSet_h__Script_Paradise_Seekers_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
