// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZWorldRuntime;
#ifdef STARBREEZE_SBZWorldRuntime_generated_h
#error "SBZWorldRuntime.generated.h already included, missing '#pragma once' in SBZWorldRuntime.h"
#endif
#define STARBREEZE_SBZWorldRuntime_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet);


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet);


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZWorldRuntime(); \
	friend struct Z_Construct_UClass_USBZWorldRuntime_Statics; \
public: \
	DECLARE_CLASS(USBZWorldRuntime, USBZWorldRuntimeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWorldRuntime) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSBZWorldRuntime(); \
	friend struct Z_Construct_UClass_USBZWorldRuntime_Statics; \
public: \
	DECLARE_CLASS(USBZWorldRuntime, USBZWorldRuntimeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWorldRuntime) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZWorldRuntime(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZWorldRuntime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWorldRuntime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWorldRuntime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWorldRuntime(USBZWorldRuntime&&); \
	NO_API USBZWorldRuntime(const USBZWorldRuntime&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWorldRuntime(USBZWorldRuntime&&); \
	NO_API USBZWorldRuntime(const USBZWorldRuntime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWorldRuntime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWorldRuntime); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZWorldRuntime)


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GlobalCommentCooldown() { return STRUCT_OFFSET(USBZWorldRuntime, GlobalCommentCooldown); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZWorldRuntime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWorldRuntime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
