// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZServerStatBatcher_generated_h
#error "SBZServerStatBatcher.generated.h already included, missing '#pragma once' in SBZServerStatBatcher.h"
#endif
#define STARBREEZE_SBZServerStatBatcher_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleMissionEnd);


#define PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleMissionEnd);


#define PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZServerStatBatcher(); \
	friend struct Z_Construct_UClass_USBZServerStatBatcher_Statics; \
public: \
	DECLARE_CLASS(USBZServerStatBatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZServerStatBatcher)


#define PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZServerStatBatcher(); \
	friend struct Z_Construct_UClass_USBZServerStatBatcher_Statics; \
public: \
	DECLARE_CLASS(USBZServerStatBatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZServerStatBatcher)


#define PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZServerStatBatcher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZServerStatBatcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZServerStatBatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZServerStatBatcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZServerStatBatcher(USBZServerStatBatcher&&); \
	NO_API USBZServerStatBatcher(const USBZServerStatBatcher&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZServerStatBatcher(USBZServerStatBatcher&&); \
	NO_API USBZServerStatBatcher(const USBZServerStatBatcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZServerStatBatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZServerStatBatcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZServerStatBatcher)


#define PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedServerStatRequests() { return STRUCT_OFFSET(USBZServerStatBatcher, CachedServerStatRequests); } \
	FORCEINLINE static uint32 __PPO__WorldContext() { return STRUCT_OFFSET(USBZServerStatBatcher, WorldContext); }


#define PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZServerStatBatcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZServerStatBatcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
