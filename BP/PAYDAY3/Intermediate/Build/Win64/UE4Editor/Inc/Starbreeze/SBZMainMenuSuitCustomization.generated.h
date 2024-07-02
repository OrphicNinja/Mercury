// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZSuitPart : uint8;
class USBZCosmeticsPartSlot;
class USBZModularPartDataAsset;
#ifdef STARBREEZE_SBZMainMenuSuitCustomization_generated_h
#error "SBZMainMenuSuitCustomization.generated.h already included, missing '#pragma once' in SBZMainMenuSuitCustomization.h"
#endif
#define STARBREEZE_SBZMainMenuSuitCustomization_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCosmeticItemInSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCosmeticItemInSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuSuitCustomization(); \
	friend struct Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuSuitCustomization, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuSuitCustomization)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuSuitCustomization(); \
	friend struct Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuSuitCustomization, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuSuitCustomization)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuSuitCustomization(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuSuitCustomization) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuSuitCustomization); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuSuitCustomization); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuSuitCustomization(USBZMainMenuSuitCustomization&&); \
	NO_API USBZMainMenuSuitCustomization(const USBZMainMenuSuitCustomization&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuSuitCustomization(USBZMainMenuSuitCustomization&&); \
	NO_API USBZMainMenuSuitCustomization(const USBZMainMenuSuitCustomization&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuSuitCustomization); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuSuitCustomization); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuSuitCustomization)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SuitSlotIndex() { return STRUCT_OFFSET(USBZMainMenuSuitCustomization, SuitSlotIndex); } \
	FORCEINLINE static uint32 __PPO__SuitSlot() { return STRUCT_OFFSET(USBZMainMenuSuitCustomization, SuitSlot); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuSuitCustomization>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCustomization_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
