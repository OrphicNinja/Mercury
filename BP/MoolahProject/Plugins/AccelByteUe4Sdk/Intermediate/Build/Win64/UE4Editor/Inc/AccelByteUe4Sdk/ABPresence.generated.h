// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBulkGetUserPresenceRequest;
struct FAccelBytePresenceStatus;
#ifdef ACCELBYTEUE4SDK_ABPresence_generated_h
#error "ABPresence.generated.h already included, missing '#pragma once' in ABPresence.h"
#endif
#define ACCELBYTEUE4SDK_ABPresence_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBulkGetUserPresence); \
	DECLARE_FUNCTION(execGetAllFriendsStatus); \
	DECLARE_FUNCTION(execSetOnFriendStatusNotif); \
	DECLARE_FUNCTION(execSetPresenceStatus);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBulkGetUserPresence); \
	DECLARE_FUNCTION(execGetAllFriendsStatus); \
	DECLARE_FUNCTION(execSetOnFriendStatusNotif); \
	DECLARE_FUNCTION(execSetPresenceStatus);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABPresence(); \
	friend struct Z_Construct_UClass_UABPresence_Statics; \
public: \
	DECLARE_CLASS(UABPresence, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABPresence)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUABPresence(); \
	friend struct Z_Construct_UClass_UABPresence_Statics; \
public: \
	DECLARE_CLASS(UABPresence, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABPresence)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABPresence(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABPresence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABPresence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABPresence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABPresence(UABPresence&&); \
	NO_API UABPresence(const UABPresence&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABPresence(UABPresence&&); \
	NO_API UABPresence(const UABPresence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABPresence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABPresence); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABPresence)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_13_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABPresence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABPresence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
