// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJsonObjectWrapper;
struct FAccelByteModelsSessionBrowserCreateRequest;
enum class EAccelByteSessionType : uint8;
struct FAccelByteModelsSessionBrowserUpdateRequest;
#ifdef ACCELBYTEUE4SDK_ABServerSessionBrowser_generated_h
#error "ABServerSessionBrowser.generated.h already included, missing '#pragma once' in ABServerSessionBrowser.h"
#endif
#define ACCELBYTEUE4SDK_ABServerSessionBrowser_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateGameSessionPrivate); \
	DECLARE_FUNCTION(execCreateGameSessionPublic); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecificByStruct); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecifiedByEnum); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecifiedByString); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeEnum); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeEnumAndMatchExist); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeString); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeStringAndMatchExist); \
	DECLARE_FUNCTION(execGetRecentPlayer); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execRemoveGameSession); \
	DECLARE_FUNCTION(execUnregisterPlayer); \
	DECLARE_FUNCTION(execUpdateGameSession); \
	DECLARE_FUNCTION(execUpdateGameSessionByStruct);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateGameSessionPrivate); \
	DECLARE_FUNCTION(execCreateGameSessionPublic); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecificByStruct); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecifiedByEnum); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecifiedByString); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeEnum); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeEnumAndMatchExist); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeString); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeStringAndMatchExist); \
	DECLARE_FUNCTION(execGetRecentPlayer); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execRemoveGameSession); \
	DECLARE_FUNCTION(execUnregisterPlayer); \
	DECLARE_FUNCTION(execUpdateGameSession); \
	DECLARE_FUNCTION(execUpdateGameSessionByStruct);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerSessionBrowser(); \
	friend struct Z_Construct_UClass_UABServerSessionBrowser_Statics; \
public: \
	DECLARE_CLASS(UABServerSessionBrowser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerSessionBrowser)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUABServerSessionBrowser(); \
	friend struct Z_Construct_UClass_UABServerSessionBrowser_Statics; \
public: \
	DECLARE_CLASS(UABServerSessionBrowser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerSessionBrowser)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABServerSessionBrowser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABServerSessionBrowser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerSessionBrowser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerSessionBrowser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABServerSessionBrowser(UABServerSessionBrowser&&); \
	NO_API UABServerSessionBrowser(const UABServerSessionBrowser&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABServerSessionBrowser(UABServerSessionBrowser&&); \
	NO_API UABServerSessionBrowser(const UABServerSessionBrowser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerSessionBrowser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerSessionBrowser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerSessionBrowser)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_15_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerSessionBrowser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
