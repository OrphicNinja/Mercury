// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZModularPartApplier;
#ifdef STARBREEZE_SBZModularPartSlotBase_generated_h
#error "SBZModularPartSlotBase.generated.h already included, missing '#pragma once' in SBZModularPartSlotBase.h"
#endif
#define STARBREEZE_SBZModularPartSlotBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetApplierInstance); \
	DECLARE_FUNCTION(execGetDisplayName);


#define PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetApplierInstance); \
	DECLARE_FUNCTION(execGetDisplayName);


#define PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZModularPartSlotBase(); \
	friend struct Z_Construct_UClass_USBZModularPartSlotBase_Statics; \
public: \
	DECLARE_CLASS(USBZModularPartSlotBase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZModularPartSlotBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZModularPartSlotBase(); \
	friend struct Z_Construct_UClass_USBZModularPartSlotBase_Statics; \
public: \
	DECLARE_CLASS(USBZModularPartSlotBase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZModularPartSlotBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZModularPartSlotBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZModularPartSlotBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZModularPartSlotBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZModularPartSlotBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZModularPartSlotBase(USBZModularPartSlotBase&&); \
	NO_API USBZModularPartSlotBase(const USBZModularPartSlotBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZModularPartSlotBase(USBZModularPartSlotBase&&); \
	NO_API USBZModularPartSlotBase(const USBZModularPartSlotBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZModularPartSlotBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZModularPartSlotBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZModularPartSlotBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisplayName() { return STRUCT_OFFSET(USBZModularPartSlotBase, DisplayName); } \
	FORCEINLINE static uint32 __PPO__ApplierInstance() { return STRUCT_OFFSET(USBZModularPartSlotBase, ApplierInstance); }


#define PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZModularPartSlotBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZModularPartSlotBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
