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
 
#ifdef ACCELBYTEUE4SDK_ABSessionBrowser_generated_h
#error "ABSessionBrowser.generated.h already included, missing '#pragma once' in ABSessionBrowser.h"
#endif
#define ACCELBYTEUE4SDK_ABSessionBrowser_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateGameSessionPrivate); \
	DECLARE_FUNCTION(execCreateGameSessionPublic); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecificByStruct); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecifiedByEnum); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecifiedByString); \
	DECLARE_FUNCTION(execGetGameSession); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeEnum); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeEnumAndMatchExist); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeString); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeStringAndMatchExist); \
	DECLARE_FUNCTION(execGetGameSessionsByUserIds); \
	DECLARE_FUNCTION(execGetRecentPlayer); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execRemoveGameSession); \
	DECLARE_FUNCTION(execUnregisterPlayer); \
	DECLARE_FUNCTION(execUpdateGameSession); \
	DECLARE_FUNCTION(execUpdateGameSessionByStruct); \
	DECLARE_FUNCTION(execUpdateGameSettings); \
	DECLARE_FUNCTION(execUpdateGameSettingsByJsonObject);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateGameSessionPrivate); \
	DECLARE_FUNCTION(execCreateGameSessionPublic); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecificByStruct); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecifiedByEnum); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecifiedByString); \
	DECLARE_FUNCTION(execGetGameSession); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeEnum); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeEnumAndMatchExist); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeString); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeStringAndMatchExist); \
	DECLARE_FUNCTION(execGetGameSessionsByUserIds); \
	DECLARE_FUNCTION(execGetRecentPlayer); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execRemoveGameSession); \
	DECLARE_FUNCTION(execUnregisterPlayer); \
	DECLARE_FUNCTION(execUpdateGameSession); \
	DECLARE_FUNCTION(execUpdateGameSessionByStruct); \
	DECLARE_FUNCTION(execUpdateGameSettings); \
	DECLARE_FUNCTION(execUpdateGameSettingsByJsonObject);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABSessionBrowser(); \
	friend struct Z_Construct_UClass_UABSessionBrowser_Statics; \
public: \
	DECLARE_CLASS(UABSessionBrowser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABSessionBrowser)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUABSessionBrowser(); \
	friend struct Z_Construct_UClass_UABSessionBrowser_Statics; \
public: \
	DECLARE_CLASS(UABSessionBrowser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABSessionBrowser)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABSessionBrowser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABSessionBrowser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABSessionBrowser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABSessionBrowser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABSessionBrowser(UABSessionBrowser&&); \
	NO_API UABSessionBrowser(const UABSessionBrowser&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABSessionBrowser(UABSessionBrowser&&); \
	NO_API UABSessionBrowser(const UABSessionBrowser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABSessionBrowser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABSessionBrowser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABSessionBrowser)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_16_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABSessionBrowser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionBrowser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
