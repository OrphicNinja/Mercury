// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZCharacterEffectRuntime;
#ifdef STARBREEZE_SBZCharacterEffectContainer_generated_h
#error "SBZCharacterEffectContainer.generated.h already included, missing '#pragma once' in SBZCharacterEffectContainer.h"
#endif
#define STARBREEZE_SBZCharacterEffectContainer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCharactedEffectCooldownProgressUpdated); \
	DECLARE_FUNCTION(execOnCharactedEffectValueUpdated); \
	DECLARE_FUNCTION(execOnCharacterEffectAdded); \
	DECLARE_FUNCTION(execOnCharacterEffectRemoved);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCharactedEffectCooldownProgressUpdated); \
	DECLARE_FUNCTION(execOnCharactedEffectValueUpdated); \
	DECLARE_FUNCTION(execOnCharacterEffectAdded); \
	DECLARE_FUNCTION(execOnCharacterEffectRemoved);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCharacterEffectContainer(); \
	friend struct Z_Construct_UClass_USBZCharacterEffectContainer_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterEffectContainer, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterEffectContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCharacterEffectContainer(); \
	friend struct Z_Construct_UClass_USBZCharacterEffectContainer_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterEffectContainer, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterEffectContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCharacterEffectContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterEffectContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterEffectContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterEffectContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterEffectContainer(USBZCharacterEffectContainer&&); \
	NO_API USBZCharacterEffectContainer(const USBZCharacterEffectContainer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterEffectContainer(USBZCharacterEffectContainer&&); \
	NO_API USBZCharacterEffectContainer(const USBZCharacterEffectContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterEffectContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterEffectContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCharacterEffectContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Panel_CharacterEffectsContainer() { return STRUCT_OFFSET(USBZCharacterEffectContainer, Panel_CharacterEffectsContainer); } \
	FORCEINLINE static uint32 __PPO__CharacterEffectWidgetClass() { return STRUCT_OFFSET(USBZCharacterEffectContainer, CharacterEffectWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ActiveEffectWidgets() { return STRUCT_OFFSET(USBZCharacterEffectContainer, ActiveEffectWidgets); } \
	FORCEINLINE static uint32 __PPO__EmptyCharacterEffectsPool() { return STRUCT_OFFSET(USBZCharacterEffectContainer, EmptyCharacterEffectsPool); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCharacterEffectContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
