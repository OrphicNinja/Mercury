// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperSprite;
struct FVector2D;
struct FSBZChallengeData;
#ifdef STARBREEZE_SBZMainMenuBaseChallengeButton_generated_h
#error "SBZMainMenuBaseChallengeButton.generated.h already included, missing '#pragma once' in SBZMainMenuBaseChallengeButton.h"
#endif
#define STARBREEZE_SBZMainMenuBaseChallengeButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPaperSpriteSourceSize); \
	DECLARE_FUNCTION(execInitializeChallengeData);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPaperSpriteSourceSize); \
	DECLARE_FUNCTION(execInitializeChallengeData);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_EVENT_PARMS \
	struct SBZMainMenuBaseChallengeButton_eventOnChallengeDataInititalized_Parms \
	{ \
		FSBZChallengeData InChallengeData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuBaseChallengeButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuBaseChallengeButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuBaseChallengeButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuBaseChallengeButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuBaseChallengeButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuBaseChallengeButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuBaseChallengeButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuBaseChallengeButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuBaseChallengeButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuBaseChallengeButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuBaseChallengeButton(USBZMainMenuBaseChallengeButton&&); \
	NO_API USBZMainMenuBaseChallengeButton(const USBZMainMenuBaseChallengeButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuBaseChallengeButton(USBZMainMenuBaseChallengeButton&&); \
	NO_API USBZMainMenuBaseChallengeButton(const USBZMainMenuBaseChallengeButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuBaseChallengeButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuBaseChallengeButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuBaseChallengeButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChallengeData() { return STRUCT_OFFSET(USBZMainMenuBaseChallengeButton, ChallengeData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuBaseChallengeButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuBaseChallengeButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
