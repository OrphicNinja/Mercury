// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPD3HeistDataAsset;
struct FSoftObjectPath;
#ifdef STARBREEZE_SBZMainMenuCrimeNetHeistButton_generated_h
#error "SBZMainMenuCrimeNetHeistButton.generated.h already included, missing '#pragma once' in SBZMainMenuCrimeNetHeistButton.h"
#endif
#define STARBREEZE_SBZMainMenuCrimeNetHeistButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeistData); \
	DECLARE_FUNCTION(execGetHeistLevelPath); \
	DECLARE_FUNCTION(execInitializeHeistDataFromSoftObjectPath);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeistData); \
	DECLARE_FUNCTION(execGetHeistLevelPath); \
	DECLARE_FUNCTION(execInitializeHeistDataFromSoftObjectPath);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_EVENT_PARMS \
	struct SBZMainMenuCrimeNetHeistButton_eventOnFocusChanged_Parms \
	{ \
		bool bIsFocused; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCrimeNetHeistButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCrimeNetHeistButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCrimeNetHeistButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCrimeNetHeistButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCrimeNetHeistButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCrimeNetHeistButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuCrimeNetHeistButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuCrimeNetHeistButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCrimeNetHeistButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCrimeNetHeistButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCrimeNetHeistButton(USBZMainMenuCrimeNetHeistButton&&); \
	NO_API USBZMainMenuCrimeNetHeistButton(const USBZMainMenuCrimeNetHeistButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCrimeNetHeistButton(USBZMainMenuCrimeNetHeistButton&&); \
	NO_API USBZMainMenuCrimeNetHeistButton(const USBZMainMenuCrimeNetHeistButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCrimeNetHeistButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCrimeNetHeistButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuCrimeNetHeistButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeistSoftObjectPath() { return STRUCT_OFFSET(USBZMainMenuCrimeNetHeistButton, HeistSoftObjectPath); } \
	FORCEINLINE static uint32 __PPO__HeistData() { return STRUCT_OFFSET(USBZMainMenuCrimeNetHeistButton, HeistData); } \
	FORCEINLINE static uint32 __PPO__HeistCollectionIndex() { return STRUCT_OFFSET(USBZMainMenuCrimeNetHeistButton, HeistCollectionIndex); } \
	FORCEINLINE static uint32 __PPO__HeistIndex() { return STRUCT_OFFSET(USBZMainMenuCrimeNetHeistButton, HeistIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuCrimeNetHeistButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetHeistButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
