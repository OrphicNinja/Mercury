// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlockPlayerRequest;
struct FUnblockPlayerRequest;
#ifdef ACCELBYTEUE4SDK_ABBlock_generated_h
#error "ABBlock.generated.h already included, missing '#pragma once' in ABBlock.h"
#endif
#define ACCELBYTEUE4SDK_ABBlock_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlockPlayer); \
	DECLARE_FUNCTION(execGetListOfBlockedUsers); \
	DECLARE_FUNCTION(execGetListOfBlockers); \
	DECLARE_FUNCTION(execSetBlockPlayerNotifDelegate); \
	DECLARE_FUNCTION(execSetUnblockPlayerNotifDelegate); \
	DECLARE_FUNCTION(execUnblockPlayer);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlockPlayer); \
	DECLARE_FUNCTION(execGetListOfBlockedUsers); \
	DECLARE_FUNCTION(execGetListOfBlockers); \
	DECLARE_FUNCTION(execSetBlockPlayerNotifDelegate); \
	DECLARE_FUNCTION(execSetUnblockPlayerNotifDelegate); \
	DECLARE_FUNCTION(execUnblockPlayer);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABBlock(); \
	friend struct Z_Construct_UClass_UABBlock_Statics; \
public: \
	DECLARE_CLASS(UABBlock, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABBlock)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUABBlock(); \
	friend struct Z_Construct_UClass_UABBlock_Statics; \
public: \
	DECLARE_CLASS(UABBlock, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABBlock)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABBlock(UABBlock&&); \
	NO_API UABBlock(const UABBlock&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABBlock(UABBlock&&); \
	NO_API UABBlock(const UABBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABBlock)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_15_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
