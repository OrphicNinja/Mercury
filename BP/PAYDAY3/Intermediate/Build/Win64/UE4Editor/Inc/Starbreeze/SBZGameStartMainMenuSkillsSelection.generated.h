// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMetaRequestResult : uint8;
#ifdef STARBREEZE_SBZGameStartMainMenuSkillsSelection_generated_h
#error "SBZGameStartMainMenuSkillsSelection.generated.h already included, missing '#pragma once' in SBZGameStartMainMenuSkillsSelection.h"
#endif
#define STARBREEZE_SBZGameStartMainMenuSkillsSelection_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCustomizeSkillsForPlayerLoadoutIndex); \
	DECLARE_FUNCTION(execHandleProgressionSave); \
	DECLARE_FUNCTION(execNativeOnAlternativeSelectionPressed); \
	DECLARE_FUNCTION(execNativeOnAlternativeSelectionReleased);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCustomizeSkillsForPlayerLoadoutIndex); \
	DECLARE_FUNCTION(execHandleProgressionSave); \
	DECLARE_FUNCTION(execNativeOnAlternativeSelectionPressed); \
	DECLARE_FUNCTION(execNativeOnAlternativeSelectionReleased);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_EVENT_PARMS \
	struct SBZGameStartMainMenuSkillsSelection_eventOnDescriptionScrollAxisChanged_Parms \
	{ \
		float Value; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGameStartMainMenuSkillsSelection(); \
	friend struct Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics; \
public: \
	DECLARE_CLASS(USBZGameStartMainMenuSkillsSelection, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameStartMainMenuSkillsSelection)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGameStartMainMenuSkillsSelection(); \
	friend struct Z_Construct_UClass_USBZGameStartMainMenuSkillsSelection_Statics; \
public: \
	DECLARE_CLASS(USBZGameStartMainMenuSkillsSelection, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameStartMainMenuSkillsSelection)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGameStartMainMenuSkillsSelection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGameStartMainMenuSkillsSelection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameStartMainMenuSkillsSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameStartMainMenuSkillsSelection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameStartMainMenuSkillsSelection(USBZGameStartMainMenuSkillsSelection&&); \
	NO_API USBZGameStartMainMenuSkillsSelection(const USBZGameStartMainMenuSkillsSelection&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameStartMainMenuSkillsSelection(USBZGameStartMainMenuSkillsSelection&&); \
	NO_API USBZGameStartMainMenuSkillsSelection(const USBZGameStartMainMenuSkillsSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameStartMainMenuSkillsSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameStartMainMenuSkillsSelection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZGameStartMainMenuSkillsSelection)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Skills() { return STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, Skills); } \
	FORCEINLINE static uint32 __PPO__AlternativeSelectionInput() { return STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, AlternativeSelectionInput); } \
	FORCEINLINE static uint32 __PPO__AlternativeSelectionHoldDuration() { return STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, AlternativeSelectionHoldDuration); } \
	FORCEINLINE static uint32 __PPO__DescriptionScrollAxis() { return STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, DescriptionScrollAxis); } \
	FORCEINLINE static uint32 __PPO__DescriptionScrollSpeed() { return STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, DescriptionScrollSpeed); } \
	FORCEINLINE static uint32 __PPO__AxisDeadZone() { return STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, AxisDeadZone); } \
	FORCEINLINE static uint32 __PPO__CurrentLoadoutIndex() { return STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, CurrentLoadoutIndex); } \
	FORCEINLINE static uint32 __PPO__CachedPlayerLoadout() { return STRUCT_OFFSET(USBZGameStartMainMenuSkillsSelection, CachedPlayerLoadout); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGameStartMainMenuSkillsSelection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameStartMainMenuSkillsSelection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
