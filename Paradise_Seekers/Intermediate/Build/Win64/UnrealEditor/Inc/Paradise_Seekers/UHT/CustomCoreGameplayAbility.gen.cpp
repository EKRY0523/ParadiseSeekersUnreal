// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomCoreGameplayAbility.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomCoreGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomCoreGameplayAbility();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomCoreGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paradise_Seekers();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomCoreGameplayAbility Function SetupVariables ***********************
struct Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics
{
	struct CustomCoreGameplayAbility_eventSetupVariables_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomCoreGameplayAbility" },
		{ "ModuleRelativePath", "Public/CustomCoreGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomCoreGameplayAbility_eventSetupVariables_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomCoreGameplayAbility, nullptr, "SetupVariables", Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::CustomCoreGameplayAbility_eventSetupVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::CustomCoreGameplayAbility_eventSetupVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomCoreGameplayAbility::execSetupVariables)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupVariables(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UCustomCoreGameplayAbility Function SetupVariables *************************

// ********** Begin Class UCustomCoreGameplayAbility ***********************************************
void UCustomCoreGameplayAbility::StaticRegisterNativesUCustomCoreGameplayAbility()
{
	UClass* Class = UCustomCoreGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetupVariables", &UCustomCoreGameplayAbility::execSetupVariables },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomCoreGameplayAbility;
UClass* UCustomCoreGameplayAbility::GetPrivateStaticClass()
{
	using TClass = UCustomCoreGameplayAbility;
	if (!Z_Registration_Info_UClass_UCustomCoreGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomCoreGameplayAbility"),
			Z_Registration_Info_UClass_UCustomCoreGameplayAbility.InnerSingleton,
			StaticRegisterNativesUCustomCoreGameplayAbility,
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
	return Z_Registration_Info_UClass_UCustomCoreGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomCoreGameplayAbility_NoRegister()
{
	return UCustomCoreGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomCoreGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CustomCoreGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/CustomCoreGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomCoreGameplayAbility_SetupVariables, "SetupVariables" }, // 2532212142
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomCoreGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomCoreGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Paradise_Seekers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCoreGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomCoreGameplayAbility_Statics::ClassParams = {
	&UCustomCoreGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCoreGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomCoreGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomCoreGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UCustomCoreGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomCoreGameplayAbility.OuterSingleton, Z_Construct_UClass_UCustomCoreGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomCoreGameplayAbility.OuterSingleton;
}
UCustomCoreGameplayAbility::UCustomCoreGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomCoreGameplayAbility);
UCustomCoreGameplayAbility::~UCustomCoreGameplayAbility() {}
// ********** End Class UCustomCoreGameplayAbility *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h__Script_Paradise_Seekers_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomCoreGameplayAbility, UCustomCoreGameplayAbility::StaticClass, TEXT("UCustomCoreGameplayAbility"), &Z_Registration_Info_UClass_UCustomCoreGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomCoreGameplayAbility), 292730415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h__Script_Paradise_Seekers_157060070(TEXT("/Script/Paradise_Seekers"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h__Script_Paradise_Seekers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h__Script_Paradise_Seekers_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
