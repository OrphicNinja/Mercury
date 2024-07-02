// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZWeaponPartApplyStatus : uint8;
class USBZWeaponPartDataAsset;
struct FSBZWeaponPartProgressionCurrent;
#ifdef STARBREEZE_SBZMainMenuWeaponPartProgressionButton_generated_h
#error "SBZMainMenuWeaponPartProgressionButton.generated.h already included, missing '#pragma once' in SBZMainMenuWeaponPartProgressionButton.h"
#endif
#define STARBREEZE_SBZMainMenuWeaponPartProgressionButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPartApplyStatus); \
	DECLARE_FUNCTION(execGetUnlockLevel); \
	DECLARE_FUNCTION(execGetWeaponPart); \
	DECLARE_FUNCTION(execGetWeaponPartProgression); \
	DECLARE_FUNCTION(execInitializeWeaponPartProgression); \
	DECLARE_FUNCTION(execIsDefaultButton); \
	DECLARE_FUNCTION(execSetEquipped); \
	DECLARE_FUNCTION(execSetIsDefaultButton);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPartApplyStatus); \
	DECLARE_FUNCTION(execGetUnlockLevel); \
	DECLARE_FUNCTION(execGetWeaponPart); \
	DECLARE_FUNCTION(execGetWeaponPartProgression); \
	DECLARE_FUNCTION(execInitializeWeaponPartProgression); \
	DECLARE_FUNCTION(execIsDefaultButton); \
	DECLARE_FUNCTION(execSetEquipped); \
	DECLARE_FUNCTION(execSetIsDefaultButton);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_EVENT_PARMS \
	struct SBZMainMenuWeaponPartProgressionButton_eventOnEquippedChanged_Parms \
	{ \
		bool bInIsEquipped; \
	}; \
	struct SBZMainMenuWeaponPartProgressionButton_eventWeaponPartProgressionInitialized_Parms \
	{ \
		FSBZWeaponPartProgressionCurrent InWeaponPartProgression; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponPartProgressionButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponPartProgressionButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponPartProgressionButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponPartProgressionButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponPartProgressionButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponPartProgressionButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuWeaponPartProgressionButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuWeaponPartProgressionButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponPartProgressionButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponPartProgressionButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponPartProgressionButton(USBZMainMenuWeaponPartProgressionButton&&); \
	NO_API USBZMainMenuWeaponPartProgressionButton(const USBZMainMenuWeaponPartProgressionButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponPartProgressionButton(USBZMainMenuWeaponPartProgressionButton&&); \
	NO_API USBZMainMenuWeaponPartProgressionButton(const USBZMainMenuWeaponPartProgressionButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponPartProgressionButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponPartProgressionButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuWeaponPartProgressionButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponPartProgression() { return STRUCT_OFFSET(USBZMainMenuWeaponPartProgressionButton, WeaponPartProgression); } \
	FORCEINLINE static uint32 __PPO__bIsEquipped() { return STRUCT_OFFSET(USBZMainMenuWeaponPartProgressionButton, bIsEquipped); } \
	FORCEINLINE static uint32 __PPO__bIsDefault() { return STRUCT_OFFSET(USBZMainMenuWeaponPartProgressionButton, bIsDefault); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuWeaponPartProgressionButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponPartProgressionButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
