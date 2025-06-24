// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomStateMachine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomStateMachine() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomState_NoRegister();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomStateMachine();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomStateMachine_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paradise_Seekers();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomStateMachine ******************************************************
void UCustomStateMachine::StaticRegisterNativesUCustomStateMachine()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomStateMachine;
UClass* UCustomStateMachine::GetPrivateStaticClass()
{
	using TClass = UCustomStateMachine;
	if (!Z_Registration_Info_UClass_UCustomStateMachine.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomStateMachine"),
			Z_Registration_Info_UClass_UCustomStateMachine.InnerSingleton,
			StaticRegisterNativesUCustomStateMachine,
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
	return Z_Registration_Info_UClass_UCustomStateMachine.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomStateMachine_NoRegister()
{
	return UCustomStateMachine::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomStateMachine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CustomStateMachine.h" },
		{ "ModuleRelativePath", "Public/CustomStateMachine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateList_MetaData[] = {
		{ "Category", "StateList" },
		{ "ModuleRelativePath", "Public/CustomStateMachine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called every frame\n" },
#endif
		{ "ModuleRelativePath", "Public/CustomStateMachine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every frame" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateList_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_StateList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomStateMachine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomStateMachine_Statics::NewProp_StateList_ElementProp = { "StateList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCustomStateMachine_Statics::NewProp_StateList = { "StateList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomStateMachine, StateList), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateList_MetaData), NewProp_StateList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomStateMachine_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomStateMachine, CurrentState), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomStateMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomStateMachine_Statics::NewProp_StateList_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomStateMachine_Statics::NewProp_StateList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomStateMachine_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomStateMachine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomStateMachine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Paradise_Seekers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomStateMachine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomStateMachine_Statics::ClassParams = {
	&UCustomStateMachine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCustomStateMachine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomStateMachine_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomStateMachine_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomStateMachine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomStateMachine()
{
	if (!Z_Registration_Info_UClass_UCustomStateMachine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomStateMachine.OuterSingleton, Z_Construct_UClass_UCustomStateMachine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomStateMachine.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomStateMachine);
UCustomStateMachine::~UCustomStateMachine() {}
// ********** End Class UCustomStateMachine ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomStateMachine_h__Script_Paradise_Seekers_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomStateMachine, UCustomStateMachine::StaticClass, TEXT("UCustomStateMachine"), &Z_Registration_Info_UClass_UCustomStateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomStateMachine), 4019421705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomStateMachine_h__Script_Paradise_Seekers_1442271678(TEXT("/Script/Paradise_Seekers"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomStateMachine_h__Script_Paradise_Seekers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomStateMachine_h__Script_Paradise_Seekers_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
