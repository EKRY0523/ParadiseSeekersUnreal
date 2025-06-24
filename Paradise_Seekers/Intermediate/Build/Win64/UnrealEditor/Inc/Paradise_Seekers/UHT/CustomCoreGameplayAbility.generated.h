// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomCoreGameplayAbility.h"

#ifdef PARADISE_SEEKERS_CustomCoreGameplayAbility_generated_h
#error "CustomCoreGameplayAbility.generated.h already included, missing '#pragma once' in CustomCoreGameplayAbility.h"
#endif
#define PARADISE_SEEKERS_CustomCoreGameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayTag;

// ********** Begin Class UCustomCoreGameplayAbility ***********************************************
#define FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetupVariables);


PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomCoreGameplayAbility_NoRegister();

#define FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomCoreGameplayAbility(); \
	friend struct Z_Construct_UClass_UCustomCoreGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARADISE_SEEKERS_API UClass* Z_Construct_UClass_UCustomCoreGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomCoreGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paradise_Seekers"), Z_Construct_UClass_UCustomCoreGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UCustomCoreGameplayAbility)


#define FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomCoreGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomCoreGameplayAbility(UCustomCoreGameplayAbility&&) = delete; \
	UCustomCoreGameplayAbility(const UCustomCoreGameplayAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomCoreGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomCoreGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomCoreGameplayAbility) \
	NO_API virtual ~UCustomCoreGameplayAbility();


#define FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h_13_PROLOG
#define FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomCoreGameplayAbility;

// ********** End Class UCustomCoreGameplayAbility *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ParadiseSeekersUnreal_Paradise_Seekers_Source_Paradise_Seekers_Public_CustomCoreGameplayAbility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
