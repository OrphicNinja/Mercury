// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuButton;
class USBZChallengeCategoryData;
enum class EChallengeStatusEnum : uint8;
struct FSBZChallengeData;
#ifdef STARBREEZE_SBZMainMenuChallengesWidget_generated_h
#error "SBZMainMenuChallengesWidget.generated.h already included, missing '#pragma once' in SBZMainMenuChallengesWidget.h"
#endif
#define STARBREEZE_SBZMainMenuChallengesWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCycleFilterStatuses); \
	DECLARE_FUNCTION(execNativeOnChallengeButtonFocusedChanged); \
	DECLARE_FUNCTION(execNextPage); \
	DECLARE_FUNCTION(execPrevPage); \
	DECLARE_FUNCTION(execResetFilterStatuses); \
	DECLARE_FUNCTION(execSetFilterCategory); \
	DECLARE_FUNCTION(execSetPage); \
	DECLARE_FUNCTION(execToggleFilterStatus);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCycleFilterStatuses); \
	DECLARE_FUNCTION(execNativeOnChallengeButtonFocusedChanged); \
	DECLARE_FUNCTION(execNextPage); \
	DECLARE_FUNCTION(execPrevPage); \
	DECLARE_FUNCTION(execResetFilterStatuses); \
	DECLARE_FUNCTION(execSetFilterCategory); \
	DECLARE_FUNCTION(execSetPage); \
	DECLARE_FUNCTION(execToggleFilterStatus);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_EVENT_PARMS \
	struct SBZMainMenuChallengesWidget_eventOnNewChallengedFocused_Parms \
	{ \
		FSBZChallengeData InChallengeData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuChallengesWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuChallengesWidget, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuChallengesWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuChallengesWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuChallengesWidget, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuChallengesWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuChallengesWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuChallengesWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuChallengesWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuChallengesWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuChallengesWidget(USBZMainMenuChallengesWidget&&); \
	NO_API USBZMainMenuChallengesWidget(const USBZMainMenuChallengesWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuChallengesWidget(USBZMainMenuChallengesWidget&&); \
	NO_API USBZMainMenuChallengesWidget(const USBZMainMenuChallengesWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuChallengesWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuChallengesWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuChallengesWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Panel_ChallengeButtons() { return STRUCT_OFFSET(USBZMainMenuChallengesWidget, Panel_ChallengeButtons); } \
	FORCEINLINE static uint32 __PPO__Widget_Loading() { return STRUCT_OFFSET(USBZMainMenuChallengesWidget, Widget_Loading); } \
	FORCEINLINE static uint32 __PPO__ChallengeButtonClass() { return STRUCT_OFFSET(USBZMainMenuChallengesWidget, ChallengeButtonClass); } \
	FORCEINLINE static uint32 __PPO__ChallengesDisplayedPerPage() { return STRUCT_OFFSET(USBZMainMenuChallengesWidget, ChallengesDisplayedPerPage); } \
	FORCEINLINE static uint32 __PPO__CategoryCurrent() { return STRUCT_OFFSET(USBZMainMenuChallengesWidget, CategoryCurrent); } \
	FORCEINLINE static uint32 __PPO__StatusesCurrent() { return STRUCT_OFFSET(USBZMainMenuChallengesWidget, StatusesCurrent); } \
	FORCEINLINE static uint32 __PPO__AllStatuses() { return STRUCT_OFFSET(USBZMainMenuChallengesWidget, AllStatuses); } \
	FORCEINLINE static uint32 __PPO__PagesTotalCount() { return STRUCT_OFFSET(USBZMainMenuChallengesWidget, PagesTotalCount); } \
	FORCEINLINE static uint32 __PPO__PageCurrent() { return STRUCT_OFFSET(USBZMainMenuChallengesWidget, PageCurrent); } \
	FORCEINLINE static uint32 __PPO__ChallengeButtons() { return STRUCT_OFFSET(USBZMainMenuChallengesWidget, ChallengeButtons); } \
	FORCEINLINE static uint32 __PPO__FocusedChallengeButton() { return STRUCT_OFFSET(USBZMainMenuChallengesWidget, FocusedChallengeButton); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuChallengesWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengesWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
