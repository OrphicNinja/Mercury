// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPublicGameProfile;
struct FAccelByteModelsGameProfile;
struct FAccelByteModelsGameProfileAttribute;
struct FAccelByteModelsGameProfileRequest;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsGameProfile_generated_h
#error "AccelByteBlueprintsGameProfile.generated.h already included, missing '#pragma once' in AccelByteBlueprintsGameProfile.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsGameProfile_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_22_DELEGATE \
struct AccelByteBlueprintsGameProfile_eventBatchGetPublicGameProfilesSuccess_Parms \
{ \
	TArray<FAccelByteModelsPublicGameProfile> Result; \
}; \
static inline void FBatchGetPublicGameProfilesSuccess_DelegateWrapper(const FScriptDelegate& BatchGetPublicGameProfilesSuccess, TArray<FAccelByteModelsPublicGameProfile> const& Result) \
{ \
	AccelByteBlueprintsGameProfile_eventBatchGetPublicGameProfilesSuccess_Parms Parms; \
	Parms.Result=Result; \
	BatchGetPublicGameProfilesSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_21_DELEGATE \
struct AccelByteBlueprintsGameProfile_eventBlueprintErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FBlueprintErrorHandler_DelegateWrapper(const FScriptDelegate& BlueprintErrorHandler, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	AccelByteBlueprintsGameProfile_eventBlueprintErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	BlueprintErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_20_DELEGATE \
struct AccelByteBlueprintsGameProfile_eventCreateGameProfileSuccess_Parms \
{ \
	FAccelByteModelsGameProfile Result; \
}; \
static inline void FCreateGameProfileSuccess_DelegateWrapper(const FScriptDelegate& CreateGameProfileSuccess, FAccelByteModelsGameProfile const& Result) \
{ \
	AccelByteBlueprintsGameProfile_eventCreateGameProfileSuccess_Parms Parms; \
	Parms.Result=Result; \
	CreateGameProfileSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_19_DELEGATE \
static inline void FDeleteGameProfileSuccess_DelegateWrapper(const FScriptDelegate& DeleteGameProfileSuccess) \
{ \
	DeleteGameProfileSuccess.ProcessDelegate<UObject>(NULL); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_18_DELEGATE \
struct AccelByteBlueprintsGameProfile_eventGetAllGameProfilesSuccess_Parms \
{ \
	TArray<FAccelByteModelsGameProfile> Result; \
}; \
static inline void FGetAllGameProfilesSuccess_DelegateWrapper(const FScriptDelegate& GetAllGameProfilesSuccess, TArray<FAccelByteModelsGameProfile> const& Result) \
{ \
	AccelByteBlueprintsGameProfile_eventGetAllGameProfilesSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetAllGameProfilesSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_17_DELEGATE \
struct AccelByteBlueprintsGameProfile_eventGetGameProfileAttributeSuccess_Parms \
{ \
	FAccelByteModelsGameProfileAttribute Result; \
}; \
static inline void FGetGameProfileAttributeSuccess_DelegateWrapper(const FScriptDelegate& GetGameProfileAttributeSuccess, FAccelByteModelsGameProfileAttribute const& Result) \
{ \
	AccelByteBlueprintsGameProfile_eventGetGameProfileAttributeSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetGameProfileAttributeSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_16_DELEGATE \
struct AccelByteBlueprintsGameProfile_eventGetGameProfileSuccess_Parms \
{ \
	FAccelByteModelsGameProfile Result; \
}; \
static inline void FGetGameProfileSuccess_DelegateWrapper(const FScriptDelegate& GetGameProfileSuccess, FAccelByteModelsGameProfile const& Result) \
{ \
	AccelByteBlueprintsGameProfile_eventGetGameProfileSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetGameProfileSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_15_DELEGATE \
struct AccelByteBlueprintsGameProfile_eventUpdateGameProfileAttributeSuccess_Parms \
{ \
	FAccelByteModelsGameProfile Result; \
}; \
static inline void FUpdateGameProfileAttributeSuccess_DelegateWrapper(const FScriptDelegate& UpdateGameProfileAttributeSuccess, FAccelByteModelsGameProfile const& Result) \
{ \
	AccelByteBlueprintsGameProfile_eventUpdateGameProfileAttributeSuccess_Parms Parms; \
	Parms.Result=Result; \
	UpdateGameProfileAttributeSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_14_DELEGATE \
struct AccelByteBlueprintsGameProfile_eventUpdateGameProfileSuccess_Parms \
{ \
	FAccelByteModelsGameProfile Result; \
}; \
static inline void FUpdateGameProfileSuccess_DelegateWrapper(const FScriptDelegate& UpdateGameProfileSuccess, FAccelByteModelsGameProfile const& Result) \
{ \
	AccelByteBlueprintsGameProfile_eventUpdateGameProfileSuccess_Parms Parms; \
	Parms.Result=Result; \
	UpdateGameProfileSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBatchGetPublicGameProfiles); \
	DECLARE_FUNCTION(execCreateGameProfile); \
	DECLARE_FUNCTION(execDeleteGameProfile); \
	DECLARE_FUNCTION(execGetAllGameProfiles); \
	DECLARE_FUNCTION(execGetGameProfile); \
	DECLARE_FUNCTION(execGetGameProfileAttribute); \
	DECLARE_FUNCTION(execUpdateGameProfile); \
	DECLARE_FUNCTION(execUpdateGameProfileAttribute);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBatchGetPublicGameProfiles); \
	DECLARE_FUNCTION(execCreateGameProfile); \
	DECLARE_FUNCTION(execDeleteGameProfile); \
	DECLARE_FUNCTION(execGetAllGameProfiles); \
	DECLARE_FUNCTION(execGetGameProfile); \
	DECLARE_FUNCTION(execGetGameProfileAttribute); \
	DECLARE_FUNCTION(execUpdateGameProfile); \
	DECLARE_FUNCTION(execUpdateGameProfileAttribute);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsGameProfile(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsGameProfile_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsGameProfile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsGameProfile)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsGameProfile(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsGameProfile_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsGameProfile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsGameProfile)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsGameProfile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsGameProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsGameProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsGameProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsGameProfile(UAccelByteBlueprintsGameProfile&&); \
	NO_API UAccelByteBlueprintsGameProfile(const UAccelByteBlueprintsGameProfile&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsGameProfile(UAccelByteBlueprintsGameProfile&&); \
	NO_API UAccelByteBlueprintsGameProfile(const UAccelByteBlueprintsGameProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsGameProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsGameProfile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsGameProfile)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_10_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsGameProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGameProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
