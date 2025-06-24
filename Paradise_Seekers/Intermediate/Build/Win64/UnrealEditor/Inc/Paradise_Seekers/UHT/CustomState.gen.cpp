// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomState() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomState();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomState_NoRegister();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UStateTransitionData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paradise_Seekers();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomState *************************************************************
void UCustomState::StaticRegisterNativesUCustomState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomState;
UClass* UCustomState::GetPrivateStaticClass()
{
	using TClass = UCustomState;
	if (!Z_Registration_Info_UClass_UCustomState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomState"),
			Z_Registration_Info_UClass_UCustomState.InnerSingleton,
			StaticRegisterNativesUCustomState,
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
	return Z_Registration_Info_UClass_UCustomState.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomState_NoRegister()
{
	return UCustomState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateData_MetaData[] = {
		{ "Category", "CustomState" },
		{ "ModuleRelativePath", "Public/CustomState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomState_Statics::NewProp_StateData = { "StateData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomState, StateData), Z_Construct_UClass_UStateTransitionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateData_MetaData), NewProp_StateData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomState_Statics::NewProp_StateData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomState_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UCustomState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomState_Statics::PropPointers),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomState);
UCustomState::~UCustomState() {}
// ********** End Class UCustomState ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomState_h__Script_Paradise_Seekers_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomState, UCustomState::StaticClass, TEXT("UCustomState"), &Z_Registration_Info_UClass_UCustomState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomState), 535252101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomState_h__Script_Paradise_Seekers_1618022989(TEXT("/Script/Paradise_Seekers"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomState_h__Script_Paradise_Seekers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomState_h__Script_Paradise_Seekers_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
