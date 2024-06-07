// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGetPartyDataRequest;
struct FGetPartyStorageRequest;
struct FPartyInviteRequest;
struct FPartyJoinRequest;
struct FPartyJoinViaCodeRequest;
struct FPartyKickRequest;
struct FPartyPromoteLeaderRequest;
struct FPartyRejectRequest;
struct FWritePartyStorageRequest;
#ifdef ACCELBYTEUE4SDK_ABParty_generated_h
#error "ABParty.generated.h already included, missing '#pragma once' in ABParty.h"
#endif
#define ACCELBYTEUE4SDK_ABParty_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateParty); \
	DECLARE_FUNCTION(execGetPartyData); \
	DECLARE_FUNCTION(execGetPartyStorage); \
	DECLARE_FUNCTION(execPartyDeleteCode); \
	DECLARE_FUNCTION(execPartyGenerateCode); \
	DECLARE_FUNCTION(execPartyGetCode); \
	DECLARE_FUNCTION(execPartyInfo); \
	DECLARE_FUNCTION(execPartyInvite); \
	DECLARE_FUNCTION(execPartyJoin); \
	DECLARE_FUNCTION(execPartyJoinViaCode); \
	DECLARE_FUNCTION(execPartyKick); \
	DECLARE_FUNCTION(execPartyLeave); \
	DECLARE_FUNCTION(execPartyPromoteLeader); \
	DECLARE_FUNCTION(execPartyReject); \
	DECLARE_FUNCTION(execSetOnPartyDataUpdate); \
	DECLARE_FUNCTION(execSetOnPartyDataUpdateNotifDelegate); \
	DECLARE_FUNCTION(execSetOnPartyGetInvited); \
	DECLARE_FUNCTION(execSetOnPartyInvite); \
	DECLARE_FUNCTION(execSetOnPartyJoin); \
	DECLARE_FUNCTION(execSetOnPartyKick); \
	DECLARE_FUNCTION(execSetOnPartyLeave); \
	DECLARE_FUNCTION(execSetOnPartyMemberConnect); \
	DECLARE_FUNCTION(execSetOnPartyMemberDisconnect); \
	DECLARE_FUNCTION(execSetOnPartyMemberLeave); \
	DECLARE_FUNCTION(execSetOnPartyReject); \
	DECLARE_FUNCTION(execSetOnPartyUpdate); \
	DECLARE_FUNCTION(execSetPartySizeLimit); \
	DECLARE_FUNCTION(execWritePartyStorage);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateParty); \
	DECLARE_FUNCTION(execGetPartyData); \
	DECLARE_FUNCTION(execGetPartyStorage); \
	DECLARE_FUNCTION(execPartyDeleteCode); \
	DECLARE_FUNCTION(execPartyGenerateCode); \
	DECLARE_FUNCTION(execPartyGetCode); \
	DECLARE_FUNCTION(execPartyInfo); \
	DECLARE_FUNCTION(execPartyInvite); \
	DECLARE_FUNCTION(execPartyJoin); \
	DECLARE_FUNCTION(execPartyJoinViaCode); \
	DECLARE_FUNCTION(execPartyKick); \
	DECLARE_FUNCTION(execPartyLeave); \
	DECLARE_FUNCTION(execPartyPromoteLeader); \
	DECLARE_FUNCTION(execPartyReject); \
	DECLARE_FUNCTION(execSetOnPartyDataUpdate); \
	DECLARE_FUNCTION(execSetOnPartyDataUpdateNotifDelegate); \
	DECLARE_FUNCTION(execSetOnPartyGetInvited); \
	DECLARE_FUNCTION(execSetOnPartyInvite); \
	DECLARE_FUNCTION(execSetOnPartyJoin); \
	DECLARE_FUNCTION(execSetOnPartyKick); \
	DECLARE_FUNCTION(execSetOnPartyLeave); \
	DECLARE_FUNCTION(execSetOnPartyMemberConnect); \
	DECLARE_FUNCTION(execSetOnPartyMemberDisconnect); \
	DECLARE_FUNCTION(execSetOnPartyMemberLeave); \
	DECLARE_FUNCTION(execSetOnPartyReject); \
	DECLARE_FUNCTION(execSetOnPartyUpdate); \
	DECLARE_FUNCTION(execSetPartySizeLimit); \
	DECLARE_FUNCTION(execWritePartyStorage);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABParty(); \
	friend struct Z_Construct_UClass_UABParty_Statics; \
public: \
	DECLARE_CLASS(UABParty, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABParty)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUABParty(); \
	friend struct Z_Construct_UClass_UABParty_Statics; \
public: \
	DECLARE_CLASS(UABParty, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABParty)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABParty(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABParty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABParty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABParty(UABParty&&); \
	NO_API UABParty(const UABParty&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABParty(UABParty&&); \
	NO_API UABParty(const UABParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABParty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABParty)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_43_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABParty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABParty_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
