// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerState;
#ifdef STARBREEZE_SBZPlayerStateWidgetBase_generated_h
#error "SBZPlayerStateWidgetBase.generated.h already included, missing '#pragma once' in SBZPlayerStateWidgetBase.h"
#endif
#define STARBREEZE_SBZPlayerStateWidgetBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializePlayerState); \
	DECLARE_FUNCTION(execIsForLocalPlayerState); \
	DECLARE_FUNCTION(execIsWidgetForPlayerState);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializePlayerState); \
	DECLARE_FUNCTION(execIsForLocalPlayerState); \
	DECLARE_FUNCTION(execIsWidgetForPlayerState);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPlayerStateWidgetBase(); \
	friend struct Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerStateWidgetBase, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerStateWidgetBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPlayerStateWidgetBase(); \
	friend struct Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerStateWidgetBase, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerStateWidgetBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPlayerStateWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerStateWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerStateWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerStateWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerStateWidgetBase(USBZPlayerStateWidgetBase&&); \
	NO_API USBZPlayerStateWidgetBase(const USBZPlayerStateWidgetBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerStateWidgetBase(USBZPlayerStateWidgetBase&&); \
	NO_API USBZPlayerStateWidgetBase(const USBZPlayerStateWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerStateWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerStateWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPlayerStateWidgetBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerState() { return STRUCT_OFFSET(USBZPlayerStateWidgetBase, PlayerState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPlayerStateWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerStateWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
