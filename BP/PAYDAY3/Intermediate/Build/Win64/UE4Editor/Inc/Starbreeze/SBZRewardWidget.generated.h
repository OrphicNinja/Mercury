// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChallengeData;
class USBZInfamyManager;
#ifdef STARBREEZE_SBZRewardWidget_generated_h
#error "SBZRewardWidget.generated.h already included, missing '#pragma once' in SBZRewardWidget.h"
#endif
#define STARBREEZE_SBZRewardWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnChallengeCompleted); \
	DECLARE_FUNCTION(execOnInfamyChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnChallengeCompleted); \
	DECLARE_FUNCTION(execOnInfamyChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_EVENT_PARMS \
	struct SBZRewardWidget_eventChallengeCompleted_Parms \
	{ \
		FSBZChallengeData ChallengeData; \
	}; \
	struct SBZRewardWidget_eventInfamyExperinceChanged_Parms \
	{ \
		int32 PreviousInfamyExperince; \
		int32 CurrentInfamyExperience; \
		int32 SkillPointsEarned; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZRewardWidget(); \
	friend struct Z_Construct_UClass_USBZRewardWidget_Statics; \
public: \
	DECLARE_CLASS(USBZRewardWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZRewardWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZRewardWidget(); \
	friend struct Z_Construct_UClass_USBZRewardWidget_Statics; \
public: \
	DECLARE_CLASS(USBZRewardWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZRewardWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZRewardWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZRewardWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRewardWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRewardWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRewardWidget(USBZRewardWidget&&); \
	NO_API USBZRewardWidget(const USBZRewardWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRewardWidget(USBZRewardWidget&&); \
	NO_API USBZRewardWidget(const USBZRewardWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRewardWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRewardWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZRewardWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZRewardWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZRewardWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
