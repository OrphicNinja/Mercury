// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZUE4StatsProfiler;
#ifdef STARBREEZE_SBZUE4StatsProfiler_generated_h
#error "SBZUE4StatsProfiler.generated.h already included, missing '#pragma once' in SBZUE4StatsProfiler.h"
#endif
#define STARBREEZE_SBZUE4StatsProfiler_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUE4StatsProfiler); \
	DECLARE_FUNCTION(execOnEnteredActionPhase); \
	DECLARE_FUNCTION(execOnExitedActionPhase);


#define PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUE4StatsProfiler); \
	DECLARE_FUNCTION(execOnEnteredActionPhase); \
	DECLARE_FUNCTION(execOnExitedActionPhase);


#define PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZUE4StatsProfiler(); \
	friend struct Z_Construct_UClass_USBZUE4StatsProfiler_Statics; \
public: \
	DECLARE_CLASS(USBZUE4StatsProfiler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUE4StatsProfiler)


#define PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZUE4StatsProfiler(); \
	friend struct Z_Construct_UClass_USBZUE4StatsProfiler_Statics; \
public: \
	DECLARE_CLASS(USBZUE4StatsProfiler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUE4StatsProfiler)


#define PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZUE4StatsProfiler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZUE4StatsProfiler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUE4StatsProfiler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUE4StatsProfiler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUE4StatsProfiler(USBZUE4StatsProfiler&&); \
	NO_API USBZUE4StatsProfiler(const USBZUE4StatsProfiler&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUE4StatsProfiler(USBZUE4StatsProfiler&&); \
	NO_API USBZUE4StatsProfiler(const USBZUE4StatsProfiler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUE4StatsProfiler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUE4StatsProfiler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZUE4StatsProfiler)


#define PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZUE4StatsProfiler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZUE4StatsProfiler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
