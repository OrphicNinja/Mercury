// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZInventoryBaseData;
enum class ESBZUIItemSource : uint8;
struct FSBZPlayerUiItemInfo;
#ifdef STARBREEZE_SBZMainMenuInventoryItemSlotButton_generated_h
#error "SBZMainMenuInventoryItemSlotButton.generated.h already included, missing '#pragma once' in SBZMainMenuInventoryItemSlotButton.h"
#endif
#define STARBREEZE_SBZMainMenuInventoryItemSlotButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInfamyLevel); \
	DECLARE_FUNCTION(execGetItemData); \
	DECLARE_FUNCTION(execGetItemSource); \
	DECLARE_FUNCTION(execGetSkillName); \
	DECLARE_FUNCTION(execInitializeInventoryItem); \
	DECLARE_FUNCTION(execInitializeItem); \
	DECLARE_FUNCTION(execIsAvailable);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInfamyLevel); \
	DECLARE_FUNCTION(execGetItemData); \
	DECLARE_FUNCTION(execGetItemSource); \
	DECLARE_FUNCTION(execGetSkillName); \
	DECLARE_FUNCTION(execInitializeInventoryItem); \
	DECLARE_FUNCTION(execInitializeItem); \
	DECLARE_FUNCTION(execIsAvailable);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_EVENT_PARMS \
	struct SBZMainMenuInventoryItemSlotButton_eventSetActiveItem_Parms \
	{ \
		bool bIsActiveItem; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryItemSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryItemSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryItemSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryItemSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryItemSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryItemSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuInventoryItemSlotButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuInventoryItemSlotButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryItemSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryItemSlotButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryItemSlotButton(USBZMainMenuInventoryItemSlotButton&&); \
	NO_API USBZMainMenuInventoryItemSlotButton(const USBZMainMenuInventoryItemSlotButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryItemSlotButton(USBZMainMenuInventoryItemSlotButton&&); \
	NO_API USBZMainMenuInventoryItemSlotButton(const USBZMainMenuInventoryItemSlotButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryItemSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryItemSlotButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuInventoryItemSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemData() { return STRUCT_OFFSET(USBZMainMenuInventoryItemSlotButton, ItemData); } \
	FORCEINLINE static uint32 __PPO__InfamyLevel() { return STRUCT_OFFSET(USBZMainMenuInventoryItemSlotButton, InfamyLevel); } \
	FORCEINLINE static uint32 __PPO__bIsAvailable() { return STRUCT_OFFSET(USBZMainMenuInventoryItemSlotButton, bIsAvailable); } \
	FORCEINLINE static uint32 __PPO__ItemSource() { return STRUCT_OFFSET(USBZMainMenuInventoryItemSlotButton, ItemSource); } \
	FORCEINLINE static uint32 __PPO__SkillName() { return STRUCT_OFFSET(USBZMainMenuInventoryItemSlotButton, SkillName); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuInventoryItemSlotButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemSlotButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
