// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZVote_generated_h
#error "SBZVote.generated.h already included, missing '#pragma once' in SBZVote.h"
#endif
#define STARBREEZE_SBZVote_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVote(); \
	friend struct Z_Construct_UClass_USBZVote_Statics; \
public: \
	DECLARE_CLASS(USBZVote, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVote) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVote(); \
	friend struct Z_Construct_UClass_USBZVote_Statics; \
public: \
	DECLARE_CLASS(USBZVote, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVote) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVote(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVote) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVote); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVote(USBZVote&&); \
	NO_API USBZVote(const USBZVote&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVote(USBZVote&&); \
	NO_API USBZVote(const USBZVote&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVote); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZVote)


#define PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VotingManager() { return STRUCT_OFFSET(USBZVote, VotingManager); }


#define PAYDAY3_Source_Starbreeze_Public_SBZVote_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVote_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVote>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVote_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
