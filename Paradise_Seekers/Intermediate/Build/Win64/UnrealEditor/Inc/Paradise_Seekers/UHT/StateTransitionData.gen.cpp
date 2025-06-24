// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTransitionData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStateTransitionData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomState_NoRegister();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UStateTransitionData();
PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UStateTransitionData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paradise_Seekers();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStateTransitionData *****************************************************
void UStateTransitionData::StaticRegisterNativesUStateTransitionData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStateTransitionData;
UClass* UStateTransitionData::GetPrivateStaticClass()
{
	using TClass = UStateTransitionData;
	if (!Z_Registration_Info_UClass_UStateTransitionData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StateTransitionData"),
			Z_Registration_Info_UClass_UStateTransitionData.InnerSingleton,
			StaticRegisterNativesUStateTransitionData,
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
	return Z_Registration_Info_UClass_UStateTransitionData.InnerSingleton;
}
UClass* Z_Construct_UClass_UStateTransitionData_NoRegister()
{
	return UStateTransitionData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStateTransitionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StateTransitionData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//void InitializeStates(UCustomStateMachine* Outer);\n//TSubclassOf<UCustomState> OnAttackInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void InitializeStates(UCustomStateMachine* Outer);\nTSubclassOf<UCustomState> OnAttackInputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackHoldInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnAttackHoldInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnAttackHoldInputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackReleaseInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnAttackReleaseInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnAttackReleaseInputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSkill1Input_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnSkill1InputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnSkill1InputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSkill1HoldInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnSkill1HoldInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnSkill1HoldInputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSkill1ReleaseInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnSkill1ReleaseInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnSkill1ReleaseInputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSkill2Input_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnSkill2InputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnSkill2InputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSkill2HoldInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnSkill2HoldInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnSkill2HoldInputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSkill2ReleaseInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnSkill2ReleaseInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnSkill2ReleaseInputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSkill3Input_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnSkill3InputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnSkill3InputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSkill3HoldInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnSkill3HoldInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnSkill3HoldInputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSkill3ReleaseInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnSkill3ReleaseInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnSkill3ReleaseInputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDodgeInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnDodgeInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnDodgeInputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDodgeHoldInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnDodgeHoldInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnDodgeHoldInputClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDodgeReleaseInput_MetaData[] = {
		{ "Category", "StateTransitionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSubclassOf<UCustomState> OnDodgeReleaseInputClass;\n" },
#endif
		{ "ModuleRelativePath", "Public/StateTransitionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<UCustomState> OnDodgeReleaseInputClass;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnAttackInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnAttackHoldInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnAttackReleaseInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnSkill1Input;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnSkill1HoldInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnSkill1ReleaseInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnSkill2Input;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnSkill2HoldInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnSkill2ReleaseInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnSkill3Input;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnSkill3HoldInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnSkill3ReleaseInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnDodgeInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnDodgeHoldInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnDodgeReleaseInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTransitionData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnAttackInput = { "OnAttackInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnAttackInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackInput_MetaData), NewProp_OnAttackInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnAttackHoldInput = { "OnAttackHoldInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnAttackHoldInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackHoldInput_MetaData), NewProp_OnAttackHoldInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnAttackReleaseInput = { "OnAttackReleaseInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnAttackReleaseInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackReleaseInput_MetaData), NewProp_OnAttackReleaseInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill1Input = { "OnSkill1Input", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnSkill1Input), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSkill1Input_MetaData), NewProp_OnSkill1Input_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill1HoldInput = { "OnSkill1HoldInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnSkill1HoldInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSkill1HoldInput_MetaData), NewProp_OnSkill1HoldInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill1ReleaseInput = { "OnSkill1ReleaseInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnSkill1ReleaseInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSkill1ReleaseInput_MetaData), NewProp_OnSkill1ReleaseInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill2Input = { "OnSkill2Input", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnSkill2Input), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSkill2Input_MetaData), NewProp_OnSkill2Input_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill2HoldInput = { "OnSkill2HoldInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnSkill2HoldInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSkill2HoldInput_MetaData), NewProp_OnSkill2HoldInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill2ReleaseInput = { "OnSkill2ReleaseInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnSkill2ReleaseInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSkill2ReleaseInput_MetaData), NewProp_OnSkill2ReleaseInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill3Input = { "OnSkill3Input", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnSkill3Input), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSkill3Input_MetaData), NewProp_OnSkill3Input_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill3HoldInput = { "OnSkill3HoldInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnSkill3HoldInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSkill3HoldInput_MetaData), NewProp_OnSkill3HoldInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill3ReleaseInput = { "OnSkill3ReleaseInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnSkill3ReleaseInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSkill3ReleaseInput_MetaData), NewProp_OnSkill3ReleaseInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnDodgeInput = { "OnDodgeInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnDodgeInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDodgeInput_MetaData), NewProp_OnDodgeInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnDodgeHoldInput = { "OnDodgeHoldInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnDodgeHoldInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDodgeHoldInput_MetaData), NewProp_OnDodgeHoldInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnDodgeReleaseInput = { "OnDodgeReleaseInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTransitionData, OnDodgeReleaseInput), Z_Construct_UClass_UCustomState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDodgeReleaseInput_MetaData), NewProp_OnDodgeReleaseInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTransitionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnAttackInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnAttackHoldInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnAttackReleaseInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill1Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill1HoldInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill1ReleaseInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill2Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill2HoldInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill2ReleaseInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill3Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill3HoldInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnSkill3ReleaseInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnDodgeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnDodgeHoldInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTransitionData_Statics::NewProp_OnDodgeReleaseInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTransitionData_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UStateTransitionData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStateTransitionData_Statics::PropPointers),
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
UStateTransitionData::UStateTransitionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTransitionData);
UStateTransitionData::~UStateTransitionData() {}
// ********** End Class UStateTransitionData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StateTransitionData_h__Script_Paradise_Seekers_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateTransitionData, UStateTransitionData::StaticClass, TEXT("UStateTransitionData"), &Z_Registration_Info_UClass_UStateTransitionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTransitionData), 1436985709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StateTransitionData_h__Script_Paradise_Seekers_3295994439(TEXT("/Script/Paradise_Seekers"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StateTransitionData_h__Script_Paradise_Seekers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_StateTransitionData_h__Script_Paradise_Seekers_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
